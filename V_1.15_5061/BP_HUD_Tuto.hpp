#ifndef UE4SS_SDK_BP_HUD_Tuto_HPP
#define UE4SS_SDK_BP_HUD_Tuto_HPP

class UBP_HUD_Tuto_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TaskAnim01;
    class UWidgetAnimation* TaskAnim02;
    class UWidgetAnimation* ObjectivesOut;
    class UWidgetAnimation* ObjectivesIn;
    class UWidgetAnimation* InputsOut;
    class UWidgetAnimation* InputsIn;
    class UBorder* AdviceBox;
    class UBP_HUD_InputsBox_C* BP_InputsBox;
    class UBP_Tuto_NextStep_C* BP_Tuto_NextStep;
    class UBP_Tuto_ParryTiming_C* BP_Tuto_ParryTiming_TEMP;
    class UBP_Tuto_Task_C* BP_Tuto_Task1;
    class UBP_Tuto_Task_C* BP_Tuto_Task2;
    class UBP_Tuto_Window_C* BP_TutoWindow_TEMP;
    class UCanvasPanel* CanvasPanelForOffset;
    class UBorder* ObjectivesBox;
    class UImage* Stroke01;
    class UImage* Stroke02;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TxtAdvice1;
    int32 Task1_ValueProgression;
    int32 Task2_ValueProgression;
    FText Task1_Text;
    FText Task2_Text;
    FText NextPhase_Text;
    int32 Task1_ValueToReach;
    int32 Task2_ValueToReach;
    bool Task1_Cleared;
    bool Task2_Cleared;
    FText Advice_Text;

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
};

#endif
