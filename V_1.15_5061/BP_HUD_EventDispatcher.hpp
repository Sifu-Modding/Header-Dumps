#ifndef UE4SS_SDK_BP_HUD_EventDispatcher_HPP
#define UE4SS_SDK_BP_HUD_EventDispatcher_HPP

class UBP_HUD_EventDispatcher_C : public UObject
{
    FBP_HUD_EventDispatcher_COnScaleHUD OnScaleHUD;
    void OnScaleHUD();

    void OnScaleHUD__DelegateSignature();
};

#endif
