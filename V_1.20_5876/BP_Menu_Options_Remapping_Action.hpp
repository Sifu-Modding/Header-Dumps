#ifndef UE4SS_SDK_BP_Menu_Options_Remapping_Action_HPP
#define UE4SS_SDK_BP_Menu_Options_Remapping_Action_HPP

class UBP_Menu_Options_Remapping_Action_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UTextBlock* Action;                                                         // 0x03E0 (size: 0x8)
    class UBorder* ActionBorder;                                                      // 0x03E8 (size: 0x8)
    class UWidgetSwitcher* ActionSwitcher;                                            // 0x03F0 (size: 0x8)
    class UBP_Button_GenericWhite_C* AnalogButton;                                    // 0x03F8 (size: 0x8)
    class UBP_InputAction_C* AnalogInput;                                             // 0x0400 (size: 0x8)
    class UWidgetSwitcher* AnalogSwitcher;                                            // 0x0408 (size: 0x8)
    class UBorder* Background;                                                        // 0x0410 (size: 0x8)
    class UImage* ChooseInput1;                                                       // 0x0418 (size: 0x8)
    class UImage* ChooseInput2;                                                       // 0x0420 (size: 0x8)
    class UImage* EmptyInput1;                                                        // 0x0428 (size: 0x8)
    class UImage* EmptyInput2;                                                        // 0x0430 (size: 0x8)
    class URichTextBlock* ErrorText;                                                  // 0x0438 (size: 0x8)
    class UBP_Btn_Input_C* Input1;                                                    // 0x0440 (size: 0x8)
    class UWidgetSwitcher* Input1Switcher;                                            // 0x0448 (size: 0x8)
    class UBP_Btn_Input_C* Input2;                                                    // 0x0450 (size: 0x8)
    class UWidgetSwitcher* Input2Switcher;                                            // 0x0458 (size: 0x8)
    class UImage* InputAnalogBG;                                                      // 0x0460 (size: 0x8)
    class UBP_InputAction_C* InputAxis;                                               // 0x0468 (size: 0x8)
    class UBP_Btn_InputTip_C* InputBack;                                              // 0x0470 (size: 0x8)
    class UImage* InputBG;                                                            // 0x0478 (size: 0x8)
    class UImage* InputBGOptionnal;                                                   // 0x0480 (size: 0x8)
    class UBorder* InputBorder2;                                                      // 0x0488 (size: 0x8)
    class UBP_Button_GenericWhite_C* InputButton1;                                    // 0x0490 (size: 0x8)
    class UBP_Button_GenericWhite_C* InputButton2;                                    // 0x0498 (size: 0x8)
    class UBP_Btn_InputTip_C* InputClear;                                             // 0x04A0 (size: 0x8)
    class UBP_Btn_Input_C* InputConflicted;                                           // 0x04A8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputRemap;                                             // 0x04B0 (size: 0x8)
    class UTextBlock* InputText1;                                                     // 0x04B8 (size: 0x8)
    class UTextBlock* InputText2;                                                     // 0x04C0 (size: 0x8)
    class UHorizontalBox* InputTipsBox;                                               // 0x04C8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputUndo;                                              // 0x04D0 (size: 0x8)
    class URichTextBlock* InstructionAction;                                          // 0x04D8 (size: 0x8)
    class URichTextBlock* InstructionAxis;                                            // 0x04E0 (size: 0x8)
    class UImage* Line;                                                               // 0x04E8 (size: 0x8)
    class UWidgetSwitcher* MessageSwitcher;                                           // 0x04F0 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x04F8 (size: 0x8)
    class UTextBlock* TextBlock_148;                                                  // 0x0500 (size: 0x8)
    class UTextBlock* TextBlock_155;                                                  // 0x0508 (size: 0x8)
    class UImage* WarningIcon;                                                        // 0x0510 (size: 0x8)
    class UInputMappingWidgetData* Model;                                             // 0x0518 (size: 0x8)
    FMappingID MappingID;                                                             // 0x0520 (size: 0x58)
    class UInputMappingWidgetData* ParentModel;                                       // 0x0578 (size: 0x8)
    FText LastError;                                                                  // 0x0580 (size: 0x18)
    bool RemappingOccured;                                                            // 0x0598 (size: 0x1)
    bool Gamepad;                                                                     // 0x0599 (size: 0x1)
    bool Invert Mouse Vertical Axis;                                                  // 0x059A (size: 0x1)
    bool Analog;                                                                      // 0x059B (size: 0x1)
    bool BreakDependency;                                                             // 0x059C (size: 0x1)

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
}; // Size: 0x59D

#endif
