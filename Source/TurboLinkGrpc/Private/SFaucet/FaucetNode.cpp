//Generated by TurboLink CodeGenerator, do not edit!
#include "SFaucet/FaucetNode.h"
#include "SFaucet/FaucetService.h"
#include "TurboLinkGrpcManager.h"
#include "TurboLinkGrpcUtilities.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Launch/Resources/Version.h"

UCallFaucetServiceDrip* UCallFaucetServiceDrip::Drip(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request)
{
	UCallFaucetServiceDrip* node = NewObject<UCallFaucetServiceDrip>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceDrip::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceDrip::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetDripResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceDrip::OnContextStateChange);
		FaucetServiceClient->OnDripResponse.AddUniqueDynamic(this, &UCallFaucetServiceDrip::OnResponse);

		Context = FaucetServiceClient->InitDrip();
		FaucetServiceClient->Drip(Context, Request);
	}
}

void UCallFaucetServiceDrip::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceDrip::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceDrip::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceDrip::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceDripDev* UCallFaucetServiceDripDev::DripDev(UObject* WorldContextObject, const FGrpcFaucetDripDevRequest& Request)
{
	UCallFaucetServiceDripDev* node = NewObject<UCallFaucetServiceDripDev>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceDripDev::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceDripDev::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetDripResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceDripDev::OnContextStateChange);
		FaucetServiceClient->OnDripDevResponse.AddUniqueDynamic(this, &UCallFaucetServiceDripDev::OnResponse);

		Context = FaucetServiceClient->InitDripDev();
		FaucetServiceClient->DripDev(Context, Request);
	}
}

void UCallFaucetServiceDripDev::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceDripDev::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceDripDev::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceDripDev::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceDripVerifyTweet* UCallFaucetServiceDripVerifyTweet::DripVerifyTweet(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request)
{
	UCallFaucetServiceDripVerifyTweet* node = NewObject<UCallFaucetServiceDripVerifyTweet>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceDripVerifyTweet::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceDripVerifyTweet::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetDripResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceDripVerifyTweet::OnContextStateChange);
		FaucetServiceClient->OnDripVerifyTweetResponse.AddUniqueDynamic(this, &UCallFaucetServiceDripVerifyTweet::OnResponse);

		Context = FaucetServiceClient->InitDripVerifyTweet();
		FaucetServiceClient->DripVerifyTweet(Context, Request);
	}
}

void UCallFaucetServiceDripVerifyTweet::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceDripVerifyTweet::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetDripResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceDripVerifyTweet::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceDripVerifyTweet::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceTimeUntilDrip* UCallFaucetServiceTimeUntilDrip::TimeUntilDrip(UObject* WorldContextObject, const FGrpcFaucetDripRequest& Request)
{
	UCallFaucetServiceTimeUntilDrip* node = NewObject<UCallFaucetServiceTimeUntilDrip>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceTimeUntilDrip::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceTimeUntilDrip::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetTimeUntilDripResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceTimeUntilDrip::OnContextStateChange);
		FaucetServiceClient->OnTimeUntilDripResponse.AddUniqueDynamic(this, &UCallFaucetServiceTimeUntilDrip::OnResponse);

		Context = FaucetServiceClient->InitTimeUntilDrip();
		FaucetServiceClient->TimeUntilDrip(Context, Request);
	}
}

void UCallFaucetServiceTimeUntilDrip::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceTimeUntilDrip::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetTimeUntilDripResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceTimeUntilDrip::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceTimeUntilDrip::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceGetLinkedTwitters* UCallFaucetServiceGetLinkedTwitters::GetLinkedTwitters(UObject* WorldContextObject, const FGrpcFaucetGetLinkedTwittersRequest& Request)
{
	UCallFaucetServiceGetLinkedTwitters* node = NewObject<UCallFaucetServiceGetLinkedTwitters>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceGetLinkedTwitters::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceGetLinkedTwitters::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetGetLinkedTwittersResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedTwitters::OnContextStateChange);
		FaucetServiceClient->OnGetLinkedTwittersResponse.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedTwitters::OnResponse);

		Context = FaucetServiceClient->InitGetLinkedTwitters();
		FaucetServiceClient->GetLinkedTwitters(Context, Request);
	}
}

