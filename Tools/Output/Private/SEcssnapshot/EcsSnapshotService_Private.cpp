//Generated by TurboLink CodeGenerator, do not edit!
#include "EcsSnapshotService_Private.h"

void UECSStateSnapshotServiceGetStateLatestLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReply& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetStateLatestResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestLambdaWrapper::OnResponse);
}

void UECSStateSnapshotServiceGetStateLatestStreamLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReply& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UECSStateSnapshotServiceGetStateLatestStreamLambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnGetStateLatestStreamResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamLambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamLambdaWrapper::OnContextStateChanged);
	}
}

void UECSStateSnapshotServiceGetStateLatestStreamV2LambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReplyV2& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UECSStateSnapshotServiceGetStateLatestStreamV2LambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnGetStateLatestStreamV2Response.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamV2LambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamV2LambdaWrapper::OnContextStateChanged);
	}
}

void UECSStateSnapshotServiceGetStateLatestStreamPrunedLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReply& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UECSStateSnapshotServiceGetStateLatestStreamPrunedLambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnGetStateLatestStreamPrunedResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamPrunedLambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamPrunedLambdaWrapper::OnContextStateChanged);
	}
}

void UECSStateSnapshotServiceGetStateLatestStreamPrunedV2LambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReplyV2& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UECSStateSnapshotServiceGetStateLatestStreamPrunedV2LambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnGetStateLatestStreamPrunedV2Response.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamPrunedV2LambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateLatestStreamPrunedV2LambdaWrapper::OnContextStateChanged);
	}
}

void UECSStateSnapshotServiceGetStateBlockLatestLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateBlockReply& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetStateBlockLatestResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateBlockLatestLambdaWrapper::OnResponse);
}

void UECSStateSnapshotServiceGetStateAtBlockLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotECSStateReply& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetStateAtBlockResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetStateAtBlockLambdaWrapper::OnResponse);
}

void UECSStateSnapshotServiceGetWorldsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcEcssnapshotWorlds& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetWorldsResponse.RemoveDynamic(this, &UECSStateSnapshotServiceGetWorldsLambdaWrapper::OnResponse);
}

