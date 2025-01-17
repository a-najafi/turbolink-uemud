//Generated by TurboLink CodeGenerator, do not edit!
#include "SFaucet/FaucetClient.h"
#include "SFaucet/FaucetService.h"
#include "FaucetContext.h"
#include "TurboLinkGrpcManager_Private.h"
#include "Templates/SharedPointer.h"

FGrpcContextHandle UFaucetServiceClient::InitDrip()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_Drip>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::Drip(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextDrip = StaticCastSharedPtr<GrpcContext_FaucetService_Drip>(*context);
		contextDrip->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitDripDev()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_DripDev>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::DripDev(FGrpcContextHandle Handle, const FGrpcFaucetDripDevRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextDripDev = StaticCastSharedPtr<GrpcContext_FaucetService_DripDev>(*context);
		contextDripDev->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitDripVerifyTweet()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_DripVerifyTweet>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::DripVerifyTweet(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextDripVerifyTweet = StaticCastSharedPtr<GrpcContext_FaucetService_DripVerifyTweet>(*context);
		contextDripVerifyTweet->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitTimeUntilDrip()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_TimeUntilDrip>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::TimeUntilDrip(FGrpcContextHandle Handle, const FGrpcFaucetDripRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextTimeUntilDrip = StaticCastSharedPtr<GrpcContext_FaucetService_TimeUntilDrip>(*context);
		contextTimeUntilDrip->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitGetLinkedTwitters()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_GetLinkedTwitters>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::GetLinkedTwitters(FGrpcContextHandle Handle, const FGrpcFaucetGetLinkedTwittersRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextGetLinkedTwitters = StaticCastSharedPtr<GrpcContext_FaucetService_GetLinkedTwitters>(*context);
		contextGetLinkedTwitters->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitGetLinkedTwitterForAddress()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_GetLinkedTwitterForAddress>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::GetLinkedTwitterForAddress(FGrpcContextHandle Handle, const FGrpcFaucetLinkedTwitterForAddressRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextGetLinkedTwitterForAddress = StaticCastSharedPtr<GrpcContext_FaucetService_GetLinkedTwitterForAddress>(*context);
		contextGetLinkedTwitterForAddress->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitGetLinkedAddressForTwitter()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_GetLinkedAddressForTwitter>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::GetLinkedAddressForTwitter(FGrpcContextHandle Handle, const FGrpcFaucetLinkedAddressForTwitterRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextGetLinkedAddressForTwitter = StaticCastSharedPtr<GrpcContext_FaucetService_GetLinkedAddressForTwitter>(*context);
		contextGetLinkedAddressForTwitter->Call(Request);
	}
}
FGrpcContextHandle UFaucetServiceClient::InitSetLinkedTwitter()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_FaucetService_SetLinkedTwitter>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UFaucetServiceClient::SetLinkedTwitter(FGrpcContextHandle Handle, const FGrpcFaucetSetLinkedTwitterRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextSetLinkedTwitter = StaticCastSharedPtr<GrpcContext_FaucetService_SetLinkedTwitter>(*context);
		contextSetLinkedTwitter->Call(Request);
	}
}
void UFaucetServiceClient::TryCancel(FGrpcContextHandle Handle)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		(*context)->TryCancel();
	}
}

void UFaucetServiceClient::Shutdown()
{
	OnDripResponse.Clear();
	OnDripDevResponse.Clear();
	OnDripVerifyTweetResponse.Clear();
	OnTimeUntilDripResponse.Clear();
	OnGetLinkedTwittersResponse.Clear();
	OnGetLinkedTwitterForAddressResponse.Clear();
	OnGetLinkedAddressForTwitterResponse.Clear();
	OnSetLinkedTwitterResponse.Clear();
	Super::Shutdown();
}
