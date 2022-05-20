#pragma once
#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/asio/dispatch.hpp>
#include <boost/asio/strand.hpp>
#include <iostream>
#include "error.h"
#include "session.h"

namespace beast = boost::beast;         // from <boost/beast.hpp>
namespace http = beast::http;           // from <boost/beast/http.hpp>
namespace websocket = beast::websocket; // from <boost/beast/websocket.hpp>
namespace net = boost::asio;            // from <boost/asio.hpp>
using tcp = boost::asio::ip::tcp;       // from <boost/asio/ip/tcp.hpp>

class WebSocketServer : public std::enable_shared_from_this<WebSocketServer> {

    private:

        // The port number to begin listening on for incoming connections
        unsigned short _port;

        // Our input context
        net::io_context& _ioContext;

        // The acceptor used to accept incoming connections
        tcp::acceptor _acceptor;

        // The endpoint to bind to
        tcp::endpoint _endpoint;

        // begins accepting connections
        void accept();

        // called when we accept and kicks off the session
        void on_accept(beast::error_code errorCode, tcp::socket socket);

        void fail(boost::beast::error_code errorCode, std::string obj);

    public:
        WebSocketServer(net::io_context& ioc, tcp::endpoint endpoint);
        ~WebSocketServer() = default;

        // Bind and listen
        void Serve();

        // Stop listening
        void Stop();
};