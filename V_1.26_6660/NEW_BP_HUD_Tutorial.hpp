#ifndef UE4SS_SDK_NEW_BP_HUD_Tutorial_HPP
#define UE4SS_SDK_NEW_BP_HUD_Tutorial_HPP

class UNEW_BP_HUD_Tutorial_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* TaskAnim01;                                               // 0x03A0 (size: 0x8)
    class UWidgetAnimation* TaskAnim02;                                               // 0x03A8 (size: 0x8)
    class UWidgetAnimation* ObjectivesOut;                                            // 0x03B0 (size: 0x8)
    class UWidgetAnimation* ObjectivesIn;                                             // 0x03B8 (size: 0x8)
    class UWidgetAnimation* InputsOut;                                                // 0x03C0 (size: 0x8)
    class UWidgetAnimation* InputsIn;                                                 // 0x03C8 (size: 0x8)
    class UBP_Tuto_NextStep_C* BP_Tuto_NextStep;                                      // 0x03D0 (size: 0x8)
    class UNEW_BP_Widget_TutorialCounterManager_C* BP_Widget_TutorialCounterManager;  // 0x03D8 (size: 0x8)
    class UNEW_BP_Widget_TutorialDebug_C* BP_Widget_TutorialDebug;                    // 0x03E0 (size: 0x8)
    class UNEW_BP_Widget_TutorialHintManager_C* NEW_BP_Widget_TutorialHintManager;    // 0x03E8 (size: 0x8)
    class UNEW_BP_Widget_TutorialInputManager_C* NEW_BP_Widget_TutorialInputManager;  // 0x03F0 (size: 0x8)
    class UNEW_BP_Widget_TutorialTitle_C* NEW_BP_Widget_TutorialTitle;                // 0x03F8 (size: 0x8)
    class UGridPanel* ObjectivesBox;                                                  // 0x0400 (size: 0x8)
    class USizeBox* ScaleBox;                                                         // 0x0408 (size: 0x8)
    class UCanvasPanel* TutoPanel;                                                    // 0x0410 (size: 0x8)
    bool Display;                                                                     // 0x0418 (size: 0x1)
    float NewVar_0;                                                                   // 0x041C (size: 0x4)

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
}; // Size: 0x420

#endif
