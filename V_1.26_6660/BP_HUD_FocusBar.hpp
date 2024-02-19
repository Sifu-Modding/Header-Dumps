#ifndef UE4SS_SDK_BP_HUD_FocusBar_HPP
#define UE4SS_SDK_BP_HUD_FocusBar_HPP

class UBP_HUD_FocusBar_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* FocusFilledAnim;                                          // 0x0318 (size: 0x8)
    class UBorder* BorderBar;                                                         // 0x0320 (size: 0x8)
    class UBorder* BorderSelected;                                                    // 0x0328 (size: 0x8)
    class UProgressBar* FocusBar;                                                     // 0x0330 (size: 0x8)
    float FocusPercent;                                                               // 0x0338 (size: 0x4)
    FBP_HUD_FocusBar_CBarFilled BarFilled;                                            // 0x0340 (size: 0x10)
    void BarFilled();
    bool IsDemiBar;                                                                   // 0x0350 (size: 0x1)

    void SetDemi(bool IsDemiBar);
    FLinearColor GetFocusColor();
    void BarFilledEvent(bool FillBar);
    void Construct();
    void ExecuteUbergraph_BP_HUD_FocusBar(int32 EntryPoint);
    void BarFilled__DelegateSignature();
}; // Size: 0x351

#endif
