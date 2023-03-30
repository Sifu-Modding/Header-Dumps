#ifndef UE4SS_SDK_BP_HUD_Tuto_HPP
#define UE4SS_SDK_BP_HUD_Tuto_HPP

class UBP_HUD_Tuto_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* TaskAnim01;                                               // 0x03A0 (size: 0x8)
    class UWidgetAnimation* TaskAnim02;                                               // 0x03A8 (size: 0x8)
    class UWidgetAnimation* ObjectivesOut;                                            // 0x03B0 (size: 0x8)
    class UWidgetAnimation* ObjectivesIn;                                             // 0x03B8 (size: 0x8)
    class UWidgetAnimation* InputsOut;                                                // 0x03C0 (size: 0x8)
    class UWidgetAnimation* InputsIn;                                                 // 0x03C8 (size: 0x8)
    class UBorder* AdviceBox;                                                         // 0x03D0 (size: 0x8)
    class UBP_HUD_InputsBox_C* BP_InputsBox;                                          // 0x03D8 (size: 0x8)
    class UBP_Tuto_NextStep_C* BP_Tuto_NextStep;                                      // 0x03E0 (size: 0x8)
    class UBP_Tuto_ParryTiming_C* BP_Tuto_ParryTiming_TEMP;                           // 0x03E8 (size: 0x8)
    class UBP_Tuto_Task_C* BP_Tuto_Task1;                                             // 0x03F0 (size: 0x8)
    class UBP_Tuto_Task_C* BP_Tuto_Task2;                                             // 0x03F8 (size: 0x8)
    class UBP_Tuto_Window_C* BP_TutoWindow_TEMP;                                      // 0x0400 (size: 0x8)
    class UCanvasPanel* CanvasPanelForOffset;                                         // 0x0408 (size: 0x8)
    class UBorder* ObjectivesBox;                                                     // 0x0410 (size: 0x8)
    class UImage* Stroke01;                                                           // 0x0418 (size: 0x8)
    class UImage* Stroke02;                                                           // 0x0420 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0428 (size: 0x8)
    class UTextBlock* TxtAdvice1;                                                     // 0x0430 (size: 0x8)
    int32 Task1_ValueProgression;                                                     // 0x0438 (size: 0x4)
    int32 Task2_ValueProgression;                                                     // 0x043C (size: 0x4)
    FText Task1_Text;                                                                 // 0x0440 (size: 0x18)
    FText Task2_Text;                                                                 // 0x0458 (size: 0x18)
    FText NextPhase_Text;                                                             // 0x0470 (size: 0x18)
    int32 Task1_ValueToReach;                                                         // 0x0488 (size: 0x4)
    int32 Task2_ValueToReach;                                                         // 0x048C (size: 0x4)
    bool Task1_Cleared;                                                               // 0x0490 (size: 0x1)
    bool Task2_Cleared;                                                               // 0x0491 (size: 0x1)
    FText Advice_Text;                                                                // 0x0498 (size: 0x18)

    void BarTask2();
    void BarTask1();
    void SetTutoNextPhase(int32 TutoCurrentPhase, FText& TxtTutoNextPhase);
    void Construct();
    void DisplayTask(int32 Which task, FText TextRequirement, int32 ValueToReach, int32 ValueCurrent, bool HasValueRequirement);
    void HideTasks();
    void ClearTask(int32 WhichTask);
    void UpdateValue(int32 Which task, int32 Updated Value);
    void UpdateTask(Display)(int32 WhichTask, class UBP_Tuto_Task_C* TaskRef, FText Text, int32 ValueToReach, int32 ValueCurrent, bool HasValueRequirement);
    void ResetTasksValidation();
    void Ready For Next(int32 TutoCurrentPhase);
    void DisplayTutoScreen(FText Text1, FText Text2_1, FText Text2_2, FText Text2_3, FText Text3, bool HasImg1, class UObject* Img1, bool HasImg2, class UObject* Img2, bool MultipleInputs_1, bool MultipleInputs_2, bool MultipleInputs_3, bool HasInput1, bool HasInput2, bool HasInput3, class UGenericInputData* Input1_L, class UGenericInputData* Input1_R, class UGenericInputData* Input2_L, class UGenericInputData* Input2_R, class UGenericInputData* Input3_L, class UGenericInputData* Input3_R);
    void ExitTutoScreen();
    void PlayBadParryFeedback(bool Early?, FVector2D Location);
    void UpdateAdvice(FText Advice);
    void ExecuteUbergraph_BP_HUD_Tuto(int32 EntryPoint);
}; // Size: 0x4B0

#endif
