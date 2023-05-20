//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SEcsstream/EcsStreamService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "ecs_stream.grpc.pb.h"
#include "EcsStreamService_Private.generated.h"

class UECSStreamService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::ecsstream::ECSStreamService::Stub> Stub;
};

UCLASS()
class UECSStreamServiceSubscribeToStreamLatestLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSStreamServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsstreamECSStreamBlockBundleReply& Response);
	UFUNCTION()
	void OnContextStateChanged(FGrpcContextHandle Handle, EGrpcContextState NewState);
public:
	FGrpcContextHandle Handle;
	UECSStreamService::FSubscribeToStreamLatestResponseLambda ResponseLambda;
	UECSStreamService::FSubscribeToStreamLatestFinishLambda FinishLambda;
};
