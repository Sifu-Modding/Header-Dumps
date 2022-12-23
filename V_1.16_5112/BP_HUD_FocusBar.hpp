#ifndef UE4SS_SDK_BP_HUD_FocusBar_HPP
#define UE4SS_SDK_BP_HUD_FocusBar_HPP

class UBP_HUD_FocusBar_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FocusFilledAnim;
    class UBorder* BorderBar;
    class UBorder* BorderSelected;
    class UProgressBar* FocusBar;
    float FocusPercent;
    FBP_HUD_FocusBar_CBarFilled BarFilled;
    void BarFilled();
    bool IsDemiBar;

    void SetDemi(bool IsDemiBar);
    FLinearColor GetFocusColor();
    void BarFilledEvent(bool FillBar);
    void Construct();
    void ExecuteUbergraph_BP_HUD_FocusBar(int32 EntryPoint);
    void BarFilled__DelegateSignature();
};

#endif
