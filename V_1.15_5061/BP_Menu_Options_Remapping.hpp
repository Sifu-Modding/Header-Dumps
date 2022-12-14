#ifndef UE4SS_SDK_BP_Menu_Options_Remapping_HPP
#define UE4SS_SDK_BP_Menu_Options_Remapping_HPP

class UBP_Menu_Options_Remapping_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_Remapping_Simple_C* Btn_Camera_Analog;
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_1;
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_2;
    class UBP_Btn_Remapping_Simple_C* Btn_Dialog_option_3;
    class UBP_Btn_Remapping_Simple_C* Btn_Directionnal_Throw;
    class UBP_Btn_Remapping_Simple_C* Btn_Dodge;
    class UBP_Btn_Remapping_Simple_C* Btn_Drop_weapon;
    class UBP_Btn_Remapping_Simple_C* Btn_Focus_mode;
    class UBP_Btn_Remapping_Simple_C* Btn_Guard;
    class UBP_Btn_Remapping_Simple_C* Btn_Heavy_attack;
    class UBP_Btn_Remapping_Simple_C* Btn_Interact;
    class UBP_Btn_Remapping_Simple_C* Btn_Launch_Focus_action;
    class UBP_Btn_Remapping_Simple_C* Btn_Light_attack;
    class UBP_Btn_Remapping_Simple_C* Btn_Move_Analog;
    class UBP_Btn_Remapping_Simple_C* Btn_Pick_up_weapon;
    class UBP_Btn_Remapping_Simple_C* Btn_Replay_menu;
    class UBP_Btn_Remapping_Simple_C* Btn_Select_vital_point_Analog;
    class UBP_Btn_Remapping_Simple_C* Btn_Takedown;
    class UBP_Btn_Remapping_Simple_C* Btn_Taunt;
    class UBP_Btn_Remapping_Simple_C* Btn_Throw_weapon;
    class UWBP_SpinBoxEnum_C* ControllerType;
    class UTextBlock* GeneralCategory;
    class UImage* IconRemapped;
    class UImage* IconUnbound;
    class UVerticalBox* Inputs_VerticalBox;
    class UVerticalBox* InputsScroll;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_InputTip_C* InputTip_Default;
    class UBP_Btn_InputTip_C* InputTip_JumpToUnbound;
    class UBP_Btn_InputTip_C* InputTip_Remap;
    class UBorder* LastUnboundNotif;
    class UBP_Menu_Options_Remapping_Layout_C* MappingControllerLayout;
    class UWBP_SpinBoxEnum_C* Preset;
    class UWBP_SpinBoxEnum_C* PressType;
    class UVerticalBox* ProfileContent;
    class UBorder* RemappedNotif;
    class UScrollBox* RemappingScroll;
    class UVerticalBox* SideNotifications;
    class UTextBlock* TextListTitle;
    class UTextBlock* TextRemappedAction;
    class UTextBlock* TextRemappedTitle;
    class UTextBlock* TextUnboundAction;
    class UTextBlock* TextUnboundTitle;
    class UBorder* UnboundListNotif;
    class UTextBlock* UnboundListText;
    class UButtonUserWidget* FocusedCombo;
    class UInputMappingWidgetData* Model;
    FMappingID RemappingID;
    class UButtonUserWidget* CurrentInputButton;
    TArray<FInputMappingProfileEnumHandler> Profiles;
    TArray<class UBP_Btn_Remapping_Base_C*> UnboundActionsArray;
    class UBP_Btn_Remapping_Base_C* LastUnboundAction;

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
};

#endif
