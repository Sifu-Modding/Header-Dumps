#ifndef UE4SS_SDK_BP_Menu_Options_Remapping_Action_HPP
#define UE4SS_SDK_BP_Menu_Options_Remapping_Action_HPP

class UBP_Menu_Options_Remapping_Action_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Action;
    class UBorder* ActionBorder;
    class UWidgetSwitcher* ActionSwitcher;
    class UBP_Button_GenericWhite_C* AnalogButton;
    class UBP_InputAction_C* AnalogInput;
    class UWidgetSwitcher* AnalogSwitcher;
    class UBorder* Background;
    class UImage* ChooseInput1;
    class UImage* ChooseInput2;
    class UImage* EmptyInput1;
    class UImage* EmptyInput2;
    class URichTextBlock* ErrorText;
    class UBP_Btn_Input_C* Input1;
    class UWidgetSwitcher* Input1Switcher;
    class UBP_Btn_Input_C* Input2;
    class UWidgetSwitcher* Input2Switcher;
    class UImage* InputAnalogBG;
    class UBP_InputAction_C* InputAxis;
    class UBP_Btn_InputTip_C* InputBack;
    class UImage* InputBG;
    class UImage* InputBGOptionnal;
    class UBorder* InputBorder2;
    class UBP_Button_GenericWhite_C* InputButton1;
    class UBP_Button_GenericWhite_C* InputButton2;
    class UBP_Btn_InputTip_C* InputClear;
    class UBP_Btn_Input_C* InputConflicted;
    class UBP_Btn_InputTip_C* InputRemap;
    class UTextBlock* InputText1;
    class UTextBlock* InputText2;
    class UHorizontalBox* InputTipsBox;
    class UBP_Btn_InputTip_C* InputUndo;
    class URichTextBlock* InstructionAction;
    class URichTextBlock* InstructionAxis;
    class UImage* Line;
    class UWidgetSwitcher* MessageSwitcher;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_148;
    class UTextBlock* TextBlock_155;
    class UImage* WarningIcon;
    class UInputMappingWidgetData* Model;
    FMappingID MappingID;
    class UInputMappingWidgetData* ParentModel;
    FText LastError;
    bool RemappingOccured;
    bool Gamepad;
    bool Invert Mouse Vertical Axis;
    bool Analog;
    bool BreakDependency;

    void SetupDarkMode();
    void SetAxisText(ECaptureInputStep IndexAxis);
    void SetInstructionText();
    void UpdateMappingSlots();
    void ApplyMapping(FInputMappingData InputPin, bool Force);
    void HandleErrors(const FInputMappingData& _mapping, bool& Success);
    bool BPE_OnMenuActionSecondaryPressed();
    bool BPE_OnSortingInventoryButtonPressed();
    class UWidgetData* BPE_CreateData();
    void GetRemappingErrors(const FInputMappingData& _mapping, FText& Result, bool& RemappingSucceded, bool& MultipleErrors);
    void Set Mapping(FMappingID Mapping, bool Analog, FText Title, class UInputMappingWidgetData* Data, FMappingID DisplayMapping, bool InvertMouseVerticalAxis, bool BreakDependency);
    bool BPE_OnBackButtonPressed();
    void OnCancel_2F85D5D34BFCD5691CBE5784A388999B();
    void OnStepStarted_2F85D5D34BFCD5691CBE5784A388999B(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    void OnUpdate_2F85D5D34BFCD5691CBE5784A388999B(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    void OnSuccess_2F85D5D34BFCD5691CBE5784A388999B(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    void BPE_OnDataUpdated();
    void BndEvt__BP_Menu_Options_Remapping_Remap_BP_Button_GenericWhite_194_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Remapping_Remap_BP_Button_GenericWhite_351_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Remapping_Remap_BP_Button_GenericWhite_K2Node_ComponentBoundEvent_4_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void RemapInput(bool Axis, int32 Index, class UWidgetSwitcher* InputSwitcher, class UButtonUserWidget* Button);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Options_Remapping_Action_BP_Button_Input1_K2Node_ComponentBoundEvent_0_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Remapping_Action_BP_Button_Input2_K2Node_ComponentBoundEvent_1_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Remapping_Action_BP_Button_Input2_K2Node_ComponentBoundEvent_5_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Remapping_Action_BP_Button_Input1_K2Node_ComponentBoundEvent_6_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void ExecuteUbergraph_BP_Menu_Options_Remapping_Action(int32 EntryPoint);
};

#endif
