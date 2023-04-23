//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcClient.h"
#include "SEcsrelay/EcsRelayMessage.h"
#include "EcsRelayClient.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceAuthenticateResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayIdentity&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceRevokeResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayIdentity&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServicePingResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayIdentity&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceCountAuthenticatedResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayCountIdentitiesResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceCountConnectedResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayCountIdentitiesResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceSubscribeResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelaySubscription&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceUnsubscribeResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelaySubscription&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceOpenStreamResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayMessage&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServicePushStreamResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayPushResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServicePushResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayPushResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnECSRelayServiceMinBalanceForPushResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcEcsrelayBalanceResponse&, Response);

UCLASS(ClassGroup = TurboLink, BlueprintType)
class TURBOLINKGRPC_API UECSRelayServiceClient : public UGrpcClient
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceAuthenticateResponse OnAuthenticateResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceRevokeResponse OnRevokeResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServicePingResponse OnPingResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceCountAuthenticatedResponse OnCountAuthenticatedResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceCountConnectedResponse OnCountConnectedResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceSubscribeResponse OnSubscribeResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceUnsubscribeResponse OnUnsubscribeResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceOpenStreamResponse OnOpenStreamResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServicePushStreamResponse OnPushStreamResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServicePushResponse OnPushResponse;

	UPROPERTY(BlueprintAssignable)
	FOnECSRelayServiceMinBalanceForPushResponse OnMinBalanceForPushResponse;

public:
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitAuthenticate();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Authenticate(FGrpcContextHandle Handle, const FGrpcEcsrelaySignature& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitRevoke();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Revoke(FGrpcContextHandle Handle, const FGrpcEcsrelaySignature& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitPing();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Ping(FGrpcContextHandle Handle, const FGrpcEcsrelaySignature& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitCountAuthenticated();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void CountAuthenticated(FGrpcContextHandle Handle, const FGrpcEcsrelayCountIdentitiesRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitCountConnected();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void CountConnected(FGrpcContextHandle Handle, const FGrpcEcsrelayCountIdentitiesRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitSubscribe();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Subscribe(FGrpcContextHandle Handle, const FGrpcEcsrelaySubscriptionRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitUnsubscribe();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Unsubscribe(FGrpcContextHandle Handle, const FGrpcEcsrelaySubscriptionRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitOpenStream();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void OpenStream(FGrpcContextHandle Handle, const FGrpcEcsrelaySignature& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitPushStream();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void PushStream(FGrpcContextHandle Handle, const FGrpcEcsrelayPushRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitPush();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Push(FGrpcContextHandle Handle, const FGrpcEcsrelayPushRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitMinBalanceForPush();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void MinBalanceForPush(FGrpcContextHandle Handle, const FGrpcEcsrelayBalanceRequest& Request);

public:
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void TryCancel(FGrpcContextHandle Handle);
};

