// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: auth.proto

#include "auth.pb.h"
#include "auth.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace proto {

static const char* AuthenticationPlugin_method_names[] = {
  "/proto.AuthenticationPlugin/Authenticate",
};

std::unique_ptr< AuthenticationPlugin::Stub> AuthenticationPlugin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AuthenticationPlugin::Stub> stub(new AuthenticationPlugin::Stub(channel));
  return stub;
}

AuthenticationPlugin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Authenticate_(AuthenticationPlugin_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AuthenticationPlugin::Stub::Authenticate(::grpc::ClientContext* context, const ::proto::AuthenticationRequest& request, ::proto::AuthenticationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Authenticate_, context, request, response);
}

void AuthenticationPlugin::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::proto::AuthenticationRequest* request, ::proto::AuthenticationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, std::move(f));
}

void AuthenticationPlugin::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::AuthenticationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, std::move(f));
}

void AuthenticationPlugin::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::proto::AuthenticationRequest* request, ::proto::AuthenticationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, reactor);
}

void AuthenticationPlugin::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::AuthenticationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::proto::AuthenticationResponse>* AuthenticationPlugin::Stub::AsyncAuthenticateRaw(::grpc::ClientContext* context, const ::proto::AuthenticationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::AuthenticationResponse>::Create(channel_.get(), cq, rpcmethod_Authenticate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::AuthenticationResponse>* AuthenticationPlugin::Stub::PrepareAsyncAuthenticateRaw(::grpc::ClientContext* context, const ::proto::AuthenticationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::AuthenticationResponse>::Create(channel_.get(), cq, rpcmethod_Authenticate_, context, request, false);
}

AuthenticationPlugin::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AuthenticationPlugin_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AuthenticationPlugin::Service, ::proto::AuthenticationRequest, ::proto::AuthenticationResponse>(
          std::mem_fn(&AuthenticationPlugin::Service::Authenticate), this)));
}

AuthenticationPlugin::Service::~Service() {
}

::grpc::Status AuthenticationPlugin::Service::Authenticate(::grpc::ServerContext* context, const ::proto::AuthenticationRequest* request, ::proto::AuthenticationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace proto

