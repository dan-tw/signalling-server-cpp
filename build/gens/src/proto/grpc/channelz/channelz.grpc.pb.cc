// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: src/proto/grpc/channelz/channelz.proto

#include "src/proto/grpc/channelz/channelz.pb.h"
#include "src/proto/grpc/channelz/channelz.grpc.pb.h"

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
namespace grpc {
namespace channelz {
namespace v1 {

static const char* Channelz_method_names[] = {
  "/grpc.channelz.v1.Channelz/GetTopChannels",
  "/grpc.channelz.v1.Channelz/GetServers",
  "/grpc.channelz.v1.Channelz/GetServer",
  "/grpc.channelz.v1.Channelz/GetServerSockets",
  "/grpc.channelz.v1.Channelz/GetChannel",
  "/grpc.channelz.v1.Channelz/GetSubchannel",
  "/grpc.channelz.v1.Channelz/GetSocket",
};

std::unique_ptr< Channelz::Stub> Channelz::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Channelz::Stub> stub(new Channelz::Stub(channel));
  return stub;
}

Channelz::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetTopChannels_(Channelz_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServers_(Channelz_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServer_(Channelz_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServerSockets_(Channelz_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetChannel_(Channelz_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSubchannel_(Channelz_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSocket_(Channelz_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Channelz::Stub::GetTopChannels(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest& request, ::grpc::channelz::v1::GetTopChannelsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetTopChannels_, context, request, response);
}

void Channelz::Stub::experimental_async::GetTopChannels(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest* request, ::grpc::channelz::v1::GetTopChannelsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTopChannels_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetTopChannels(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetTopChannelsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTopChannels_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetTopChannels(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest* request, ::grpc::channelz::v1::GetTopChannelsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTopChannels_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetTopChannels(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetTopChannelsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTopChannels_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetTopChannelsResponse>* Channelz::Stub::AsyncGetTopChannelsRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetTopChannelsResponse>::Create(channel_.get(), cq, rpcmethod_GetTopChannels_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetTopChannelsResponse>* Channelz::Stub::PrepareAsyncGetTopChannelsRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetTopChannelsResponse>::Create(channel_.get(), cq, rpcmethod_GetTopChannels_, context, request, false);
}

::grpc::Status Channelz::Stub::GetServers(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServersRequest& request, ::grpc::channelz::v1::GetServersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServers_, context, request, response);
}

void Channelz::Stub::experimental_async::GetServers(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServersRequest* request, ::grpc::channelz::v1::GetServersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServers_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServers(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServers_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServers(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServersRequest* request, ::grpc::channelz::v1::GetServersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServers_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetServers(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServers_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServersResponse>* Channelz::Stub::AsyncGetServersRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServersResponse>::Create(channel_.get(), cq, rpcmethod_GetServers_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServersResponse>* Channelz::Stub::PrepareAsyncGetServersRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServersResponse>::Create(channel_.get(), cq, rpcmethod_GetServers_, context, request, false);
}

::grpc::Status Channelz::Stub::GetServer(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerRequest& request, ::grpc::channelz::v1::GetServerResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServer_, context, request, response);
}

void Channelz::Stub::experimental_async::GetServer(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerRequest* request, ::grpc::channelz::v1::GetServerResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServer_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServerResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServer_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServer(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerRequest* request, ::grpc::channelz::v1::GetServerResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServer_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetServer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServerResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServerResponse>* Channelz::Stub::AsyncGetServerRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServerResponse>::Create(channel_.get(), cq, rpcmethod_GetServer_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServerResponse>* Channelz::Stub::PrepareAsyncGetServerRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServerResponse>::Create(channel_.get(), cq, rpcmethod_GetServer_, context, request, false);
}

::grpc::Status Channelz::Stub::GetServerSockets(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest& request, ::grpc::channelz::v1::GetServerSocketsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServerSockets_, context, request, response);
}

void Channelz::Stub::experimental_async::GetServerSockets(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest* request, ::grpc::channelz::v1::GetServerSocketsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServerSockets_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServerSockets(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServerSocketsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServerSockets_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetServerSockets(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest* request, ::grpc::channelz::v1::GetServerSocketsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServerSockets_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetServerSockets(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetServerSocketsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServerSockets_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServerSocketsResponse>* Channelz::Stub::AsyncGetServerSocketsRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServerSocketsResponse>::Create(channel_.get(), cq, rpcmethod_GetServerSockets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetServerSocketsResponse>* Channelz::Stub::PrepareAsyncGetServerSocketsRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetServerSocketsResponse>::Create(channel_.get(), cq, rpcmethod_GetServerSockets_, context, request, false);
}

::grpc::Status Channelz::Stub::GetChannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetChannelRequest& request, ::grpc::channelz::v1::GetChannelResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetChannel_, context, request, response);
}

void Channelz::Stub::experimental_async::GetChannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetChannelRequest* request, ::grpc::channelz::v1::GetChannelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetChannel_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetChannel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetChannelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetChannel_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetChannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetChannelRequest* request, ::grpc::channelz::v1::GetChannelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetChannel_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetChannel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetChannelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetChannel_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetChannelResponse>* Channelz::Stub::AsyncGetChannelRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetChannelResponse>::Create(channel_.get(), cq, rpcmethod_GetChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetChannelResponse>* Channelz::Stub::PrepareAsyncGetChannelRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetChannelResponse>::Create(channel_.get(), cq, rpcmethod_GetChannel_, context, request, false);
}

::grpc::Status Channelz::Stub::GetSubchannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSubchannelRequest& request, ::grpc::channelz::v1::GetSubchannelResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSubchannel_, context, request, response);
}

void Channelz::Stub::experimental_async::GetSubchannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSubchannelRequest* request, ::grpc::channelz::v1::GetSubchannelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSubchannel_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetSubchannel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetSubchannelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSubchannel_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetSubchannel(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSubchannelRequest* request, ::grpc::channelz::v1::GetSubchannelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSubchannel_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetSubchannel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetSubchannelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSubchannel_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetSubchannelResponse>* Channelz::Stub::AsyncGetSubchannelRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSubchannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetSubchannelResponse>::Create(channel_.get(), cq, rpcmethod_GetSubchannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetSubchannelResponse>* Channelz::Stub::PrepareAsyncGetSubchannelRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSubchannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetSubchannelResponse>::Create(channel_.get(), cq, rpcmethod_GetSubchannel_, context, request, false);
}

::grpc::Status Channelz::Stub::GetSocket(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSocketRequest& request, ::grpc::channelz::v1::GetSocketResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSocket_, context, request, response);
}

void Channelz::Stub::experimental_async::GetSocket(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSocketRequest* request, ::grpc::channelz::v1::GetSocketResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSocket_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetSocket(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetSocketResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSocket_, context, request, response, std::move(f));
}

void Channelz::Stub::experimental_async::GetSocket(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSocketRequest* request, ::grpc::channelz::v1::GetSocketResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSocket_, context, request, response, reactor);
}

void Channelz::Stub::experimental_async::GetSocket(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::grpc::channelz::v1::GetSocketResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSocket_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetSocketResponse>* Channelz::Stub::AsyncGetSocketRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSocketRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetSocketResponse>::Create(channel_.get(), cq, rpcmethod_GetSocket_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::grpc::channelz::v1::GetSocketResponse>* Channelz::Stub::PrepareAsyncGetSocketRaw(::grpc::ClientContext* context, const ::grpc::channelz::v1::GetSocketRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::grpc::channelz::v1::GetSocketResponse>::Create(channel_.get(), cq, rpcmethod_GetSocket_, context, request, false);
}

Channelz::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetTopChannelsRequest, ::grpc::channelz::v1::GetTopChannelsResponse>(
          std::mem_fn(&Channelz::Service::GetTopChannels), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetServersRequest, ::grpc::channelz::v1::GetServersResponse>(
          std::mem_fn(&Channelz::Service::GetServers), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetServerRequest, ::grpc::channelz::v1::GetServerResponse>(
          std::mem_fn(&Channelz::Service::GetServer), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetServerSocketsRequest, ::grpc::channelz::v1::GetServerSocketsResponse>(
          std::mem_fn(&Channelz::Service::GetServerSockets), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetChannelRequest, ::grpc::channelz::v1::GetChannelResponse>(
          std::mem_fn(&Channelz::Service::GetChannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetSubchannelRequest, ::grpc::channelz::v1::GetSubchannelResponse>(
          std::mem_fn(&Channelz::Service::GetSubchannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Channelz_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Channelz::Service, ::grpc::channelz::v1::GetSocketRequest, ::grpc::channelz::v1::GetSocketResponse>(
          std::mem_fn(&Channelz::Service::GetSocket), this)));
}

Channelz::Service::~Service() {
}

::grpc::Status Channelz::Service::GetTopChannels(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetTopChannelsRequest* request, ::grpc::channelz::v1::GetTopChannelsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetServers(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetServersRequest* request, ::grpc::channelz::v1::GetServersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetServer(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetServerRequest* request, ::grpc::channelz::v1::GetServerResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetServerSockets(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetServerSocketsRequest* request, ::grpc::channelz::v1::GetServerSocketsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetChannel(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetChannelRequest* request, ::grpc::channelz::v1::GetChannelResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetSubchannel(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetSubchannelRequest* request, ::grpc::channelz::v1::GetSubchannelResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Channelz::Service::GetSocket(::grpc::ServerContext* context, const ::grpc::channelz::v1::GetSocketRequest* request, ::grpc::channelz::v1::GetSocketResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpc
}  // namespace channelz
}  // namespace v1

