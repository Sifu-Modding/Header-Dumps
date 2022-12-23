#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialCustomCondition_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialCustomCondition_HPP

class UNEW_BP_Widget_TutorialCustomCondition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Stroke_Appears;
    class UTextBlock* HintText;
    int32 MaxCount;
    FText Condition;
    bool IsCompleted;

    void ConditionCompleted();
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialCustomCondition(int32 EntryPoint);
};

#endif
