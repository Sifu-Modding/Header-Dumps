#ifndef UE4SS_SDK_BP_Widget_Training_LessonActions_HPP
#define UE4SS_SDK_BP_Widget_Training_LessonActions_HPP

class UBP_Widget_Training_LessonActions_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ActionLessonCompleted;
    class UWidgetAnimation* ActionComplete;
    class UWidgetAnimation* ActionFail;
    class UWidgetAnimation* OLD_ActionComplete;
    class URichTextBlock* Action_InputText;
    class UTextBlock* Action_Text;
    bool IsCompleted;
    FText MainText;
    InputAction Input;

    void ActionToggle();
    void Construct();
    void ChangeButtonState(TEnumAsByte<Enum_Lesson_ActionState> State);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Widget_Training_LessonActions(int32 EntryPoint);
};

#endif
