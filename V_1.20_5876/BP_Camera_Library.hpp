#ifndef UE4SS_SDK_BP_Camera_Library_HPP
#define UE4SS_SDK_BP_Camera_Library_HPP

class UBP_Camera_Library_C : public UBlueprintFunctionLibrary
{

    void GetCameraThird(class UObject* bpp____WorldContext__pf, class UCameraComponentThird*& bpp__CameraThirdComp__pf);
    void GetCameraBlackBoard(class UObject* bpp____WorldContext__pf, class UBlackboardComponent*& bpp__BlackBoardComp__pf);
    void BPF_SwitchToGameplayCamera(BP_EnumCameraLDSlot bpp__EnumxCameraxLDxSlot__pfTTT, class UObject* bpp____WorldContext__pf);
    void BPF_SwitchToCameraLDOverride(class UObject* bpp__CameraData__pf, BP_EnumCameraLDSlot bpp__EnumxCameraxLDxSlot__pfTTT, class AActor* bpp__ReplayCameraAnchor__pf, class UObject* bpp____WorldContext__pf);
    void BPF_ResetCameraOverridenFromPreset(CameraOverriderPresetEnum bpp__Preset__pf, class UCameraComponentThird* bpp__Camera__pf, class UObject* bpp____WorldContext__pf);
    void BPF_PlayCameraShake(UClass* bpp__CameraShake__pf, float bpp__ExtraMultiplier__pf, class UObject* bpp____WorldContext__pf);
    void BPF_OverrideCameraDataFromPreset(CameraOverriderPresetEnum bpp__Preset__pf, class UCameraComponentThird* bpp__Camera__pf, class UObject* bpp____WorldContext__pf);
    void BPF_GetKeyNameFromCameraSlot(BP_EnumCameraLDSlot bpp__EnumxCameraxLDxSlot__pfTTT, class UObject* bpp____WorldContext__pf, FName& bpp__DynamicCameraDataBlackBoardKey__pf, FName& bpp__DynamicActorRefBlackBoardKey__pf);
    void BPF_GetCameraDataMapOverrideFromPreset(CameraOverriderPresetEnum bpp__Preset__pf, class UObject* bpp____WorldContext__pf, TMap<class UAbstractCameraData*, class UAbstractCameraData*>& bpp__mapOfOverrideData__pf);
    void BPF_CameraEnableAnimDrivenCamera(bool bpp__Takedown__pf, bool bpp__Focus__pf, bool bpp__AnimSyncGeneric__pf, bool bpp__AttackVictim__pf, class UCameraComponentThird* bpp__CameraComponent__pf, class UObject* bpp____WorldContext__pf);
}; // Size: 0x28

#endif
