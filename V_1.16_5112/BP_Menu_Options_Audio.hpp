#ifndef UE4SS_SDK_BP_Menu_Options_Audio_HPP
#define UE4SS_SDK_BP_Menu_Options_Audio_HPP

class UBP_Menu_Options_Audio_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_SpinBox_C* AudioOutput;
    class UScrollBox* AudioScroll;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;
    class UBP_Btn_SpinBox_C* GameplaySFX;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_InputTip_C* InputTip_Default;
    class UBP_Btn_SpinBox_C* MonoOnly;
    class UBP_Btn_SpinBox_C* VolumeMaster;
    class UBP_Btn_SpinBox_C* VolumeMusic;
    class UBP_Btn_SpinBox_C* VolumeSE;
    class UBP_Btn_SpinBox_C* VolumeVoices;
    class UButtonUserWidget* FocusedCombo;
    bool AudioApplied;
    class UBP_Btn_SpinBox_C* FocusedOption;
    TMap<class FString, class FText> AudioLanguageMap;

    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    void ConvertAudioTextToEnum(FText Text, EAudioOutputType& audioType);
    void InitAudioOutput();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void ShowInfo();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void LoopAudioOptions();
    void BndEvt__VolumeMusic_1_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__VolumeSE_1_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__VolumeVoices_1_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Audio_GameplaySFX_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Audio_MonoOnly_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Audio_VolumeMaster_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Audio_AudioOutput_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BndEvt__VolumeMusic_K2Node_ComponentBoundEvent_0_OnReceivedFocus__DelegateSignature();
    void BndEvt__VolumeSE_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BndEvt__VolumeVoices_K2Node_ComponentBoundEvent_2_OnReceivedFocus__DelegateSignature();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Options_Audio_GameplaySFX_K2Node_ComponentBoundEvent_5_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Audio_MonoOnly_K2Node_ComponentBoundEvent_4_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Audio_VolumeMaster_K2Node_ComponentBoundEvent_7_OnReceivedFocus__DelegateSignature();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_Options_Audio_AudioOutput_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Options_Audio(int32 EntryPoint);
};

#endif
