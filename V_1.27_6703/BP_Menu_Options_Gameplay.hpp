#ifndef UE4SS_SDK_BP_Menu_Options_Gameplay_HPP
#define UE4SS_SDK_BP_Menu_Options_Gameplay_HPP

class UBP_Menu_Options_Gameplay_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UBP_Btn_SpinBox_C* AdvancedVibration;                                       // 0x08F0 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08F8 (size: 0x8)
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;                      // 0x0900 (size: 0x8)
    class UBP_Btn_SpinBox_Clicked_C* Btn_Difficulty;                                  // 0x0908 (size: 0x8)
    class UBP_Btn_SpinBox_C* CameraAnimDrivenSurrounding;                             // 0x0910 (size: 0x8)
    class UBP_Btn_SpinBox_C* CameraShake;                                             // 0x0918 (size: 0x8)
    class UBP_Btn_SpinBox_C* CameraSpeed;                                             // 0x0920 (size: 0x8)
    class UScrollBox* GameplayScroll;                                                 // 0x0928 (size: 0x8)
    class UBP_Btn_SpinBox_C* HideClueVFX;                                             // 0x0930 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0938 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Default;                                       // 0x0940 (size: 0x8)
    class UBP_Btn_SpinBox_C* InvertCameraX;                                           // 0x0948 (size: 0x8)
    class UBP_Btn_SpinBox_C* InvertCameraY;                                           // 0x0950 (size: 0x8)
    class UBP_Btn_SpinBox_C* SmoothEffect;                                            // 0x0958 (size: 0x8)
    class UBP_Btn_SpinBox_C* Vibration;                                               // 0x0960 (size: 0x8)
    float ValueHUDSize;                                                               // 0x0968 (size: 0x4)
    class UBP_Btn_SpinBox_C* FocusedOption;                                           // 0x0970 (size: 0x8)

    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    void ShowInfoBtn(class UBP_Btn_SpinBox_Clicked_C* SpinBoxClicked);
    void OnDifficultyChosen(EGameDifficulty difficulty);
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void ShowInfo();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void LoopGameplayOptions();
    void ToggleChargeOwnerVisibility(bool LocalVisibility);
    void BndEvt__Vibration_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__InvertCameraY_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__InvertCameraX_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__CameraSpeed_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__SmoothEffect_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__CameraShake_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__HideClueVFX_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Gameplay_AdvancedVibration_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Gameplay_Btn_Difficulty_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__BP_Menu_Options_Gameplay_CameraAnimDrivenSurrounding_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void Construct();
    void LaunchBackSequence();
    void BPE_GiveFocus();
    void BndEvt__InvertCameraY_K2Node_ComponentBoundEvent_0_OnReceivedFocus__DelegateSignature();
    void BndEvt__InvertCameraX_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BndEvt__CameraSpeed_K2Node_ComponentBoundEvent_2_OnReceivedFocus__DelegateSignature();
    void BndEvt__SmoothEffect_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void BndEvt__CameraShake_K2Node_ComponentBoundEvent_4_OnReceivedFocus__DelegateSignature();
    void BndEvt__Vibration_K2Node_ComponentBoundEvent_7_OnReceivedFocus__DelegateSignature();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__HideClueVFX_K2Node_ComponentBoundEvent_8_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Gameplay_AdvancedVibration_K2Node_ComponentBoundEvent_9_OnReceivedFocus__DelegateSignature();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_Options_Gameplay_Btn_Difficulty_K2Node_ComponentBoundEvent_5_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Gameplay_CameraAnimDrivenSurrounding_K2Node_ComponentBoundEvent_6_OnReceivedFocus__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Options_Gameplay(int32 EntryPoint);
}; // Size: 0x978

#endif
