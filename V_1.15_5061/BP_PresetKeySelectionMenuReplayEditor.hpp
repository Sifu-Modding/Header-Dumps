#ifndef UE4SS_SDK_BP_PresetKeySelectionMenuReplayEditor_HPP
#define UE4SS_SDK_BP_PresetKeySelectionMenuReplayEditor_HPP

class UBP_PresetKeySelectionMenuReplayEditor_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_0;
    class UBP_Btn_ReplayKeyCreateCustom_C* Btn_CustomKeySettings;
    class UBP_Btn_ReplayPhotomodeMenu_C* btn_CutAndFade;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_GameplayKey;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_SpeedKey;
    class UTextBlock* InputText;
    class UTextBlock* InputText_1;
    class UBP_Btn_InputTip_C* InputTip;
    class UBP_Btn_InputTip_C* InputTip_1;
    class UBP_Btn_InputTip_C* InputTip_Back;
    FBP_PresetKeySelectionMenuReplayEditor_CKeyPresetSelected KeyPresetSelected;
    void KeyPresetSelected(bool OpenSettings, int32 KeyType, EReplayKeyTransition BlendType, EReplayKeyCameraMode CameraMode, FReplayKeyScreenFading FadeInfo);
    FBP_PresetKeySelectionMenuReplayEditor_COnBackMenuKeySelect OnBackMenuKeySelect;
    void OnBackMenuKeySelect();
    TArray<FInputHandleContainer> Inputs;
    class UButtonUserWidget* FocusedButton;

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
};

#endif
