#ifndef UE4SS_SDK_BP_Widget_Training_LessonActions_HPP
#define UE4SS_SDK_BP_Widget_Training_LessonActions_HPP

class UBP_Widget_Training_LessonActions_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* ActionFail_Timing_TooLate;                                // 0x0318 (size: 0x8)
    class UWidgetAnimation* ActionFail_Timing_TooEarly;                               // 0x0320 (size: 0x8)
    class UWidgetAnimation* ActionStepCompleted_Line;                                 // 0x0328 (size: 0x8)
    class UWidgetAnimation* ActionFail_Base;                                          // 0x0330 (size: 0x8)
    class UWidgetAnimation* OLD_ActionStepCompleted;                                  // 0x0338 (size: 0x8)
    class UWidgetAnimation* OLD_ActionValidated;                                      // 0x0340 (size: 0x8)
    class UWidgetAnimation* OLD_ActionFail;                                           // 0x0348 (size: 0x8)
    class UWidgetAnimation* ActionValidated_Line;                                     // 0x0350 (size: 0x8)
    class URichTextBlock* Action_InputText;                                           // 0x0358 (size: 0x8)
    class UTextBlock* Action_Text;                                                    // 0x0360 (size: 0x8)
    class UBP_InputAction_C* BP_InputAction;                                          // 0x0368 (size: 0x8)
    class UImage* Fail_Background;                                                    // 0x0370 (size: 0x8)
    class UImage* Fail_Icon;                                                          // 0x0378 (size: 0x8)
    class UTextBlock* Fail_Text;                                                      // 0x0380 (size: 0x8)
    class UWidgetSwitcher* InputSwitcher;                                             // 0x0388 (size: 0x8)
    class UOverlay* TextInput;                                                        // 0x0390 (size: 0x8)
    bool IsCompleted;                                                                 // 0x0398 (size: 0x1)
    FText MainText;                                                                   // 0x03A0 (size: 0x18)
    InputAction Input;                                                                // 0x03B8 (size: 0x1)

    void ActionToggle();
    void Construct();
    void ChangeButtonState(TEnumAsByte<Enum_Lesson_ActionState> State);
    void PreConstruct(bool IsDesignTime);
    void OnStepCompletedFinished();
    void ExecuteUbergraph_BP_Widget_Training_LessonActions(int32 EntryPoint);
}; // Size: 0x3B9

#endif
