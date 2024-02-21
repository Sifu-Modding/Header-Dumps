#ifndef UE4SS_SDK_BP_LessonManager_HPP
#define UE4SS_SDK_BP_LessonManager_HPP

class ABP_LessonManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    bool CurrentAIShouldAttack;                                                       // 0x02C0 (size: 0x1)
    FString AIPhaseName;                                                              // 0x02C8 (size: 0x10)
    class ABP_AICharacter_Base_C* SpawnedAI;                                          // 0x02D8 (size: 0x8)
    class ABP_AISpawner_C* LessonDummySpawner;                                        // 0x02E0 (size: 0x8)
    class ABP_FightingPlayer_C* MainChar;                                             // 0x02E8 (size: 0x8)
    class AActor* PlayerPositionForReset;                                             // 0x02F0 (size: 0x8)
    class UPDA_Lesson_C* LessonDB;                                                    // 0x02F8 (size: 0x8)
    FText CurrentLessonName;                                                          // 0x0300 (size: 0x18)
    TArray<FSTR_Lesson_Step> CurrentLessonSteps;                                      // 0x0318 (size: 0x10)
    bool StepFirstTime;                                                               // 0x0328 (size: 0x1)
    int32 CurrentStepNumber;                                                          // 0x032C (size: 0x4)
    class UBP_LessonActionCondition_Master_C* CurrentStepAction;                      // 0x0330 (size: 0x8)
    int32 CurrentActionNumber;                                                        // 0x0338 (size: 0x4)
    FBP_LessonManager_CUI_LessonStarted UI_LessonStarted;                             // 0x0340 (size: 0x10)
    void UI_LessonStarted(FText LessonName, int32 NumberOfSteps, bool IsLessonCompleted);
    FBP_LessonManager_CUI_LessonSuccess UI_LessonSuccess;                             // 0x0350 (size: 0x10)
    void UI_LessonSuccess();
    FBP_LessonManager_CUI_StepStarted UI_StepStarted;                                 // 0x0360 (size: 0x10)
    void UI_StepStarted(FText StepDescription, TArray<FSTR_Lesson_Action>& StepAction, int32 CurrentStep, bool FirstTime, bool LastStep);
    FBP_LessonManager_CUI_StepFinished UI_StepFinished;                               // 0x0370 (size: 0x10)
    void UI_StepFinished();
    FBP_LessonManager_CUI_ActionCompleted UI_ActionCompleted;                         // 0x0380 (size: 0x10)
    void UI_ActionCompleted();
    TArray<FSTR_Lesson_Action> CurrentStepActions;                                    // 0x0390 (size: 0x10)
    FBP_LessonManager_CUI_ActionFailed UI_ActionFailed;                               // 0x03A0 (size: 0x10)
    void UI_ActionFailed(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    class AFightingPlayerControllerBP_C* PlayerController;                            // 0x03B0 (size: 0x8)
    int32 CurrentLessonNumber;                                                        // 0x03B8 (size: 0x4)
    FBP_LessonManager_CLessonFinished LessonFinished;                                 // 0x03C0 (size: 0x10)
    void LessonFinished();
    float DelayAfterFail;                                                             // 0x03D0 (size: 0x4)
    float DelayAfterStepFinished;                                                     // 0x03D4 (size: 0x4)
    float DelayAfterLessonSuccess;                                                    // 0x03D8 (size: 0x4)
    float DelayBeforeAIAttack;                                                        // 0x03DC (size: 0x4)
    float FadeDuration;                                                               // 0x03E0 (size: 0x4)
    float DelayBeforeAIAttack_FirstTime;                                              // 0x03E4 (size: 0x4)
    FString SpecialNeedsEventString;                                                  // 0x03E8 (size: 0x10)
    FBP_LessonManager_CAIStartAttacking AIStartAttacking;                             // 0x03F8 (size: 0x10)
    void AIStartAttacking();
    FBP_LessonManager_CUI_StepStarted_Gameplay UI_StepStarted_Gameplay;               // 0x0408 (size: 0x10)
    void UI_StepStarted_Gameplay();
    int32 SlowmoHandle;                                                               // 0x0418 (size: 0x4)
    TEnumAsByte<Enum_Lesson_State> CurrentLessonState;                                // 0x041C (size: 0x1)
    bool IsLessonAlreadyCompleted;                                                    // 0x041D (size: 0x1)
    FBP_LessonManager_CLeaveTrainingRoom LeaveTrainingRoom;                           // 0x0420 (size: 0x10)
    void LeaveTrainingRoom();
    FBP_LessonManager_CReturnToSelectionMode ReturnToSelectionMode;                   // 0x0430 (size: 0x10)
    void ReturnToSelectionMode();
    FString CurrentLessonID;                                                          // 0x0440 (size: 0x10)
    int32 CameraRemoveDampingHandle;                                                  // 0x0450 (size: 0x4)
    class UBP_HUD_TrainingRoom_C* HUDTraining;                                        // 0x0458 (size: 0x8)
    class UBP_Menu_LessonStepSelection_C* LessonStepMenu;                             // 0x0460 (size: 0x8)

    void UnbindCurrentCondition();
    void ResetLessonManager();
    void OnAIFinishSpawn(class ABaseCharacter* SpawnedCharacter);
    void SpawnStepAI(FSTR_Lesson_StepAI ArchetypeToSpawn);
    void SetAIPhase(class AActor* AIRespawned);
    void SetAIAttack(bool CanAttack);
    void StartLesson(int32 LessonNumber);
    void StartStep(FSTR_Lesson_Step StepToStart, bool FirstTime);
    void ActionSuccess();
    void ReceiveBeginPlay();
    void ActionFailed(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    void AI Attack();
    void OnStepStarted_SpecialNeeds(FString Event);
    void OnAIStartAttacking_SetLowStructure();
    void StartStep_Gameplay();
    void GoToNextStep();
    void GoToPreviousStep();
    void LeaveTrainingFromLesson();
    void ReturnToModeSelectionFromLesson();
    void OnLessonMenuCreated(class UBP_Menu_LessonStepSelection_C* Menu);
    void ReplayCurrentStep();
    void PlayNextStep();
    void FinishLesson();
    void PlayPreviousStep();
    void StartCurrentStep();
    void OnStepStartedGameplay();
    void OnStepFinished();
    void OnLessonSuccess();
    void OnActionFailed(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    void OnActionStarted();
    void OnStepStarted(FText StepDescription, TArray<FSTR_Lesson_Action>& StepAction, int32 CurrentStep, bool FirstTime, bool LastStep);
    void OnLessonStarted(FText LessonName, int32 NumberOfSteps, bool IsLessonCompleted);
    void ExecuteUbergraph_BP_LessonManager(int32 EntryPoint);
    void ReturnToSelectionMode__DelegateSignature();
    void LeaveTrainingRoom__DelegateSignature();
    void UI_StepStarted_Gameplay__DelegateSignature();
    void AIStartAttacking__DelegateSignature();
    void LessonFinished__DelegateSignature();
    void UI_LessonStarted__DelegateSignature(FText LessonName, int32 NumberOfSteps, bool IsLessonCompleted);
    void UI_ActionFailed__DelegateSignature(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    void UI_LessonSuccess__DelegateSignature();
    void UI_StepFinished__DelegateSignature();
    void UI_ActionCompleted__DelegateSignature();
    void UI_StepStarted__DelegateSignature(FText StepDescription, TArray<FSTR_Lesson_Action>& StepAction, int32 CurrentStep, bool FirstTime, bool LastStep);
}; // Size: 0x468

#endif
