#ifndef UE4SS_SDK_BP_Menu_TrainingModeSelection_HPP
#define UE4SS_SDK_BP_Menu_TrainingModeSelection_HPP

class UBP_Menu_TrainingModeSelection_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x03E0 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x03E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_205;                                              // 0x03F0 (size: 0x8)
    class UWidgetSwitcher* DescriptionSwitcher;                                       // 0x03F8 (size: 0x8)
    class UBP_Btn_TrainingMode_LessonListItem_C* FreeTraining;                        // 0x0400 (size: 0x8)
    class UVerticalBox* ModeList;                                                     // 0x0408 (size: 0x8)
    FBP_Menu_TrainingModeSelection_CTrainingSelectedMode TrainingSelectedMode;        // 0x0410 (size: 0x10)
    void TrainingSelectedMode(bool FreeTraining, int32 LessonNumber);
    FBP_Menu_TrainingModeSelection_CLeaveTrainingRoom LeaveTrainingRoom;              // 0x0420 (size: 0x10)
    void LeaveTrainingRoom();
    TArray<class UWidget*> CreatedWidgets;                                            // 0x0430 (size: 0x10)

    bool BPE_OnBackButtonPressed();
    void CreateLessonList(TArray<FSTR_Lesson>& Lessons);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_TrainingModeSelection_Btn_FreeTraining_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_TrainingModeSelection_Btn_FreeTraining_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnLessonSelected(int32 LessonNumber);
    void OnLessonFocused(const int32 LessonNumber);
    void RemoveMenuFromStack();
    void Construct();
    void ExecuteUbergraph_BP_Menu_TrainingModeSelection(int32 EntryPoint);
    void LeaveTrainingRoom__DelegateSignature();
    void TrainingSelectedMode__DelegateSignature(bool FreeTraining, int32 LessonNumber);
}; // Size: 0x440

#endif
