#ifndef UE4SS_SDK_BP_HUD_InteractionHint_HPP
#define UE4SS_SDK_BP_HUD_InteractionHint_HPP

class UBP_HUD_InteractionHint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HintAnim;
    class UImage* HintImage;
    bool PlayingIn;
    bool PlayingOut;

    void SetIsObjectUsable(bool bInUsable);
    void SetIsObjectVisible(bool bInVisible);
    void HideHint();
    void ShowHint();
    void BPE_OnVisible();
    void BPE_OnHidden();
    void ExecuteUbergraph_BP_HUD_InteractionHint(int32 EntryPoint);
};

#endif
