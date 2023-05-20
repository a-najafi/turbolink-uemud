//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcContext.h"
#include "SEcssnapshot/EcsSnapshotMessage.h"
#include "SEcssnapshot/EcsSnapshotMarshaling.h"
class GrpcContext_ECSStateSnapshotService_GetStateLatest : public GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateLatest_ReaderWriter, ::ecssnapshot::ECSStateReply>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateLatest_ReaderWriter, ::ecssnapshot::ECSStateReply> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestLatest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateLatest(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateLatestStream : public GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStream_ReaderWriter, ::ecssnapshot::ECSStateReply>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStream_ReaderWriter, ::ecssnapshot::ECSStateReply> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestLatestStream& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateLatestStream(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateLatestStreamV2 : public GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamV2_ReaderWriter, ::ecssnapshot::ECSStateReplyV2>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamV2_ReaderWriter, ::ecssnapshot::ECSStateReplyV2> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestLatestStream& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateLatestStreamV2(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateLatestStreamPruned : public GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamPruned_ReaderWriter, ::ecssnapshot::ECSStateReply>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamPruned_ReaderWriter, ::ecssnapshot::ECSStateReply> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestLatestStreamPruned& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateLatestStreamPruned(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateLatestStreamPrunedV2 : public GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamPrunedV2_ReaderWriter, ::ecssnapshot::ECSStateReplyV2>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Stream<ECSStateSnapshotService_GetStateLatestStreamPrunedV2_ReaderWriter, ::ecssnapshot::ECSStateReplyV2> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestLatestStreamPruned& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateLatestStreamPrunedV2(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateBlockLatest : public GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateBlockLatest_ReaderWriter, ::ecssnapshot::ECSStateBlockReply>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateBlockLatest_ReaderWriter, ::ecssnapshot::ECSStateBlockReply> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateBlockRequestLatest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateBlockLatest(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetStateAtBlock : public GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateAtBlock_ReaderWriter, ::ecssnapshot::ECSStateReply>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Pong<ECSStateSnapshotService_GetStateAtBlock_ReaderWriter, ::ecssnapshot::ECSStateReply> Super;

private:
	void Call(const FGrpcEcssnapshotECSStateRequestAtBlock& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetStateAtBlock(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_ECSStateSnapshotService_GetWorlds : public GrpcContext_Ping_Pong<ECSStateSnapshotService_GetWorlds_ReaderWriter, ::ecssnapshot::Worlds>
{
	friend class UECSStateSnapshotServiceClient;
	typedef GrpcContext_Ping_Pong<ECSStateSnapshotService_GetWorlds_ReaderWriter, ::ecssnapshot::Worlds> Super;

private:
	void Call(const FGrpcEcssnapshotWorldsRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_ECSStateSnapshotService_GetWorlds(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};
