#ifndef UE4SS_SDK_BP_Tuto_NextStep_HPP
#define UE4SS_SDK_BP_Tuto_NextStep_HPP

class UBP_Tuto_NextStep_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBP_Btn_Input_C* BP_InputTip;                                               // 0x0318 (size: 0x8)
    class UScaleBox* InputScale;                                                      // 0x0320 (size: 0x8)
    class UTextBlock* NextTxt;                                                        // 0x0328 (size: 0x8)
    int32 TutoCurrentPhase;                                                           // 0x0330 (size: 0x4)
    FText PhasesOnTotal;                                                              // 0x0338 (size: 0x18)
    bool IsLastPhase;                                                                 // 0x0350 (size: 0x1)

    void SetTranslation();
    void ScaleWidget();
    void GetPhasesOnTotal(int32 TutoCurrentPhase);
    void LastText();
    void Construct();
    void ExecuteUbergraph_BP_Tuto_NextStep(int32 EntryPoint);
}; // Size: 0x351

#endif
