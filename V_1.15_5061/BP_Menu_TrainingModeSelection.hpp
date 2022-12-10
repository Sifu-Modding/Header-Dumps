#ifndef UE4SS_SDK_BP_Menu_TrainingModeSelection_HPP
#define UE4SS_SDK_BP_Menu_TrainingModeSelection_HPP

class UBP_Menu_TrainingModeSelection_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_130;
    class UBP_Btn_Difficulty_ListItem_C* Btn_FreeTraining;
    class UCanvasPanel* CanvasPanel_205;
    class UWidgetSwitcher* DescriptionSwitcher;
    class UVerticalBox* ModeList;
    FBP_Menu_TrainingModeSelection_CTrainingSelectedMode TrainingSelectedMode;
    void TrainingSelectedMode(bool FreeTraining, int32 LessonNumber);
    FBP_Menu_TrainingModeSelection_CLeaveTrainingRoom LeaveTrainingRoom;
    void LeaveTrainingRoom();
    TArray<class UWidget*> CreatedWidgets;

    bool BPE_OnBackButtonPressed();
    void CreateLessonList(TArray<FSTR_Lesson>& Lessons);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_TrainingModeSelection_Btn_FreeTraining_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_TrainingModeSelection_Btn_FreeTraining_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnLessonSelected(int32 LessonNumber);
    void OnLessonFocused(const int32 LessonNumber);
    void RemoveMenuFromStack();
    void ExecuteUbergraph_BP_Menu_TrainingModeSelection(int32 EntryPoint);
    void LeaveTrainingRoom__DelegateSignature();
    void TrainingSelectedMode__DelegateSignature(bool FreeTraining, int32 LessonNumber);
};

#endif
