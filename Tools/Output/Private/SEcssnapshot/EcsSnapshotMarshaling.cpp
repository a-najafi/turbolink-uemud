//Generated by TurboLink CodeGenerator, do not edit!
#include "EcsSnapshotMarshaling.h"

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSState* in, FGrpcEcssnapshotECSState* out)
{
    out->ComponentIdIdx=in->component_id_idx();
    out->EntityIdIdx=in->entity_id_idx();
    out->Value=FBytes((const uint8*)in->value().c_str(), in->value().length());
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSState* in, ::ecssnapshot::ECSState* out)
{
    out->set_component_id_idx(in->ComponentIdIdx);
    out->set_entity_id_idx(in->EntityIdIdx);
    out->set_value(std::string((const char*)(in->Value.Value.GetData()), (size_t)in->Value.Value.Num()));
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateSnapshot* in, FGrpcEcssnapshotECSStateSnapshot* out)
{
    out->State.Empty();
    for (int i=0; i<in->state_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->state(i)), &(out->State.AddZeroed_GetRef()));
    }
    out->StateComponents.Empty();
    for (int i=0; i<in->statecomponents_size(); ++i) {
        out->StateComponents.Add(UTF8_TO_TCHAR(in->statecomponents(i).c_str()));
    }
    out->StateEntities.Empty();
    for (int i=0; i<in->stateentities_size(); ++i) {
        out->StateEntities.Add(UTF8_TO_TCHAR(in->stateentities(i).c_str()));
    }
    out->StateHash=UTF8_TO_TCHAR(in->statehash().c_str());
    out->StartBlockNumber=in->startblocknumber();
    out->EndBlockNumber=in->endblocknumber();
    out->WorldAddress=UTF8_TO_TCHAR(in->worldaddress().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateSnapshot* in, ::ecssnapshot::ECSStateSnapshot* out)
{
    for(const auto& value : in->State) {
        TURBOLINK_TO_GRPC(&value, out->add_state());
    } 
    for(const auto& value : in->StateComponents) {
        out->add_statecomponents(TCHAR_TO_UTF8(*(value)));
    } 
    for(const auto& value : in->StateEntities) {
        out->add_stateentities(TCHAR_TO_UTF8(*(value)));
    } 
    out->set_statehash(TCHAR_TO_UTF8(*(in->StateHash)));
    out->set_startblocknumber(in->StartBlockNumber);
    out->set_endblocknumber(in->EndBlockNumber);
    out->set_worldaddress(TCHAR_TO_UTF8(*(in->WorldAddress)));
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::Worlds* in, FGrpcEcssnapshotWorlds* out)
{
    out->WorldAddress.Empty();
    for (int i=0; i<in->worldaddress_size(); ++i) {
        out->WorldAddress.Add(UTF8_TO_TCHAR(in->worldaddress(i).c_str()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotWorlds* in, ::ecssnapshot::Worlds* out)
{
    for(const auto& value : in->WorldAddress) {
        out->add_worldaddress(TCHAR_TO_UTF8(*(value)));
    } 
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateRequestLatest* in, FGrpcEcssnapshotECSStateRequestLatest* out)
{
    out->WorldAddress=UTF8_TO_TCHAR(in->worldaddress().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateRequestLatest* in, ::ecssnapshot::ECSStateRequestLatest* out)
{
    out->set_worldaddress(TCHAR_TO_UTF8(*(in->WorldAddress)));
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateRequestLatestStreamPruned* in, FGrpcEcssnapshotECSStateRequestLatestStreamPruned* out)
{
    out->WorldAddress=UTF8_TO_TCHAR(in->worldaddress().c_str());
    out->PruneAddress=UTF8_TO_TCHAR(in->pruneaddress().c_str());
    out->PruneComponentId=UTF8_TO_TCHAR(in->prunecomponentid().c_str());
    out->ChunkPercentage=in->chunkpercentage();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateRequestLatestStreamPruned* in, ::ecssnapshot::ECSStateRequestLatestStreamPruned* out)
{
    out->set_worldaddress(TCHAR_TO_UTF8(*(in->WorldAddress)));
    out->set_pruneaddress(TCHAR_TO_UTF8(*(in->PruneAddress)));
    out->set_prunecomponentid(TCHAR_TO_UTF8(*(in->PruneComponentId)));
    out->set_chunkpercentage(in->ChunkPercentage);
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateRequestLatestStream* in, FGrpcEcssnapshotECSStateRequestLatestStream* out)
{
    out->WorldAddress=UTF8_TO_TCHAR(in->worldaddress().c_str());
    out->ChunkPercentage=in->chunkpercentage();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateRequestLatestStream* in, ::ecssnapshot::ECSStateRequestLatestStream* out)
{
    out->set_worldaddress(TCHAR_TO_UTF8(*(in->WorldAddress)));
    out->set_chunkpercentage(in->ChunkPercentage);
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateBlockRequestLatest* in, FGrpcEcssnapshotECSStateBlockRequestLatest* out)
{
    out->WorldAddress=UTF8_TO_TCHAR(in->worldaddress().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateBlockRequestLatest* in, ::ecssnapshot::ECSStateBlockRequestLatest* out)
{
    out->set_worldaddress(TCHAR_TO_UTF8(*(in->WorldAddress)));
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateRequestAtBlock* in, FGrpcEcssnapshotECSStateRequestAtBlock* out)
{
    out->BlockNumber=in->blocknumber();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateRequestAtBlock* in, ::ecssnapshot::ECSStateRequestAtBlock* out)
{
    out->set_blocknumber(in->BlockNumber);
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::WorldsRequest* in, FGrpcEcssnapshotWorldsRequest* out)
{
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotWorldsRequest* in, ::ecssnapshot::WorldsRequest* out)
{
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateReply* in, FGrpcEcssnapshotECSStateReply* out)
{
    out->State.Empty();
    for (int i=0; i<in->state_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->state(i)), &(out->State.AddZeroed_GetRef()));
    }
    out->StateComponents.Empty();
    for (int i=0; i<in->statecomponents_size(); ++i) {
        out->StateComponents.Add(UTF8_TO_TCHAR(in->statecomponents(i).c_str()));
    }
    out->StateEntities.Empty();
    for (int i=0; i<in->stateentities_size(); ++i) {
        out->StateEntities.Add(UTF8_TO_TCHAR(in->stateentities(i).c_str()));
    }
    out->StateHash=UTF8_TO_TCHAR(in->statehash().c_str());
    out->BlockNumber=in->blocknumber();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateReply* in, ::ecssnapshot::ECSStateReply* out)
{
    for(const auto& value : in->State) {
        TURBOLINK_TO_GRPC(&value, out->add_state());
    } 
    for(const auto& value : in->StateComponents) {
        out->add_statecomponents(TCHAR_TO_UTF8(*(value)));
    } 
    for(const auto& value : in->StateEntities) {
        out->add_stateentities(TCHAR_TO_UTF8(*(value)));
    } 
    out->set_statehash(TCHAR_TO_UTF8(*(in->StateHash)));
    out->set_blocknumber(in->BlockNumber);
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateReplyV2* in, FGrpcEcssnapshotECSStateReplyV2* out)
{
    out->State.Empty();
    for (int i=0; i<in->state_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->state(i)), &(out->State.AddZeroed_GetRef()));
    }
    out->StateComponents.Empty();
    for (int i=0; i<in->statecomponents_size(); ++i) {
        out->StateComponents.Add(UTF8_TO_TCHAR(in->statecomponents(i).c_str()));
    }
    out->StateEntities.Empty();
    for (int i=0; i<in->stateentities_size(); ++i) {
        out->StateEntities.Add(FBytes((const uint8*)in->stateentities(i).c_str(), in->stateentities(i).length()));
    }
    out->StateHash=UTF8_TO_TCHAR(in->statehash().c_str());
    out->BlockNumber=in->blocknumber();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateReplyV2* in, ::ecssnapshot::ECSStateReplyV2* out)
{
    for(const auto& value : in->State) {
        TURBOLINK_TO_GRPC(&value, out->add_state());
    } 
    for(const auto& value : in->StateComponents) {
        out->add_statecomponents(TCHAR_TO_UTF8(*(value)));
    } 
    for(const auto& value : in->StateEntities) {
        out->add_stateentities(std::string((const char*)(value.Value.GetData()), (size_t)value.Value.Num()));
    } 
    out->set_statehash(TCHAR_TO_UTF8(*(in->StateHash)));
    out->set_blocknumber(in->BlockNumber);
}

void GRPC_TO_TURBOLINK(const ::ecssnapshot::ECSStateBlockReply* in, FGrpcEcssnapshotECSStateBlockReply* out)
{
    out->BlockNumber=in->blocknumber();
}

void TURBOLINK_TO_GRPC(const FGrpcEcssnapshotECSStateBlockReply* in, ::ecssnapshot::ECSStateBlockReply* out)
{
    out->set_blocknumber(in->BlockNumber);
}

