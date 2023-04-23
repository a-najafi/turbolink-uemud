//Generated by TurboLink CodeGenerator, do not edit!
#include "EcsRelayMarshaling.h"

void GRPC_TO_TURBOLINK(const ::ecsrelay::Identity* in, FGrpcEcsrelayIdentity* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayIdentity* in, ::ecsrelay::Identity* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::Signature* in, FGrpcEcsrelaySignature* out)
{
    out->Signature=UTF8_TO_TCHAR(in->signature().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySignature* in, ::ecsrelay::Signature* out)
{
    out->set_signature(TCHAR_TO_UTF8(*(in->Signature)));
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::Message* in, FGrpcEcsrelayMessage* out)
{
    out->Version=in->version();
    out->Id=UTF8_TO_TCHAR(in->id().c_str());
    out->Data=FBytes((const uint8*)in->data().c_str(), in->data().length());
    out->Timestamp=in->timestamp();
    out->Signature=UTF8_TO_TCHAR(in->signature().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayMessage* in, ::ecsrelay::Message* out)
{
    out->set_version(in->Version);
    out->set_id(TCHAR_TO_UTF8(*(in->Id)));
    out->set_data(std::string((const char*)(in->Data.Value.GetData()), (size_t)in->Data.Value.Num()));
    out->set_timestamp(in->Timestamp);
    out->set_signature(TCHAR_TO_UTF8(*(in->Signature)));
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::SubscriptionRequest* in, FGrpcEcsrelaySubscriptionRequest* out)
{
    GRPC_TO_TURBOLINK(&(in->signature()), &(out->Signature));
    {
        FGrpcEcsrelaySubscription field;
        GRPC_TO_TURBOLINK(&(in->subscription()), &field);
        out->Subscription = MakeShareable(new FGrpcEcsrelaySubscription(field));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySubscriptionRequest* in, ::ecsrelay::SubscriptionRequest* out)
{
    TURBOLINK_TO_GRPC(&(in->Signature), out->mutable_signature());
    TURBOLINK_TO_GRPC(in->Subscription.Get(), out->mutable_subscription());
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::Subscription* in, FGrpcEcsrelaySubscription* out)
{
    out->Label=UTF8_TO_TCHAR(in->label().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelaySubscription* in, ::ecsrelay::Subscription* out)
{
    out->set_label(TCHAR_TO_UTF8(*(in->Label)));
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushRequest* in, FGrpcEcsrelayPushRequest* out)
{
    out->Label=UTF8_TO_TCHAR(in->label().c_str());
    GRPC_TO_TURBOLINK(&(in->message()), &(out->Message));
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushRequest* in, ::ecsrelay::PushRequest* out)
{
    out->set_label(TCHAR_TO_UTF8(*(in->Label)));
    TURBOLINK_TO_GRPC(&(in->Message), out->mutable_message());
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushManyRequest* in, FGrpcEcsrelayPushManyRequest* out)
{
    GRPC_TO_TURBOLINK(&(in->signature()), &(out->Signature));
    out->Label=UTF8_TO_TCHAR(in->label().c_str());
    out->Messages.Empty();
    for (int i=0; i<in->messages_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->messages(i)), &(out->Messages.AddZeroed_GetRef()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushManyRequest* in, ::ecsrelay::PushManyRequest* out)
{
    TURBOLINK_TO_GRPC(&(in->Signature), out->mutable_signature());
    out->set_label(TCHAR_TO_UTF8(*(in->Label)));
    for(const auto& value : in->Messages) {
        TURBOLINK_TO_GRPC(&value, out->add_messages());
    } 
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::PushResponse* in, FGrpcEcsrelayPushResponse* out)
{
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayPushResponse* in, ::ecsrelay::PushResponse* out)
{
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::CountIdentitiesRequest* in, FGrpcEcsrelayCountIdentitiesRequest* out)
{
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayCountIdentitiesRequest* in, ::ecsrelay::CountIdentitiesRequest* out)
{
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::CountIdentitiesResponse* in, FGrpcEcsrelayCountIdentitiesResponse* out)
{
    out->Count=in->count();
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayCountIdentitiesResponse* in, ::ecsrelay::CountIdentitiesResponse* out)
{
    out->set_count(in->Count);
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::BalanceRequest* in, FGrpcEcsrelayBalanceRequest* out)
{
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayBalanceRequest* in, ::ecsrelay::BalanceRequest* out)
{
}

void GRPC_TO_TURBOLINK(const ::ecsrelay::BalanceResponse* in, FGrpcEcsrelayBalanceResponse* out)
{
    out->Wei=in->wei();
    out->Ether=in->ether();
}

void TURBOLINK_TO_GRPC(const FGrpcEcsrelayBalanceResponse* in, ::ecsrelay::BalanceResponse* out)
{
    out->set_wei(in->Wei);
    out->set_ether(in->Ether);
}

