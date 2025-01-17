//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcService.h"
#include "SFaucet/FaucetClient.h"
#include "FaucetService.generated.h"

class UTurboLinkGrpcManager;

UCLASS(ClassGroup = TurboLink, BlueprintType)
class TURBOLINKGRPC_API UFaucetService : public UGrpcService
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	virtual void Connect() override;
	
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	virtual EGrpcServiceState GetServiceState() const override;

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	UFaucetServiceClient* MakeClient();

private:
	virtual void Shutdown() override;

	UPROPERTY()
	UFaucetServiceClient* InnerClient; 
public:
	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)> FDripResponseLambda;
	void CallDrip(const FGrpcFaucetDripRequest& Request, FDripResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)> FDripDevResponseLambda;
	void CallDripDev(const FGrpcFaucetDripDevRequest& Request, FDripDevResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)> FDripVerifyTweetResponseLambda;
	void CallDripVerifyTweet(const FGrpcFaucetDripRequest& Request, FDripVerifyTweetResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetTimeUntilDripResponse& Response)> FTimeUntilDripResponseLambda;
	void CallTimeUntilDrip(const FGrpcFaucetDripRequest& Request, FTimeUntilDripResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetGetLinkedTwittersResponse& Response)> FGetLinkedTwittersResponseLambda;
	void CallGetLinkedTwitters(const FGrpcFaucetGetLinkedTwittersRequest& Request, FGetLinkedTwittersResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedTwitterForAddressResponse& Response)> FGetLinkedTwitterForAddressResponseLambda;
	void CallGetLinkedTwitterForAddress(const FGrpcFaucetLinkedTwitterForAddressRequest& Request, FGetLinkedTwitterForAddressResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedAddressForTwitterResponse& Response)> FGetLinkedAddressForTwitterResponseLambda;
	void CallGetLinkedAddressForTwitter(const FGrpcFaucetLinkedAddressForTwitterRequest& Request, FGetLinkedAddressForTwitterResponseLambda ResponseLambda);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcFaucetSetLinkedTwitterResponse& Response)> FSetLinkedTwitterResponseLambda;
	void CallSetLinkedTwitter(const FGrpcFaucetSetLinkedTwitterRequest& Request, FSetLinkedTwitterResponseLambda ResponseLambda);

public:
	class Private;
	Private* const d = nullptr;

public:
	UFaucetService();
	virtual ~UFaucetService();
};

