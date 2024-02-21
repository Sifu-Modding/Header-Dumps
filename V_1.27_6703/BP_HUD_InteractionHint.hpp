#ifndef UE4SS_SDK_BP_HUD_InteractionHint_HPP
#define UE4SS_SDK_BP_HUD_InteractionHint_HPP

class UBP_HUD_InteractionHint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* HintAnim;                                                 // 0x0318 (size: 0x8)
    class UImage* HintImage;                                                          // 0x0320 (size: 0x8)
    bool PlayingIn;                                                                   // 0x0328 (size: 0x1)
    bool PlayingOut;                                                                  // 0x0329 (size: 0x1)

    void SetIsObjectUsable(bool bInUsable);
    void SetIsObjectVisible(bool bInVisible);
    void HideHint();
    void ShowHint();
    void BPE_OnVisible();
    void BPE_OnHidden();
    void ExecuteUbergraph_BP_HUD_InteractionHint(int32 EntryPoint);
}; // Size: 0x32A

#endif
