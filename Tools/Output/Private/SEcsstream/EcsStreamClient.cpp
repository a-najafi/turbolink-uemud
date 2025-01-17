//Generated by TurboLink CodeGenerator, do not edit!
#include "SEcsstream/EcsStreamClient.h"
#include "SEcsstream/EcsStreamService.h"
#include "EcsStreamContext.h"
#include "TurboLinkGrpcManager_Private.h"
#include "Templates/SharedPointer.h"

FGrpcContextHandle UECSStreamServiceClient::InitSubscribeToStreamLatest()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ECSStreamService_SubscribeToStreamLatest>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UECSStreamServiceClient::SubscribeToStreamLatest(FGrpcContextHandle Handle, const FGrpcEcsstreamECSStreamBlockBundleRequest& Request)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		auto contextSubscribeToStreamLatest = StaticCastSharedPtr<GrpcContext_ECSStreamService_SubscribeToStreamLatest>(*context);
		contextSubscribeToStreamLatest->Call(Request);
	}
}
void UECSStreamServiceClient::TryCancel(FGrpcContextHandle Handle)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		(*context)->TryCancel();
	}
}

void UECSStreamServiceClient::Shutdown()
{
	OnSubscribeToStreamLatestResponse.Clear();
	Super::Shutdown();
}
