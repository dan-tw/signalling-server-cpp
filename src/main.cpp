#include <grpcpp/grpcpp.h>
#include "signalling/server.h"
#include <boost/thread/mutex.hpp>
//#include "socket/server.h"


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

int main() {

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