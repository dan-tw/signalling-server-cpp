#include <boost/beast/core.hpp>
#include <thread>
#include <grpcpp/grpcpp.h>
#include "signalling/server.h"
#include <boost/thread/mutex.hpp>
#include "socket/server.h"


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

namespace net = boost::asio;            // from <boost/asio.hpp>

int main(int argc, char* argv[]) {


    auto const address = net::ip::make_address("0.0.0.0");
    unsigned short port = 8081;
    int const threads = 2;

    // The io_context is required for all I/O
    net::io_context ioContext{threads};

    // Create and launch a listening port
    std::make_shared<WebSocketServer>(ioContext, tcp::endpoint{address, port})->Serve();

    // Run the I/O service on the requested number of threads
    std::vector<std::thread> v;
    v.reserve(threads - 1);
    for(auto i = threads - 1; i > 0; --i) {
        v.emplace_back([&ioContext] {
            ioContext.run();
        });
    }
    ioContext.run();

    return EXIT_SUCCESS;



    //SignallingServer ss(grpc::CreateChannel("127.0.0.1:55771", grpc::InsecureChannelCredentials()));
    //proto::AuthenticationResponse response;
    //response = ss.Authenticate("", "");

    //std::cout << response.outcome() << std::endl;
    //std::cout << response.payload_case() << std::endl;

     //AuthenticationPlugin greeter(
       //grpc::CreateChannel("", grpc::InsecureChannelCredentials()));
   //std::string user("world");
   //std::string reply = greeter.
   //std::cout << "Greeter received: " << reply << std::endl;
   std::cout << "Greeter received: " << std::endl;

    //WebSocketServer s();
    //SignallingServer server(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    
    //delete s;
    return 0;
};