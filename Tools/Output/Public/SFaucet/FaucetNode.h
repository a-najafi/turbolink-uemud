//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TurboLinkGrpcClient.h"
#include "FaucetMessage.h"
#include "FaucetNode.generated.h"

class UFaucetService;
class UFaucetServiceClient;

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceDrip : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceDripDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService Drip"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceDrip* Drip(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetDripRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceDripDev : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceDripDevDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService DripDev"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceDripDev* DripDev(UObject* WorldContextObject, const FGrpcFaucetDripDevRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripDevDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripDevDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetDripDevRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceDripVerifyTweet : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceDripVerifyTweetDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetDripResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService DripVerifyTweet"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceDripVerifyTweet* DripVerifyTweet(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripVerifyTweetDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceDripVerifyTweetDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetDripRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceTimeUntilDrip : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceTimeUntilDripDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetTimeUntilDripResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService TimeUntilDrip"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceTimeUntilDrip* TimeUntilDrip(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceTimeUntilDripDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceTimeUntilDripDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetDripRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetTimeUntilDripResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceGetLinkedTwitters : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceGetLinkedTwittersDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetGetLinkedTwittersResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService GetLinkedTwitters"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceGetLinkedTwitters* GetLinkedTwitters(UObject* WorldContextObject, const FGrpcFaucetGetLinkedTwittersRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedTwittersDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedTwittersDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetGetLinkedTwittersRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetGetLinkedTwittersResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceGetLinkedTwitterForAddress : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceGetLinkedTwitterForAddressDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetLinkedTwitterForAddressResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService GetLinkedTwitterForAddress"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceGetLinkedTwitterForAddress* GetLinkedTwitterForAddress(UObject* WorldContextObject, const FGrpcFaucetLinkedTwitterForAddressRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedTwitterForAddressDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedTwitterForAddressDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetLinkedTwitterForAddressRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedTwitterForAddressResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceGetLinkedAddressForTwitter : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceGetLinkedAddressForTwitterDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetLinkedAddressForTwitterResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService GetLinkedAddressForTwitter"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceGetLinkedAddressForTwitter* GetLinkedAddressForTwitter(UObject* WorldContextObject, const FGrpcFaucetLinkedAddressForTwitterRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedAddressForTwitterDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceGetLinkedAddressForTwitterDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetLinkedAddressForTwitterRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedAddressForTwitterResponse& Response);

	void Shutdown();
};

UCLASS(ClassGroup = TurboLink)
class TURBOLINKGRPC_API UCallFaucetServiceSetLinkedTwitter : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFaucetServiceSetLinkedTwitterDelegate, const FGrpcResult&, GrpcResult, const FGrpcFaucetSetLinkedTwitterResponse&, Response);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Call FaucetService SetLinkedTwitter"), Category = "TurboLink|FaucetService")
	static UCallFaucetServiceSetLinkedTwitter* SetLinkedTwitter(UObject* WorldContextObject, const FGrpcFaucetSetLinkedTwitterRequest& Request);

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceSetLinkedTwitterDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FFaucetServiceSetLinkedTwitterDelegate OnFail;

private:
	UPROPERTY()
	UFaucetService* FaucetService;
	
	UPROPERTY()
	UFaucetServiceClient* FaucetServiceClient;
	
	FGrpcContextHandle Context;
	FGrpcFaucetSetLinkedTwitterRequest Request;

	UFUNCTION()
	void OnServiceStateChanged(EGrpcServiceState NewState);
	
	UFUNCTION()
	void OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State);

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetSetLinkedTwitterResponse& Response);

	void Shutdown();
};
