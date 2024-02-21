#ifndef UE4SS_SDK_BP_HUD_TrainingRoom_HPP
#define UE4SS_SDK_BP_HUD_TrainingRoom_HPP

class UBP_HUD_TrainingRoom_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* Bg_Disappears;                                            // 0x03A0 (size: 0x8)
    class UWidgetAnimation* Bg_Appears;                                               // 0x03A8 (size: 0x8)
    class UWidgetAnimation* StepStart_Freeze;                                         // 0x03B0 (size: 0x8)
    class UWidgetAnimation* StepEnd_Freeze;                                           // 0x03B8 (size: 0x8)
    class UWidgetAnimation* LessonStarts;                                             // 0x03C0 (size: 0x8)
    class UWidgetAnimation* LessonFinished;                                           // 0x03C8 (size: 0x8)
    class UWidgetAnimation* ButtonTips_FadeIn;                                        // 0x03D0 (size: 0x8)
    class UBackgroundBlur* BackgroundLesson;                                          // 0x03D8 (size: 0x8)
    class UBP_Btn_Hint_C* Hint_Behavior;                                              // 0x03E0 (size: 0x8)
    class UBP_Btn_Hint_C* Hint_Quit;                                                  // 0x03E8 (size: 0x8)
    class UBP_Btn_Hint_C* Hint_Quit_Tuto;                                             // 0x03F0 (size: 0x8)
    class UBP_Btn_Hint_C* Hint_Tutorial;                                              // 0x03F8 (size: 0x8)
    class UBP_Btn_Hint_C* Hint_Type;                                                  // 0x0400 (size: 0x8)
    class UVerticalBox* HUD_FreeTraining;                                             // 0x0408 (size: 0x8)
    class UCanvasPanel* HUD_Lessons;                                                  // 0x0410 (size: 0x8)
    class UVerticalBox* HUD_TutorialReplay;                                           // 0x0418 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0420 (size: 0x8)
    class UVerticalBox* Lesson_LeaveBox;                                              // 0x0428 (size: 0x8)
    class UTextBlock* Lesson_Name;                                                    // 0x0430 (size: 0x8)
    class UVerticalBox* Lesson_StepActions;                                           // 0x0438 (size: 0x8)
    class URichTextBlock* Lesson_StepDescription;                                     // 0x0440 (size: 0x8)
    class UTextBlock* Lesson_StepNumber;                                              // 0x0448 (size: 0x8)
    class UVerticalBox* LessonFinished_Box;                                           // 0x0450 (size: 0x8)
    class UBP_Btn_Hint_C* NextStep;                                                   // 0x0458 (size: 0x8)
    class UBP_Btn_Hint_C* NextStep_End;                                               // 0x0460 (size: 0x8)
    class UBP_Btn_Hint_C* PreviousStep;                                               // 0x0468 (size: 0x8)
    class UHorizontalBox* StartStepBox;                                               // 0x0470 (size: 0x8)
    class UVerticalBox* StepDescription;                                              // 0x0478 (size: 0x8)
    class UVerticalBox* StepSelectionBox_End;                                         // 0x0480 (size: 0x8)
    class UVerticalBox* StepSelectionBox_Start;                                       // 0x0488 (size: 0x8)
    FTimerHandle HoldProgressTimer;                                                   // 0x0490 (size: 0x8)
    float HoldProgress;                                                               // 0x0498 (size: 0x4)
    FSTR_Training_SpawnedAI Training Spawned AI;                                      // 0x049C (size: 0x8)
    TEnumAsByte<Enum_TrainingSelectableArchetypes> Archetypes;                        // 0x04A4 (size: 0x1)
    FBP_HUD_TrainingRoom_CApplyArchetypeEvent ApplyArchetypeEvent;                    // 0x04A8 (size: 0x10)
    void ApplyArchetypeEvent(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    FBP_HUD_TrainingRoom_COnModeSelected OnModeSelected;                              // 0x04B8 (size: 0x10)
    void OnModeSelected(int32 LessonNumber);
    int32 CurrentStepNumber;                                                          // 0x04C8 (size: 0x4)
    FText Step Description;                                                           // 0x04D0 (size: 0x18)
    TArray<FSTR_Lesson_Action> Lesson Actions;                                        // 0x04E8 (size: 0x10)
    bool IsFirstTimePlayingStep;                                                      // 0x04F8 (size: 0x1)
    bool IsLastStepFromLesson;                                                        // 0x04F9 (size: 0x1)
    int32 TotalStepNumber;                                                            // 0x04FC (size: 0x4)
    int32 CurrentStepActionNumber;                                                    // 0x0500 (size: 0x4)
    TArray<class UBP_Widget_Training_LessonActions_C*> CurrentStepActions;            // 0x0508 (size: 0x10)
    bool IsLessonAlreadyCompleted;                                                    // 0x0518 (size: 0x1)
    TArray<class UWidget*> StartStepWidgets;                                          // 0x0520 (size: 0x10)
    TArray<class UWidget*> GameplayWidgets;                                           // 0x0530 (size: 0x10)
    FBP_HUD_TrainingRoom_CLessonMenuCreated LessonMenuCreated;                        // 0x0540 (size: 0x10)
    void LessonMenuCreated(class UBP_Menu_LessonStepSelection_C* Menu);

    void StartLessonMenu(TEnumAsByte<Enum_Lesson_State> State, bool DisplayNext, bool DisplayPrevious, bool IsLastStep, class UBP_Menu_LessonStepSelection_C*& MenuModeSelection);
    void StartTrainingModeSelection(TArray<FSTR_Lesson>& ExistingLessons, class UBP_Menu_TrainingModeSelection_C*& MenuModeSelection);
    void AIArchetypeChange(class UPDA_TrainingSelectableAI_C* TrainingArchetypeDB);
    void ToggleOnOptionChanged(EGameOptionTypes eGameOptionType);
    void AIStateChange(bool Passive, bool PlayStatusAnim);
    void ToggleTrainingRoom(bool Activate, bool Instant);
    void ToggleTutorial(bool Activate);
    void ToggleLesson(bool Activate);
    void StartHoldLeaveButton();
    void StopLeaveButton();
    void UpdateHoldProgress();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ApplyChangedArchetype(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    void StartLesson(FText LessonName, int32 NumberOfSteps, bool IsLessonCompleted);
    void StartStep(FText StepDescription, const TArray<FSTR_Lesson_Action>& LessonActions, int32 CurrentStep, bool FirstTime, bool LastStep);
    void ActionCompleted();
    void ActionFailed(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    void LessonSuccess();
    void OnStepFinished();
    void StartStep_Gameplay();
    void OnBackMenu();
    void ExecuteUbergraph_BP_HUD_TrainingRoom(int32 EntryPoint);
    void LessonMenuCreated__DelegateSignature(class UBP_Menu_LessonStepSelection_C* Menu);
    void OnModeSelected__DelegateSignature(int32 LessonNumber);
    void ApplyArchetypeEvent__DelegateSignature(FSTR_Training_SpawnedAI TrainingSpawnedAI);
}; // Size: 0x550

#endif
