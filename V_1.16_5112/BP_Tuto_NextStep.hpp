#ifndef UE4SS_SDK_BP_Tuto_NextStep_HPP
#define UE4SS_SDK_BP_Tuto_NextStep_HPP

class UBP_Tuto_NextStep_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Input_C* BP_InputTip;
    class UScaleBox* InputScale;
    class UTextBlock* NextTxt;
    int32 TutoCurrentPhase;
    FText PhasesOnTotal;
    bool IsLastPhase;

    void SetTranslation();
    void ScaleWidget();
    void GetPhasesOnTotal(int32 TutoCurrentPhase);
    void LastText();
    void Construct();
    void ExecuteUbergraph_BP_Tuto_NextStep(int32 EntryPoint);
};

#endif
