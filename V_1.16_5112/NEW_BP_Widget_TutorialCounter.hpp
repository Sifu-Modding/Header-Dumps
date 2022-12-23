#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialCounter_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialCounter_HPP

class UNEW_BP_Widget_TutorialCounter_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnim;
    class UWidgetAnimation* Active;
    class UWidgetAnimation* Inactive;
    class UWidgetAnimation* CounterUpdate;
    class UWidgetAnimation* CounterComplete;
    class UBorder* Border_Inputs;
    class UTextBlock* CounterTexts;
    class USizeBox* InputsBox;
    class UImage* Line;
    class UScaleBox* ScaleText;
    class UTextBlock* TextBlock_Name;
    class UTextBlock* TextBlock_SubInfos;
    class UImage* ValidationStroke;
    FText DisplayedText;
    FStr_TutorialActionCounters Counter;
    bool IsCompleted;

    void Highlight(bool Highlight, bool Force);
    void CreateInputDisplay();
    void ScaleWidget();
    void UpdateCounter(FStr_TutorialActionCounters UpdatedCount);
    void CounterCompleted();
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialCounter(int32 EntryPoint);
};

#endif
