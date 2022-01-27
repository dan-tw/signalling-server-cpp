
#include "server.h"

SignallingServer::SignallingServer() {
      // make a thread for the authentication plugin

      // make a thead for the auth connection
}

/*SignallingServer::SignallingServer(std::shared_ptr<Channel> channel)
      : stub_(AuthenticationPlugin::NewStub(channel)) {}

AuthenticationResponse SignallingServer::Authenticate(const std::string& token, const std::string& provider) {

      AuthenticationRequest request;
      request.set_token(token);
      request.set_provider(provider);

      AuthenticationResponse response;

      // Context for the client. It could be used to convey extra information to
      // the server and/or tweak certain RPC behaviors.
      ClientContext context;

      Status status = stub_->Authenticate(&context, request, &response);

      if(status.ok()) {
            return response;
      } 


      std::cout << "GRPC failed" << std::endl;

      return response;
}*/