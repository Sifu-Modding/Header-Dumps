#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialCustomCondition_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialCustomCondition_HPP

class UNEW_BP_Widget_TutorialCustomCondition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Stroke_Appears;                                           // 0x0270 (size: 0x8)
    class UTextBlock* HintText;                                                       // 0x0278 (size: 0x8)
    int32 MaxCount;                                                                   // 0x0280 (size: 0x4)
    FText Condition;                                                                  // 0x0288 (size: 0x18)
    bool IsCompleted;                                                                 // 0x02A0 (size: 0x1)

    void ConditionCompleted();
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialCustomCondition(int32 EntryPoint);
}; // Size: 0x2A1

#endif