void UCallFaucetServiceGetLinkedTwitters::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceGetLinkedTwitters::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetGetLinkedTwittersResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceGetLinkedTwitters::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceGetLinkedTwitters::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceGetLinkedTwitterForAddress* UCallFaucetServiceGetLinkedTwitterForAddress::GetLinkedTwitterForAddress(UObject* WorldContextObject, const FGrpcFaucetLinkedTwitterForAddressRequest& Request)
{
	UCallFaucetServiceGetLinkedTwitterForAddress* node = NewObject<UCallFaucetServiceGetLinkedTwitterForAddress>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceGetLinkedTwitterForAddress::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceGetLinkedTwitterForAddress::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetLinkedTwitterForAddressResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedTwitterForAddress::OnContextStateChange);
		FaucetServiceClient->OnGetLinkedTwitterForAddressResponse.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedTwitterForAddress::OnResponse);

		Context = FaucetServiceClient->InitGetLinkedTwitterForAddress();
		FaucetServiceClient->GetLinkedTwitterForAddress(Context, Request);
	}
}

void UCallFaucetServiceGetLinkedTwitterForAddress::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceGetLinkedTwitterForAddress::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedTwitterForAddressResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceGetLinkedTwitterForAddress::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceGetLinkedTwitterForAddress::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceGetLinkedAddressForTwitter* UCallFaucetServiceGetLinkedAddressForTwitter::GetLinkedAddressForTwitter(UObject* WorldContextObject, const FGrpcFaucetLinkedAddressForTwitterRequest& Request)
{
	UCallFaucetServiceGetLinkedAddressForTwitter* node = NewObject<UCallFaucetServiceGetLinkedAddressForTwitter>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceGetLinkedAddressForTwitter::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceGetLinkedAddressForTwitter::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetLinkedAddressForTwitterResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedAddressForTwitter::OnContextStateChange);
		FaucetServiceClient->OnGetLinkedAddressForTwitterResponse.AddUniqueDynamic(this, &UCallFaucetServiceGetLinkedAddressForTwitter::OnResponse);

		Context = FaucetServiceClient->InitGetLinkedAddressForTwitter();
		FaucetServiceClient->GetLinkedAddressForTwitter(Context, Request);
	}
}

void UCallFaucetServiceGetLinkedAddressForTwitter::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceGetLinkedAddressForTwitter::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetLinkedAddressForTwitterResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceGetLinkedAddressForTwitter::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceGetLinkedAddressForTwitter::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallFaucetServiceSetLinkedTwitter* UCallFaucetServiceSetLinkedTwitter::SetLinkedTwitter(UObject* WorldContextObject, const FGrpcFaucetSetLinkedTwitterRequest& Request)
{
	UCallFaucetServiceSetLinkedTwitter* node = NewObject<UCallFaucetServiceSetLinkedTwitter>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->FaucetService = Cast<UFaucetService>(turboLinkManager->MakeService("FaucetService"));
	if (node->FaucetService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->FaucetService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallFaucetServiceSetLinkedTwitter::OnServiceStateChanged);
	WorldContextObject->GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([node]() {
		node->FaucetService->Connect();
	}));
	return node;
}

void UCallFaucetServiceSetLinkedTwitter::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcFaucetSetLinkedTwitterResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		FaucetServiceClient = FaucetService->MakeClient();
		FaucetServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallFaucetServiceSetLinkedTwitter::OnContextStateChange);
		FaucetServiceClient->OnSetLinkedTwitterResponse.AddUniqueDynamic(this, &UCallFaucetServiceSetLinkedTwitter::OnResponse);

		Context = FaucetServiceClient->InitSetLinkedTwitter();
		FaucetServiceClient->SetLinkedTwitter(Context, Request);
	}
}

void UCallFaucetServiceSetLinkedTwitter::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallFaucetServiceSetLinkedTwitter::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcFaucetSetLinkedTwitterResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallFaucetServiceSetLinkedTwitter::Shutdown()
{
	FaucetService->OnServiceStateChanged.RemoveDynamic(this, &UCallFaucetServiceSetLinkedTwitter::OnServiceStateChanged);
	if (FaucetServiceClient != nullptr)
	{
		FaucetService->RemoveClient(FaucetServiceClient);
		FaucetServiceClient->Shutdown();
		FaucetServiceClient = nullptr;
	}

	if (FaucetService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(FaucetService);
		FaucetService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}
