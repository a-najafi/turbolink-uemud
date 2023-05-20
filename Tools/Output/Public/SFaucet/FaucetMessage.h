//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcMessage.h"
#include "FaucetMessage.generated.h"

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.LinkedTwitterPair"))
struct FGrpcFaucetLinkedTwitterPair : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Username = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.FaucetStore"))
struct FGrpcFaucetFaucetStore : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TMap<FString, FString> AddressToUsername;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TMap<FString, FString> UsernameToAddress;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TMap<FString, int64> LatestDrip;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FDouble64 TotalDripCount = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.DripRequest"))
struct FGrpcFaucetDripRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Username = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.DripDevRequest"))
struct FGrpcFaucetDripDevRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.DripResponse"))
struct FGrpcFaucetDripResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString DripTxHash = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString EcsTxHash = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.TimeUntilDripResponse"))
struct FGrpcFaucetTimeUntilDripResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FDouble64 TimeUntilDripMinutes = 0;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FDouble64 TimeUntilDripSeconds = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.GetLinkedTwittersRequest"))
struct FGrpcFaucetGetLinkedTwittersRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.GetLinkedTwittersResponse"))
struct FGrpcFaucetGetLinkedTwittersResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FGrpcFaucetLinkedTwitterPair> LinkedTwitters;
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.LinkedTwitterForAddressRequest"))
struct FGrpcFaucetLinkedTwitterForAddressRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.LinkedTwitterForAddressResponse"))
struct FGrpcFaucetLinkedTwitterForAddressResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Username = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.LinkedAddressForTwitterRequest"))
struct FGrpcFaucetLinkedAddressForTwitterRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Username = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.LinkedAddressForTwitterResponse"))
struct FGrpcFaucetLinkedAddressForTwitterResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.SetLinkedTwitterRequest"))
struct FGrpcFaucetSetLinkedTwitterRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Address = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Username = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString Signature = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Faucet.SetLinkedTwitterResponse"))
struct FGrpcFaucetSetLinkedTwitterResponse : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()
};