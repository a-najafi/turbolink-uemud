//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcMessage.h"
#include "EcsSnapshotMessage.generated.h"

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSState"))
struct FGrpcEcssnapshotECSState : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 ComponentIdIdx = 0;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 EntityIdIdx = 0;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FBytes Value;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateSnapshot"))
struct FGrpcEcssnapshotECSStateSnapshot : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FGrpcEcssnapshotECSState> State;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> StateComponents;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> StateEntities;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString StateHash = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 StartBlockNumber = 0;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 EndBlockNumber = 0;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString WorldAddress = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.Worlds"))
struct FGrpcEcssnapshotWorlds : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> WorldAddress;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateRequestLatest"))
struct FGrpcEcssnapshotECSStateRequestLatest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString WorldAddress = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateRequestLatestStreamPruned"))
struct FGrpcEcssnapshotECSStateRequestLatestStreamPruned : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString WorldAddress = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString PruneAddress = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString PruneComponentId = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 ChunkPercentage = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateRequestLatestStream"))
struct FGrpcEcssnapshotECSStateRequestLatestStream : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString WorldAddress = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 ChunkPercentage = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateBlockRequestLatest"))
struct FGrpcEcssnapshotECSStateBlockRequestLatest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString WorldAddress = "";
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateRequestAtBlock"))
struct FGrpcEcssnapshotECSStateRequestAtBlock : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt64 BlockNumber = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.WorldsRequest"))
struct FGrpcEcssnapshotWorldsRequest : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateReply"))
struct FGrpcEcssnapshotECSStateReply : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FGrpcEcssnapshotECSState> State;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> StateComponents;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> StateEntities;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString StateHash = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 BlockNumber = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateReplyV2"))
struct FGrpcEcssnapshotECSStateReplyV2 : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FGrpcEcssnapshotECSState> State;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FString> StateComponents;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    TArray<FBytes> StateEntities;

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FString StateHash = "";

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 BlockNumber = 0;
};

USTRUCT(BlueprintType, meta = (DisplayName="Ecssnapshot.ECSStateBlockReply"))
struct FGrpcEcssnapshotECSStateBlockReply : public FGrpcMessage
{
    GENERATED_BODY()
    DECLARE_JSON_FUNCTIONS()

    UPROPERTY(BlueprintReadWrite, Category = TurboLink)
    FUInt32 BlockNumber = 0;
};
