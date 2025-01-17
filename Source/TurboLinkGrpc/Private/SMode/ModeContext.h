//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcContext.h"
#include "SMode/ModeMessage.h"
#include "SMode/ModeMarshaling.h"
class GrpcContext_QueryLayer_GetState : public GrpcContext_Ping_Pong<QueryLayer_GetState_ReaderWriter, ::mode::QueryLayerStateResponse>
{
	friend class UQueryLayerClient;
	typedef GrpcContext_Ping_Pong<QueryLayer_GetState_ReaderWriter, ::mode::QueryLayerStateResponse> Super;

private:
	void Call(const FGrpcModeStateRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_QueryLayer_GetState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_QueryLayer_StreamState : public GrpcContext_Ping_Stream<QueryLayer_StreamState_ReaderWriter, ::mode::QueryLayerStateStreamResponse>
{
	friend class UQueryLayerClient;
	typedef GrpcContext_Ping_Stream<QueryLayer_StreamState_ReaderWriter, ::mode::QueryLayerStateStreamResponse> Super;

private:
	void Call(const FGrpcModeStateRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_QueryLayer_StreamState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_QueryLayer_Single__GetState : public GrpcContext_Ping_Pong<QueryLayer_Single__GetState_ReaderWriter, ::mode::QueryLayerStateResponse>
{
	friend class UQueryLayerClient;
	typedef GrpcContext_Ping_Pong<QueryLayer_Single__GetState_ReaderWriter, ::mode::QueryLayerStateResponse> Super;

private:
	void Call(const FGrpcModeSingle__StateRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_QueryLayer_Single__GetState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_QueryLayer_Single__StreamState : public GrpcContext_Ping_Stream<QueryLayer_Single__StreamState_ReaderWriter, ::mode::QueryLayerStateStreamResponse>
{
	friend class UQueryLayerClient;
	typedef GrpcContext_Ping_Stream<QueryLayer_Single__StreamState_ReaderWriter, ::mode::QueryLayerStateStreamResponse> Super;

private:
	void Call(const FGrpcModeSingle__StateRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_QueryLayer_Single__StreamState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

