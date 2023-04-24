//Generated by TurboLink CodeGenerator, do not edit!
#include "ModeContext.h"
#include "SMode/ModeClient.h"
#include "ModeService_Private.h"
#include "ModeMarshaling.h"
#include "TurboLinkGrpcManager.h"

GrpcContext_QueryLayer_GetState::GrpcContext_QueryLayer_GetState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client)
	: Super(_Handle, _Service, _Client)
{
}

void GrpcContext_QueryLayer_GetState::Call(const FGrpcModeStateRequest& Request)
{
	check(GetState() == EGrpcContextState::Ready);
	UpdateState(EGrpcContextState::Initialing);

	::mode::StateRequest rpcRequest;
	TURBOLINK_TO_GRPC(&Request, &rpcRequest);

	UQueryLayer* service = (UQueryLayer*)Service;
	RpcReaderWriter = service->d->Stub->AsyncGetState(RpcContext.get(), rpcRequest, service->TurboLinkManager->d->CompletionQueue.get());
	RpcReaderWriter->ReadInitialMetadata(InitialTag);
}

void GrpcContext_QueryLayer_GetState::OnRpcEvent(bool Ok, const void* EventTag)
{
	Super::OnRpcEventInternal(Ok, EventTag, [this](const FGrpcResult& _Result, ::mode::QueryLayerStateResponse* _RpcResponse) {
		UQueryLayerClient* client = (UQueryLayerClient*)(this->Client);
		if (!(client->OnGetStateResponse.IsBound())) return;

		FGrpcModeQueryLayerStateResponse response;
		if (_RpcResponse) {
			GRPC_TO_TURBOLINK(_RpcResponse, &response);
		}
		client->OnGetStateResponse.Broadcast(Handle, _Result, response);
	});
}

GrpcContext_QueryLayer_StreamState::GrpcContext_QueryLayer_StreamState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client)
	: Super(_Handle, _Service, _Client)
{
}

void GrpcContext_QueryLayer_StreamState::Call(const FGrpcModeStateRequest& Request)
{
	check(GetState() == EGrpcContextState::Ready);
	UpdateState(EGrpcContextState::Initialing);

	::mode::StateRequest rpcRequest;
	TURBOLINK_TO_GRPC(&Request, &rpcRequest);

	UQueryLayer* service = (UQueryLayer*)Service;
	RpcReaderWriter = service->d->Stub->AsyncStreamState(RpcContext.get(), rpcRequest, service->TurboLinkManager->d->CompletionQueue.get(), InitialTag);
}

void GrpcContext_QueryLayer_StreamState::OnRpcEvent(bool Ok, const void* EventTag)
{
	Super::OnRpcEventInternal(Ok, EventTag, [this](const FGrpcResult& _Result, ::mode::QueryLayerStateStreamResponse* _RpcResponse) {
		UQueryLayerClient* client = (UQueryLayerClient*)(this->Client);
		if (!(client->OnStreamStateResponse.IsBound())) return;

		FGrpcModeQueryLayerStateStreamResponse response;
		if (_RpcResponse) {
			GRPC_TO_TURBOLINK(_RpcResponse, &response);
		}
		client->OnStreamStateResponse.Broadcast(Handle, _Result, response);
	});
}

GrpcContext_QueryLayer_Single__GetState::GrpcContext_QueryLayer_Single__GetState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client)
	: Super(_Handle, _Service, _Client)
{
}

void GrpcContext_QueryLayer_Single__GetState::Call(const FGrpcModeSingle__StateRequest& Request)
{
	check(GetState() == EGrpcContextState::Ready);
	UpdateState(EGrpcContextState::Initialing);

	::mode::Single__StateRequest rpcRequest;
	TURBOLINK_TO_GRPC(&Request, &rpcRequest);

	UQueryLayer* service = (UQueryLayer*)Service;
	RpcReaderWriter = service->d->Stub->AsyncSingle__GetState(RpcContext.get(), rpcRequest, service->TurboLinkManager->d->CompletionQueue.get());
	RpcReaderWriter->ReadInitialMetadata(InitialTag);
}

void GrpcContext_QueryLayer_Single__GetState::OnRpcEvent(bool Ok, const void* EventTag)
{
	Super::OnRpcEventInternal(Ok, EventTag, [this](const FGrpcResult& _Result, ::mode::QueryLayerStateResponse* _RpcResponse) {
		UQueryLayerClient* client = (UQueryLayerClient*)(this->Client);
		if (!(client->OnSingle__GetStateResponse.IsBound())) return;

		FGrpcModeQueryLayerStateResponse response;
		if (_RpcResponse) {
			GRPC_TO_TURBOLINK(_RpcResponse, &response);
		}
		client->OnSingle__GetStateResponse.Broadcast(Handle, _Result, response);
	});
}

GrpcContext_QueryLayer_Single__StreamState::GrpcContext_QueryLayer_Single__StreamState(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client)
	: Super(_Handle, _Service, _Client)
{
}

void GrpcContext_QueryLayer_Single__StreamState::Call(const FGrpcModeSingle__StateRequest& Request)
{
	check(GetState() == EGrpcContextState::Ready);
	UpdateState(EGrpcContextState::Initialing);

	::mode::Single__StateRequest rpcRequest;
	TURBOLINK_TO_GRPC(&Request, &rpcRequest);

	UQueryLayer* service = (UQueryLayer*)Service;
	RpcReaderWriter = service->d->Stub->AsyncSingle__StreamState(RpcContext.get(), rpcRequest, service->TurboLinkManager->d->CompletionQueue.get(), InitialTag);
}

void GrpcContext_QueryLayer_Single__StreamState::OnRpcEvent(bool Ok, const void* EventTag)
{
	Super::OnRpcEventInternal(Ok, EventTag, [this](const FGrpcResult& _Result, ::mode::QueryLayerStateStreamResponse* _RpcResponse) {
		UQueryLayerClient* client = (UQueryLayerClient*)(this->Client);
		if (!(client->OnSingle__StreamStateResponse.IsBound())) return;

		FGrpcModeQueryLayerStateStreamResponse response;
		if (_RpcResponse) {
			GRPC_TO_TURBOLINK(_RpcResponse, &response);
		}
		client->OnSingle__StreamStateResponse.Broadcast(Handle, _Result, response);
	});
}
