//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SEcsrelay/EcsRelayService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "ecs_relay.grpc.pb.h"
#include "EcsRelayService_Private.generated.h"

class UECSRelayService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::ecsrelay::ECSRelayService::Stub> Stub;
};

UCLASS()
class UECSRelayServiceAuthenticateLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayIdentity& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FAuthenticateResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceRevokeLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayIdentity& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FRevokeResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServicePingLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayIdentity& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FPingResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceCountAuthenticatedLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayCountIdentitiesResponse& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FCountAuthenticatedResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceCountConnectedLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayCountIdentitiesResponse& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FCountConnectedResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceSubscribeLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelaySubscription& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FSubscribeResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceUnsubscribeLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelaySubscription& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FUnsubscribeResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceOpenStreamLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayMessage& Response);
	UFUNCTION()
	void OnContextStateChanged(FGrpcContextHandle Handle, EGrpcContextState NewState);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FOpenStreamResponseLambda ResponseLambda;
	UECSRelayService::FOpenStreamFinishLambda FinishLambda;
};

UCLASS()
class UECSRelayServicePushLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayPushResponse& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FPushResponseLambda ResponseLambda;
};

UCLASS()
class UECSRelayServiceMinBalanceForPushLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UECSRelayServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcEcsrelayBalanceResponse& Response);
public:
	FGrpcContextHandle Handle;
	UECSRelayService::FMinBalanceForPushResponseLambda ResponseLambda;
};

