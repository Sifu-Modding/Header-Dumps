#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialInput_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialInput_HPP

class UNEW_BP_Widget_TutorialInput_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UHorizontalBox* InputBox;
    class UScaleBox* ScaleInputBox;
    class UTextBlock* TipsText;
    bool Addition;
    bool TutorialInputsToData;

    void ScaleWidget();
    void CreateInputsWidgets(TArray<FUI_ComboInput>& ComboInputs, TArray<class UBP_InputAction_C*>& CreatedButtons);
    void InitializeWidget(TEnumAsByte<Enum_TutorialPlayerInputsName> Inputs, FString DisplayedTips);
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialInput(int32 EntryPoint);
};

#endif
