//Generated by TurboLink CodeGenerator, do not edit!
#include "SEcsrelay/EcsRelayMessage.h"
#include "TurboLinkGrpcContext.h"
#include "ecs_relay.pb.h"

void GRPC_TO_TURBOLINK(const ::ecsrelay::Identity* in, FGrpcEcsrelayIdentity* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayIdentity* in, ::ecsrelay::Identity* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::Signature* in, FGrpcEcsrelaySignature* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySignature* in, ::ecsrelay::Signature* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::Message* in, FGrpcEcsrelayMessage* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayMessage* in, ::ecsrelay::Message* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::SubscriptionRequest* in, FGrpcEcsrelaySubscriptionRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySubscriptionRequest* in, ::ecsrelay::SubscriptionRequest* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::Subscription* in, FGrpcEcsrelaySubscription* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySubscription* in, ::ecsrelay::Subscription* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushRequest* in, FGrpcEcsrelayPushRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushRequest* in, ::ecsrelay::PushRequest* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushManyRequest* in, FGrpcEcsrelayPushManyRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushManyRequest* in, ::ecsrelay::PushManyRequest* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushResponse* in, FGrpcEcsrelayPushResponse* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushResponse* in, ::ecsrelay::PushResponse* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::CountIdentitiesRequest* in, FGrpcEcsrelayCountIdentitiesRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayCountIdentitiesRequest* in, ::ecsrelay::CountIdentitiesRequest* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::CountIdentitiesResponse* in, FGrpcEcsrelayCountIdentitiesResponse* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayCountIdentitiesResponse* in, ::ecsrelay::CountIdentitiesResponse* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::BalanceRequest* in, FGrpcEcsrelayBalanceRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayBalanceRequest* in, ::ecsrelay::BalanceRequest* out);

void GRPC_TO_TURBOLINK(const ::ecsrelay::BalanceResponse* in, FGrpcEcsrelayBalanceResponse* out);
void TURBOLINK_TO_GRPC(const FGrpcEcsrelayBalanceResponse* in, ::ecsrelay::BalanceResponse* out);

typedef grpc::ClientAsyncResponseReader<::ecsrelay::Identity> ECSRelayService_Authenticate_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::Identity> ECSRelayService_Revoke_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::Identity> ECSRelayService_Ping_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::CountIdentitiesResponse> ECSRelayService_CountAuthenticated_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::CountIdentitiesResponse> ECSRelayService_CountConnected_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::Subscription> ECSRelayService_Subscribe_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::Subscription> ECSRelayService_Unsubscribe_ReaderWriter;
typedef grpc::ClientAsyncReader<::ecsrelay::Message> ECSRelayService_OpenStream_ReaderWriter;
typedef grpc::ClientAsyncReaderWriter<::ecsrelay::PushRequest, ::ecsrelay::PushResponse> ECSRelayService_PushStream_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::PushResponse> ECSRelayService_Push_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::ecsrelay::BalanceResponse> ECSRelayService_MinBalanceForPush_ReaderWriter;
