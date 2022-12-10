#ifndef UE4SS_SDK_BP_HUD_TrainingRoom_HPP
#define UE4SS_SDK_BP_HUD_TrainingRoom_HPP

class UBP_HUD_TrainingRoom_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ButtonTips_FadeIn;
    class UBP_Btn_Hint_C* Hint_Behavior;
    class UBP_Btn_Hint_C* Hint_Quit;
    class UBP_Btn_Hint_C* Hint_Quit_Lessons;
    class UBP_Btn_Hint_C* Hint_Quit_Tuto;
    class UBP_Btn_Hint_C* Hint_Tutorial;
    class UBP_Btn_Hint_C* Hint_Type;
    class UVerticalBox* HUD_FreeTraining;
    class UCanvasPanel* HUD_Lessons;
    class UVerticalBox* HUD_TutorialReplay;
    class UTextBlock* Lesson_Name;
    class UVerticalBox* Lesson_StepActions;
    class UTextBlock* Lesson_StepDescription;
    class UTextBlock* LessonFinished_Text;
    class UVerticalBox* StepDescription;
    FTimerHandle HoldProgressTimer;
    float HoldProgress;
    TEnumAsByte<Enum_TrainingSelectableArchetypes> Archetypes;
    FBP_HUD_TrainingRoom_CApplyArchetypeEvent ApplyArchetypeEvent;
    void ApplyArchetypeEvent(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    FSTR_Training_SpawnedAI Training Spawned AI;
    FBP_HUD_TrainingRoom_COnModeSelected OnModeSelected;
    void OnModeSelected(int32 LessonNumber);
    TArray<class UBP_Widget_Training_LessonActions_C*> CurrentStepActions;
    int32 CurrentStepActionNumber;

    void StartTrainingModeSelection(TArray<FSTR_Lesson>& Lessons, class UBP_Menu_TrainingModeSelection_C*& MenuModeSelection);
    void AIArchetypeChange(class UPDA_TrainingSelectableAI_C* TrainingArchetypeDB);
    void ToggleOnOptionChanged(EGameOptionTypes eGameOptionType);
    void AIStateChange(bool Passive, bool PlayStatusAnim);
    void ToggleTrainingRoom(bool Activate);
    void ToggleTutorial(bool Activate);
    void ToggleLesson(bool Activate);
    void StartHoldLeaveButton();
    void StopLeaveButton();
    void UpdateHoldProgress();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ApplyChangedArchetype(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    void StartLesson(FText LessonName);
    void StartStep(FText StepDescription, const TArray<FSTR_Lesson_Action>& LessonActions);
    void ActionCompleted();
    void ActionFailed();
    void LessonSuccess();
    void OnStepFinished();
    void ExecuteUbergraph_BP_HUD_TrainingRoom(int32 EntryPoint);
    void OnModeSelected__DelegateSignature(int32 LessonNumber);
    void ApplyArchetypeEvent__DelegateSignature(FSTR_Training_SpawnedAI TrainingSpawnedAI);
};

#endif
