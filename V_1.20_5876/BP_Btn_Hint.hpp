#ifndef UE4SS_SDK_BP_Btn_Hint_HPP
#define UE4SS_SDK_BP_Btn_Hint_HPP

class UBP_Btn_Hint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* SwapAnim;                                                 // 0x0318 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x0320 (size: 0x8)
    class UBP_Btn_Hold_C* BP_Btn_Hold;                                                // 0x0328 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x0330 (size: 0x8)
    class UTextBlock* HintText;                                                       // 0x0338 (size: 0x8)
    class UTextBlock* InfosText;                                                      // 0x0340 (size: 0x8)
    class UWidgetSwitcher* InputSwitcher;                                             // 0x0348 (size: 0x8)
    class UScaleBox* ScaleText;                                                       // 0x0350 (size: 0x8)
    class USizeBox* TipSizeBox;                                                       // 0x0358 (size: 0x8)
    class UImage* ValidationStroke;                                                   // 0x0360 (size: 0x8)
    FText Hint;                                                                       // 0x0368 (size: 0x18)
    FText Info;                                                                       // 0x0380 (size: 0x18)
    FMappingID Mapping ID;                                                            // 0x0398 (size: 0x58)
    bool AnimateHold;                                                                 // 0x03F0 (size: 0x1)

    void UpdateWidthFromLanguage(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void LaunchSwapAnim();
    void ScaleWidget();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Hint(int32 EntryPoint);
}; // Size: 0x3F1

#endif
