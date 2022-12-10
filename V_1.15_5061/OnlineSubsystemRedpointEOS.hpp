#ifndef UE4SS_SDK_OnlineSubsystemRedpointEOS_HPP
#define UE4SS_SDK_OnlineSubsystemRedpointEOS_HPP

#include "OnlineSubsystemRedpointEOS_enums.hpp"

class USCEOSSettings : public UDeveloperSettings
{
    TMap<class FName, class FString> Entitlements;

};

class UEOSControlChannel : public UControlChannel
{
};

class UEOSGetPlayerAvatar : public UBlueprintAsyncActionBase
{
    FEOSGetPlayerAvatarOnComplete OnComplete;
    void EOSGetPlayerAvatarCompletePin(class UTexture* Avatar);
    class UObject* WorldContextObject;
    int32 LocalUserNum;
    FUniqueNetIdRepl UserId;
    class UTexture* DefaultAvatar;

    class UEOSGetPlayerAvatar* GetPlayerAvatar(const class UObject* WorldContextObject, int32 LocalUserNum, FUniqueNetIdRepl UserId, class UTexture* DefaultAvatar);
};

class UEOSIpNetConnection : public UIpConnection
{
};

class IEOSNativePlatform : public IInterface
{
};

class UEOSNetConnection : public UNetConnection
{
};

class UEOSNetDriver : public UIpNetDriver
{
};

class UEOSSubsystem : public UGameInstanceSubsystem
{
    FEOSSubsystemOnAddWidgetToViewport OnAddWidgetToViewport;
    void EOSWidgetDelegate(class UUserWidget* Widget);
    FEOSSubsystemOnRemoveWidgetFromViewport OnRemoveWidgetFromViewport;
    void EOSWidgetDelegate(class UUserWidget* Widget);

};

class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{

    void CancelLogin();
};

class IEOSUserInterface_EnterDevicePinCode : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, FString VerificationUrl, FString PinCode);
};

struct FEOSUserInterface_CandidateEOSAccount
{
    FText DisplayName;

};

class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
{

    void SelectedCandidates(TArray<FEOSUserInterface_CandidateEOSAccount> SelectedCandidates);
};

class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, const TArray<FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
};

class UEOSUserInterface_SelectEOSAccount_Context : public UObject
{

    void SelectCandidate(FEOSUserInterface_CandidateEOSAccount SelectedCandidate);
};

class IEOSUserInterface_SelectEOSAccount : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, const TArray<FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
};

class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{

    void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
};

class IEOSUserInterface_SignInOrCreateAccount : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);
};

class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
{

    void SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
};

class IEOSUserInterface_SwitchToCrossPlatformAccount : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, FString EpicAccountName);
};

#endif
