#ifndef UE4SS_SDK_BP_HUD_EventDispatcher_HPP
#define UE4SS_SDK_BP_HUD_EventDispatcher_HPP

class UBP_HUD_EventDispatcher_C : public UObject
{
    FBP_HUD_EventDispatcher_COnScaleHUD OnScaleHUD;                                   // 0x0028 (size: 0x10)
    void OnScaleHUD();

    void OnScaleHUD__DelegateSignature();
}; // Size: 0x38

#endif
