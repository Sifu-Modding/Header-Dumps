#ifndef UE4SS_SDK_OnlineSubsystemOculus_HPP
#define UE4SS_SDK_OnlineSubsystemOculus_HPP

class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FOculusCreateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FOculusCreateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UOculusCreateSessionCallbackProxy* CreateSession(int32 PublicConnections, FString OculusMatchmakingPool);
};

class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FOculusEntitlementCallbackProxyOnSuccess OnSuccess;
    void OculusEntitlementCheckResult();
    FOculusEntitlementCallbackProxyOnFailure OnFailure;
    void OculusEntitlementCheckResult();

    class UOculusEntitlementCallbackProxy* VerifyEntitlement();
};

class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FOculusFindSessionsCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FOculusFindSessionsCallbackProxyOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32 MaxResults);
    class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32 MaxResults, FString OculusMatchmakingPool);
};

class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FOculusIdentityCallbackProxyOnSuccess OnSuccess;
    void OculusIdentitySuccessResult(FString OculusId, FString OculusName);
    FOculusIdentityCallbackProxyOnFailure OnFailure;
    void OculusIdentityFailureResult();

    class UOculusIdentityCallbackProxy* GetOculusIdentity(int32 LocalUserNum);
};

class UOculusNetConnection : public UIpConnection
{
};

class UOculusNetDriver : public UIpNetDriver
{
};

class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FOculusUpdateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FOculusUpdateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
};

#endif
