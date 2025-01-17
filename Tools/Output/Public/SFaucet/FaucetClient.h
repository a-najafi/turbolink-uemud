//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcClient.h"
#include "SFaucet/FaucetMessage.h"
#include "FaucetClient.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceDripResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceDripDevResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceDripVerifyTweetResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceTimeUntilDripResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetTimeUntilDripResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceGetLinkedTwittersResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetGetLinkedTwittersResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceGetLinkedTwitterForAddressResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetLinkedTwitterForAddressResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceGetLinkedAddressForTwitterResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetLinkedAddressForTwitterResponse&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFaucetServiceSetLinkedTwitterResponse, FGrpcContextHandle, Handle, const FGrpcResult&, GrpcResult, const FGrpcFaucetSetLinkedTwitterResponse&, Response);

UCLASS(ClassGroup = TurboLink, BlueprintType)
class TURBOLINKGRPC_API UFaucetServiceClient : public UGrpcClient
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceDripResponse OnDripResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceDripDevResponse OnDripDevResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceDripVerifyTweetResponse OnDripVerifyTweetResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceTimeUntilDripResponse OnTimeUntilDripResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceGetLinkedTwittersResponse OnGetLinkedTwittersResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceGetLinkedTwitterForAddressResponse OnGetLinkedTwitterForAddressResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceGetLinkedAddressForTwitterResponse OnGetLinkedAddressForTwitterResponse;

	UPROPERTY(BlueprintAssignable)
	FOnFaucetServiceSetLinkedTwitterResponse OnSetLinkedTwitterResponse;

public:
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitDrip();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void Drip(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitDripDev();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void DripDev(FGrpcContextHandle Handle, const FGrpcFaucetDripDevRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitDripVerifyTweet();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void DripVerifyTweet(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitTimeUntilDrip();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void TimeUntilDrip(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitGetLinkedTwitters();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void GetLinkedTwitters(FGrpcContextHandle Handle, const FGrpcFaucetGetLinkedTwittersRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitGetLinkedTwitterForAddress();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void GetLinkedTwitterForAddress(FGrpcContextHandle Handle, const FGrpcFaucetLinkedTwitterForAddressRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitGetLinkedAddressForTwitter();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void GetLinkedAddressForTwitter(FGrpcContextHandle Handle, const FGrpcFaucetLinkedAddressForTwitterRequest& Request);

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	FGrpcContextHandle InitSetLinkedTwitter();

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void SetLinkedTwitter(FGrpcContextHandle Handle, const FGrpcFaucetSetLinkedTwitterRequest& Request);

public:
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	void TryCancel(FGrpcContextHandle Handle);
};

