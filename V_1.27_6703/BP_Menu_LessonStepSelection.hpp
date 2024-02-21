#ifndef UE4SS_SDK_BP_Menu_LessonStepSelection_HPP
#define UE4SS_SDK_BP_Menu_LessonStepSelection_HPP

class UBP_Menu_LessonStepSelection_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* PressStartIdle;                                           // 0x03E0 (size: 0x8)
    class UWidgetAnimation* Disappear;                                                // 0x03E8 (size: 0x8)
    class UWidgetAnimation* Appears;                                                  // 0x03F0 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03F8 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_FinishLesson;                            // 0x0400 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_LeaveLesson;                             // 0x0408 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_NextStep;                                // 0x0410 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_ReplayStep;                              // 0x0418 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x0420 (size: 0x8)
    class UVerticalBox* ButtonBox;                                                    // 0x0428 (size: 0x8)
    class UCanvasPanel* CanvasPanel_205;                                              // 0x0430 (size: 0x8)
    class UWidgetSwitcher* FirstChoiceSwitch;                                         // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0440 (size: 0x8)
    class UBP_Btn_TrainingMode_StartLesson_C* PressStartButton;                       // 0x0448 (size: 0x8)
    class USizeBox* SizeBox_Buttons;                                                  // 0x0450 (size: 0x8)
    FBP_Menu_LessonStepSelection_COnReplayStep OnReplayStep;                          // 0x0458 (size: 0x10)
    void OnReplayStep();
    FBP_Menu_LessonStepSelection_COnNextStep OnNextStep;                              // 0x0468 (size: 0x10)
    void OnNextStep();
    FBP_Menu_LessonStepSelection_COnPreviousStep OnPreviousStep;                      // 0x0478 (size: 0x10)
    void OnPreviousStep();
    FBP_Menu_LessonStepSelection_COnLeaveLesson OnLeaveLesson;                        // 0x0488 (size: 0x10)
    void OnLeaveLesson();
    FBP_Menu_LessonStepSelection_COnFinishLesson OnFinishLesson;                      // 0x0498 (size: 0x10)
    void OnFinishLesson();
    FBP_Menu_LessonStepSelection_COnStartStep OnStartStep;                            // 0x04A8 (size: 0x10)
    void OnStartStep();
    TEnumAsByte<Enum_Lesson_State> CurrentLessonState;                                // 0x04B8 (size: 0x1)

    void SetupMenu(TEnumAsByte<Enum_Lesson_State> State, bool DisplayNext, bool DisplayPrevious, bool IsLastStep);
    bool BPE_OnBackButtonPressed();
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_LessonStep_Btn_LeaveLesson_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_LessonStep_Btn_FinishLesson_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_LessonStepSelection_BP_Btn_TrainingMode_StartLesson_C_1_K2Node_ComponentBoundEvent_4_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void ExecuteUbergraph_BP_Menu_LessonStepSelection(int32 EntryPoint);
    void OnStartStep__DelegateSignature();
    void OnFinishLesson__DelegateSignature();
    void OnLeaveLesson__DelegateSignature();
    void OnPreviousStep__DelegateSignature();
    void OnNextStep__DelegateSignature();
    void OnReplayStep__DelegateSignature();
}; // Size: 0x4B9

#endif
