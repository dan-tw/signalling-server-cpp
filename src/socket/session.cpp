
#include "session.h"

WebSocketSession::WebSocketSession(tcp::socket&& socket) : _ws(std::move(socket)) {}

void WebSocketSession::run() {
    
    // We need to be executing within a strand to perform async operations
    // on the I/O objects in this session. Although not strictly necessary
    // for single-threaded contexts, this example code is written to be
    // thread-safe by default.
    net::dispatch(_ws.get_executor(), beast::bind_front_handler(&WebSocketSession::on_run, shared_from_this()));
}

void WebSocketSession::on_run() {

    // Set suggested timeout settings for the websocket
    _ws.set_option(websocket::stream_base::timeout::suggested(beast::role_type::server));

    // Set a decorator to change the Server of the handshake
    _ws.set_option(websocket::stream_base::decorator([](websocket::response_type& res) {
        res.set(http::field::server, std::string(BOOST_BEAST_VERSION_STRING) + " signalling-server");
    }));

    // Accept the websocket handshake
    _ws.async_accept(beast::bind_front_handler(&WebSocketSession::on_accept, shared_from_this()));
}

void WebSocketSession::on_accept(beast::error_code errorCode) {

    if(errorCode) {
        fail(errorCode, "websocket session: failed on accept");
        return;
    }

    // Read a message
    read();
}

void WebSocketSession::read() {

    // Read a message into our buffer
    _ws.async_read(_buffer, beast::bind_front_handler(&WebSocketSession::on_read, shared_from_this()));
}

void WebSocketSession::on_read(beast::error_code errorCode, std::size_t bytes_transferred) {
    
    boost::ignore_unused(bytes_transferred);

    // This indicates that the session was closed
    if(errorCode == websocket::error::closed) {
        return;
    }

    if(errorCode) {
        fail(errorCode, "websocket session: failed on read");
        return;
    }

    // Echo the message
    _ws.text(_ws.got_text());
    _ws.async_write(_buffer.data(), beast::bind_front_handler(&WebSocketSession::on_write, shared_from_this()));
}

void WebSocketSession::on_write(beast::error_code ec, std::size_t bytes_transferred) {
    
    boost::ignore_unused(bytes_transferred);

    if(ec) {
        fail(ec, "websocket session: failed on write");
        return;
    }

    // Clear the buffer
    _buffer.consume(_buffer.size());

    // Do another read
    read();
}

void WebSocketSession::fail(boost::beast::error_code errorCode, std::string obj) {
    std::cerr << obj << ": " << errorCode.message() << "\n";
}