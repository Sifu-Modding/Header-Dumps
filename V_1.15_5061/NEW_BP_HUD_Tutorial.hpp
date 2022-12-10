#ifndef UE4SS_SDK_NEW_BP_HUD_Tutorial_HPP
#define UE4SS_SDK_NEW_BP_HUD_Tutorial_HPP

class UNEW_BP_HUD_Tutorial_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TaskAnim01;
    class UWidgetAnimation* TaskAnim02;
    class UWidgetAnimation* ObjectivesOut;
    class UWidgetAnimation* ObjectivesIn;
    class UWidgetAnimation* InputsOut;
    class UWidgetAnimation* InputsIn;
    class UBP_Tuto_NextStep_C* BP_Tuto_NextStep;
    class UNEW_BP_Widget_TutorialCounterManager_C* BP_Widget_TutorialCounterManager;
    class UNEW_BP_Widget_TutorialDebug_C* BP_Widget_TutorialDebug;
    class UNEW_BP_Widget_TutorialHintManager_C* NEW_BP_Widget_TutorialHintManager;
    class UNEW_BP_Widget_TutorialInputManager_C* NEW_BP_Widget_TutorialInputManager;
    class UNEW_BP_Widget_TutorialTitle_C* NEW_BP_Widget_TutorialTitle;
    class UGridPanel* ObjectivesBox;
    class USizeBox* ScaleBox;
    class UCanvasPanel* TutoPanel;
    bool Display;
    float NewVar_0;

    void SwitchObjectivesSide(bool LeftAlign);
    void CleanCounterWidgets();
    void OnOptionChanged(EGameOptionTypes eGameOptionType);
    void ScaleTutoHUD();
    void BindHUD();
    void CleanHintWidgets();
    void CleanInputWidgets();
    void DisplayNextStep(bool LastPhase);
    void CleanPhaseWidgets();
    void Construct();
    void BPE_OnVisible();
    void ExecuteUbergraph_NEW_BP_HUD_Tutorial(int32 EntryPoint);
};

#endif
