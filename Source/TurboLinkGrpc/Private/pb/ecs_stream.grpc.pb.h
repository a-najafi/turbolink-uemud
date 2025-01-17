// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ecs_stream.proto
#ifndef GRPC_ecs_5fstream_2eproto__INCLUDED
#define GRPC_ecs_5fstream_2eproto__INCLUDED

#include "ecs_stream.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace ecsstream {

// The Stream Service definition.
class ECSStreamService final {
 public:
  static constexpr char const* service_full_name() {
    return "ecsstream.ECSStreamService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Opens a cursor to receive the latest ECS events and additional data specified via request.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>> SubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>>(SubscribeToStreamLatestRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>> AsyncSubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>>(AsyncSubscribeToStreamLatestRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>> PrepareAsyncSubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>>(PrepareAsyncSubscribeToStreamLatestRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Opens a cursor to receive the latest ECS events and additional data specified via request.
      virtual void SubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest* request, ::grpc::ClientReadReactor< ::ecsstream::ECSStreamBlockBundleReply>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>* SubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>* AsyncSubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ecsstream::ECSStreamBlockBundleReply>* PrepareAsyncSubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::ecsstream::ECSStreamBlockBundleReply>> SubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ecsstream::ECSStreamBlockBundleReply>>(SubscribeToStreamLatestRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>> AsyncSubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>>(AsyncSubscribeToStreamLatestRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>> PrepareAsyncSubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>>(PrepareAsyncSubscribeToStreamLatestRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SubscribeToStreamLatest(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest* request, ::grpc::ClientReadReactor< ::ecsstream::ECSStreamBlockBundleReply>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::ecsstream::ECSStreamBlockBundleReply>* SubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request) override;
    ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>* AsyncSubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ecsstream::ECSStreamBlockBundleReply>* PrepareAsyncSubscribeToStreamLatestRaw(::grpc::ClientContext* context, const ::ecsstream::ECSStreamBlockBundleRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubscribeToStreamLatest_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Opens a cursor to receive the latest ECS events and additional data specified via request.
    virtual ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* context, const ::ecsstream::ECSStreamBlockBundleRequest* request, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeToStreamLatest(::grpc::ServerContext* context, ::ecsstream::ECSStreamBlockBundleRequest* request, ::grpc::ServerAsyncWriter< ::ecsstream::ECSStreamBlockBundleReply>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubscribeToStreamLatest<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::ecsstream::ECSStreamBlockBundleRequest, ::ecsstream::ECSStreamBlockBundleReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::ecsstream::ECSStreamBlockBundleRequest* request) { return this->SubscribeToStreamLatest(context, request); }));
    }
    ~WithCallbackMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::ecsstream::ECSStreamBlockBundleReply>* SubscribeToStreamLatest(
      ::grpc::CallbackServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SubscribeToStreamLatest<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeToStreamLatest(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->SubscribeToStreamLatest(context, request); }));
    }
    ~WithRawCallbackMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* SubscribeToStreamLatest(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_SubscribeToStreamLatest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_SubscribeToStreamLatest() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::ecsstream::ECSStreamBlockBundleRequest, ::ecsstream::ECSStreamBlockBundleReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::ecsstream::ECSStreamBlockBundleRequest, ::ecsstream::ECSStreamBlockBundleReply>* streamer) {
                       return this->StreamedSubscribeToStreamLatest(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_SubscribeToStreamLatest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubscribeToStreamLatest(::grpc::ServerContext* /*context*/, const ::ecsstream::ECSStreamBlockBundleRequest* /*request*/, ::grpc::ServerWriter< ::ecsstream::ECSStreamBlockBundleReply>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSubscribeToStreamLatest(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ecsstream::ECSStreamBlockBundleRequest,::ecsstream::ECSStreamBlockBundleReply>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_SubscribeToStreamLatest<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_SubscribeToStreamLatest<Service > StreamedService;
};

}  // namespace ecsstream


#endif  // GRPC_ecs_5fstream_2eproto__INCLUDED
