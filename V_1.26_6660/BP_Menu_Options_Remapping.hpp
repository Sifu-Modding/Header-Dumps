#ifndef UE4SS_SDK_BP_Menu_Options_Remapping_HPP
#define UE4SS_SDK_BP_Menu_Options_Remapping_HPP

class UBP_Menu_Options_Remapping_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08F0 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Camera_Analog;                              // 0x08F8 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_1;                            // 0x0900 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_2;                            // 0x0908 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_3;                            // 0x0910 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Directionnal_Throw;                         // 0x0918 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Dodge;                                      // 0x0920 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Drop_weapon;                                // 0x0928 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Focus_mode;                                 // 0x0930 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Guard;                                      // 0x0938 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Heavy_attack;                               // 0x0940 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Interact;                                   // 0x0948 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Launch_Focus_action;                        // 0x0950 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Light_attack;                               // 0x0958 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Move_Analog;                                // 0x0960 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Pick_up_weapon;                             // 0x0968 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Replay_menu;                                // 0x0970 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Select_vital_point_Analog;                  // 0x0978 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Takedown;                                   // 0x0980 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Taunt;                                      // 0x0988 (size: 0x8)
    class UBP_Btn_Remapping_Simple_C* Btn_Throw_weapon;                               // 0x0990 (size: 0x8)
    class UWBP_SpinBoxEnum_C* ControllerType;                                         // 0x0998 (size: 0x8)
    class UTextBlock* GeneralCategory;                                                // 0x09A0 (size: 0x8)
    class UImage* IconRemapped;                                                       // 0x09A8 (size: 0x8)
    class UImage* IconUnbound;                                                        // 0x09B0 (size: 0x8)
    class UVerticalBox* Inputs_VerticalBox;                                           // 0x09B8 (size: 0x8)
    class UVerticalBox* InputsScroll;                                                 // 0x09C0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x09C8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Default;                                       // 0x09D0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_JumpToUnbound;                                 // 0x09D8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Remap;                                         // 0x09E0 (size: 0x8)
    class UBorder* LastUnboundNotif;                                                  // 0x09E8 (size: 0x8)
    class UBP_Menu_Options_Remapping_Layout_C* MappingControllerLayout;               // 0x09F0 (size: 0x8)
    class UWBP_SpinBoxEnum_C* Preset;                                                 // 0x09F8 (size: 0x8)
    class UWBP_SpinBoxEnum_C* PressType;                                              // 0x0A00 (size: 0x8)
    class UVerticalBox* ProfileContent;                                               // 0x0A08 (size: 0x8)
    class UBorder* RemappedNotif;                                                     // 0x0A10 (size: 0x8)
    class UScrollBox* RemappingScroll;                                                // 0x0A18 (size: 0x8)
    class UVerticalBox* SideNotifications;                                            // 0x0A20 (size: 0x8)
    class UTextBlock* TextListTitle;                                                  // 0x0A28 (size: 0x8)
    class UTextBlock* TextRemappedAction;                                             // 0x0A30 (size: 0x8)
    class UTextBlock* TextRemappedTitle;                                              // 0x0A38 (size: 0x8)
    class UTextBlock* TextUnboundAction;                                              // 0x0A40 (size: 0x8)
    class UTextBlock* TextUnboundTitle;                                               // 0x0A48 (size: 0x8)
    class UBorder* UnboundListNotif;                                                  // 0x0A50 (size: 0x8)
    class UTextBlock* UnboundListText;                                                // 0x0A58 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0A60 (size: 0x8)
    class UInputMappingWidgetData* Model;                                             // 0x0A68 (size: 0x8)
    FMappingID RemappingID;                                                           // 0x0A70 (size: 0x58)
    class UButtonUserWidget* CurrentInputButton;                                      // 0x0AC8 (size: 0x8)
    TArray<FInputMappingProfileEnumHandler> Profiles;                                 // 0x0AD0 (size: 0x10)
    TArray<class UBP_Btn_Remapping_Base_C*> UnboundActionsArray;                      // 0x0AE0 (size: 0x10)
    class UBP_Btn_Remapping_Base_C* LastUnboundAction;                                // 0x0AF0 (size: 0x8)

    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    void OnVisible();
    void UpdateUnboundList();
    void UpdateUnboundArray();
    void HoldToggleChanged();
    void GetNextUnboundButton(class UBP_Btn_Remapping_Base_C*& LastUnboundAction);
    bool BPE_OnInputAction(InputAction eAction);
    bool BPE_OnMenuActionSecondaryPressed();
    void OnInputFocusReceived(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnInputFocusLost(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ClearMappingMessage();
    void UpdateMappingNotifs(class UButtonUserWidget* Button, bool Error);
    void SetInputType(bool Gamepad);
    void ResetToDefault(class UObject* Object);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void GetCurrentMappingData(FInputMappingData& m_MappingData);
    FText Get_ModifierText_Text_0();
    class UWidgetData* BPE_CreateData();
    void OnRemappingClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Remapping_Preset2_K2Node_ComponentBoundEvent_2_OnIndexChanged__DelegateSignature(int32 Index);
    void BndEvt__BP_Menu_Options_Remapping_ControllerType_K2Node_ComponentBoundEvent_3_OnIndexChanged__DelegateSignature(int32 Index);
    void BPE_GiveFocus();
    void BPE_OnDataUpdated();
    void OnAnalogRemappingClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void StartRemapping(bool Analog, class UButtonUserWidget* InputPin);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_BindToDelegates(bool _bPawnOnly);
    void ExecuteUbergraph_BP_Menu_Options_Remapping(int32 EntryPoint);
}; // Size: 0xAF8

#endif
