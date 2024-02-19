#ifndef UE4SS_SDK_BP_PresetKeySelectionMenuReplayEditor_HPP
#define UE4SS_SDK_BP_PresetKeySelectionMenuReplayEditor_HPP

class UBP_PresetKeySelectionMenuReplayEditor_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_0;                                          // 0x03E0 (size: 0x8)
    class UBP_Btn_ReplayKeyCreateCustom_C* Btn_CustomKeySettings;                     // 0x03E8 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* btn_CutAndFade;                              // 0x03F0 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_GameplayKey;                             // 0x03F8 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_SpeedKey;                                // 0x0400 (size: 0x8)
    class UHorizontalBox* InputGotoTimeline;                                          // 0x0408 (size: 0x8)
    class UTextBlock* InputText_1;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* InputText_2;                                                    // 0x0418 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_1;                                             // 0x0420 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_2;                                             // 0x0428 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_3;                                             // 0x0430 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0438 (size: 0x8)
    FBP_PresetKeySelectionMenuReplayEditor_CKeyPresetSelected KeyPresetSelected;      // 0x0440 (size: 0x10)
    void KeyPresetSelected(bool OpenSettings, int32 KeyType, EReplayKeyTransition BlendType, EReplayKeyCameraMode CameraMode, FReplayKeyScreenFading FadeInfo);
    FBP_PresetKeySelectionMenuReplayEditor_COnBackMenuKeySelect OnBackMenuKeySelect;  // 0x0450 (size: 0x10)
    void OnBackMenuKeySelect();
    TArray<FInputHandleContainer> Inputs;                                             // 0x0460 (size: 0x10)
    class UButtonUserWidget* FocusedButton;                                           // 0x0470 (size: 0x8)

    void CreateKeyFromButton(class UButtonUserWidget* Button, bool OpenSettings);
    bool BPE_HandleInput();
    bool OnMenuCancelInputPressed();
    bool OnCameraTypeInputPressed();
    bool OnBlendTypeInputPressed();
    bool BPE_OnInputAction(InputAction eAction);
    void BPE_OnVisible();
    void BndEvt__BP_ReplayPhotomodeMenu_Btn_ReplayEditor_K2Node_ComponentBoundEvent_15_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void Construct();
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_btn_CutAndFade_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_SpeedKey_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_CustomKeySettings_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_CustomKeySettings_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_CustomKeySettings_K2Node_ComponentBoundEvent_6_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_GameplayKey_K2Node_ComponentBoundEvent_7_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_GameplayKey_K2Node_ComponentBoundEvent_8_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_SpeedKey_K2Node_ComponentBoundEvent_9_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_Btn_SpeedKey_K2Node_ComponentBoundEvent_10_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_btn_CutAndFade_K2Node_ComponentBoundEvent_11_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_PresetKeySelectionMenuReplayEditor_btn_CutAndFade_K2Node_ComponentBoundEvent_12_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ExecuteUbergraph_BP_PresetKeySelectionMenuReplayEditor(int32 EntryPoint);
    void OnBackMenuKeySelect__DelegateSignature();
    void KeyPresetSelected__DelegateSignature(bool OpenSettings, int32 KeyType, EReplayKeyTransition BlendType, EReplayKeyCameraMode CameraMode, FReplayKeyScreenFading FadeInfo);
}; // Size: 0x478

#endif
