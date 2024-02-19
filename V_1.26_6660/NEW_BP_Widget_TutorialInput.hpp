#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialInput_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialInput_HPP

class UNEW_BP_Widget_TutorialInput_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x0318 (size: 0x8)
    class UHorizontalBox* InputBox;                                                   // 0x0320 (size: 0x8)
    class UScaleBox* ScaleInputBox;                                                   // 0x0328 (size: 0x8)
    class UTextBlock* TipsText;                                                       // 0x0330 (size: 0x8)
    bool Addition;                                                                    // 0x0338 (size: 0x1)
    bool TutorialInputsToData;                                                        // 0x0339 (size: 0x1)

    void ScaleWidget();
    void CreateInputsWidgets(TArray<FUI_ComboInput>& ComboInputs, TArray<class UBP_InputAction_C*>& CreatedButtons);
    void InitializeWidget(TEnumAsByte<Enum_TutorialPlayerInputsName> Inputs, FString DisplayedTips);
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialInput(int32 EntryPoint);
}; // Size: 0x33A

#endif
