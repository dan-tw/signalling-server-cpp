#pragma once
#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/asio/dispatch.hpp>
#include <boost/asio/strand.hpp>
#include "error.h" 

namespace beast = boost::beast;         // from <boost/beast.hpp>
namespace http = beast::http;           // from <boost/beast/http.hpp>
namespace websocket = beast::websocket; // from <boost/beast/websocket.hpp>
namespace net = boost::asio;            // from <boost/asio.hpp>
using tcp = boost::asio::ip::tcp;       // from <boost/asio/ip/tcp.hpp>

class WebSocketSession : public std::enable_shared_from_this<WebSocketSession> {

    private:

        // Our actual socket that we get as a result of accepting a connection on our websocket
        websocket::stream<beast::tcp_stream> _ws;

        // Buffer
        beast::flat_buffer _buffer;

        void run();

        void on_accept(beast::error_code ec);

        void read();

        void on_read(beast::error_code ec, std::size_t bytes_transferred);

        void on_write(beast::error_code ec, std::size_t bytes_transferred);

        void fail(boost::beast::error_code errorCode, std::string obj);
       

    public:
        explicit WebSocketSession(tcp::socket&& socket);
        ~WebSocketSession() = default;
};