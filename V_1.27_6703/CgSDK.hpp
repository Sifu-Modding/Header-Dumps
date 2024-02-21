#ifndef UE4SS_SDK_CgSDK_HPP
#define UE4SS_SDK_CgSDK_HPP

#include "CgSDK_enums.hpp"

class UCgSDKBlueprint : public UBlueprintFunctionLibrary
{

    bool ShowProgressBar(FString progressBarName);
    bool SetStateWithKey(FString StateName, TEnumAsByte<FCgSdkLedId> Key);
    bool SetState(FString StateName);
    bool SetProgressBarValue(FString progressBarName, int32 Value);
    bool SetGame(FString gameName);
    bool SetEventWithKey(FString EventName, TEnumAsByte<FCgSdkLedId> Key);
    bool SetEvent(FString EventName);
    bool RequestControl();
    bool ReleaseControl();
    void PerformProtocolHandshake();
    bool HideProgressBar(FString progressBarName);
    bool ClearStateWithKey(FString StateName, TEnumAsByte<FCgSdkLedId> Key);
    bool ClearState(FString StateName);
    bool ClearAllStates();
    bool ClearAllEvents();
}; // Size: 0x28

#endif
