#include <grpcpp/grpcpp.h>
#include <boost/beast.hpp>

#include "../../build/gen/auth.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using proto::AuthenticationPlugin;
using proto::AuthenticationRequest;
using proto::AuthenticationResponse;
using namespace boost::beast::websocket;

class SignallingServer {


    public:
        SignallingServer();
        //SignallingServer(std::shared_ptr<Channel> channel);

        //AuthenticationResponse Authenticate(const std::string& token, const std::string& provider);

    private:
    //instanceServer websocket
    //playerServer websocket
        boost::asio::io_context ioc;
        boost::beast::tcp_stream sock;
        int port;

        //std::unique_ptr<AuthenticationPlugin::Stub> stub_;
};

// protoc -I ./proto --grpc_out=./build/gen --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./proto/auth.proto
// protoc -I ./proto --cpp_out=./build/gen ./proto/auth.proto