#include "server.h"


WebSocketServer::WebSocketServer(net::io_context& ioContext, tcp::endpoint endpoint) : _ioContext(ioContext), _acceptor(ioContext) {

    beast::error_code errorCode;
    _endpoint = endpoint;

    // Open the acceptor
    _acceptor.open(_endpoint.protocol(), errorCode);
    if(errorCode) {
        fail(errorCode, "websocket: failed to open the acceptor");
        return;
    }

    // Allow address reuse
    _acceptor.set_option(net::socket_base::reuse_address(true), errorCode);
    if(errorCode) {
        fail(errorCode, "websocket: set_option failed enabling address resuse");
        return;
    }

    //  Bind to the server address
    _acceptor.bind(_endpoint, errorCode);
    if(errorCode) {
        fail(errorCode, "websocket: failed to bind to server address");
    }

    // Start listening for connections
    _acceptor.listen(net::socket_base::max_listen_connections, errorCode);
    if(errorCode) {
        fail(errorCode, "websocket: failed to listen");
        return;
    }
}

void WebSocketServer::Serve() { 

    // Start accepting incoming connections
    accept();
}

void WebSocketServer::Stop() {

    beast::error_code errorCode;

    _acceptor.close(errorCode);
    if(errorCode) {
        fail(errorCode, "websocket: failed to stop");
        return;
    }
}

void WebSocketServer::accept() {
    
    beast::error_code errorCode;

    _acceptor.async_accept(net::make_strand(_ioContext), beast::bind_front_handler(&WebSocketServer::on_accept, shared_from_this()));
}


void WebSocketServer::on_accept(beast::error_code errorCode, tcp::socket socket)
{
    if(errorCode) {
        fail(errorCode, "websocket: failed on accept");
    } else {
        // Create the session and run it
        std::make_shared<WebSocketSession>(std::move(socket));
    }

    // Accept another connection
    accept();
}


void WebSocketServer::fail(boost::beast::error_code errorCode, std::string obj) {
    std::cerr << obj << ": " << errorCode.message() << "\n";
}