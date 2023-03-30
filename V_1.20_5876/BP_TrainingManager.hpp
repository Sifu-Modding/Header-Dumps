#ifndef UE4SS_SDK_BP_TrainingManager_HPP
#define UE4SS_SDK_BP_TrainingManager_HPP

class ABP_TrainingManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UAbilitySystemComponent* AbilitySystem;                                     // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    class AActor* PlayerPositionForReset;                                             // 0x02C8 (size: 0x8)
    TArray<class ABP_Training_WeaponSpawner_C*> WeaponSpawners;                       // 0x02D0 (size: 0x10)
    class ABP_FightingPlayer_C* FightingCharacter;                                    // 0x02E0 (size: 0x8)
    class ABP_AISpawner_C* AISpawner;                                                 // 0x02E8 (size: 0x8)
    class AFightingPlayerControllerBP_C* PlayerController;                            // 0x02F0 (size: 0x8)
    bool IsAIPassive;                                                                 // 0x02F8 (size: 0x1)
    class UBP_HUD_TrainingRoom_C* HUDTraining;                                        // 0x0300 (size: 0x8)
    FBP_TrainingManager_COnTrainingEnded OnTrainingEnded;                             // 0x0308 (size: 0x10)
    void OnTrainingEnded();
    TEnumAsByte<Enum_TrainingRoom_Events> CurrentTrainingRoomEvent;                   // 0x0318 (size: 0x1)
    FBP_TrainingManager_COnTrainingEventTriggered OnTrainingEventTriggered;           // 0x0320 (size: 0x10)
    void OnTrainingEventTriggered(TEnumAsByte<Enum_TrainingRoom_Events> TriggeredEvent);
    class USceneComponent* ExitPositionComponent;                                     // 0x0330 (size: 0x8)
    TMap<TEnumAsByte<Enum_TrainingSelectableArchetypes>, FSTR_Training_AISpawners> AISpawners; // 0x0338 (size: 0x50)
    FSTR_Training_SpawnedAI SpawnedAIs;                                               // 0x0388 (size: 0x8)
    TArray<class AAISpawner*> UsedSpawners;                                           // 0x0390 (size: 0x10)
    class UPDA_TrainingSelectableAI_C* TrainingArchetypeDB;                           // 0x03A0 (size: 0x8)
    FSTR_Training_SpawnedAI AIsToSpawn;                                               // 0x03A8 (size: 0x8)
    FActiveGameplayEffectHandle InTrainingModeEffect;                                 // 0x03B0 (size: 0x8)
    TArray<class ATutorial_Manager_C*> TutorialManagers;                              // 0x03B8 (size: 0x10)
    int32 CurrentTutoStep;                                                            // 0x03C8 (size: 0x4)
    bool InTutorial;                                                                  // 0x03CC (size: 0x1)
    class ABP_LessonManager_C* LessonManager;                                         // 0x03D0 (size: 0x8)
    int32 CurrentLesson;                                                              // 0x03D8 (size: 0x4)
    bool FreeTraining;                                                                // 0x03DC (size: 0x1)
    TEnumAsByte<Enum_TrainingRoom_Mode> CurrentMode;                                  // 0x03DD (size: 0x1)
    bool LoadedFromWuguan;                                                            // 0x03DE (size: 0x1)
    int32 ReplayTag;                                                                  // 0x03E0 (size: 0x4)
    int32 CameraRemoveDampingHandle;                                                  // 0x03E4 (size: 0x4)
    int32 CameraDamping;                                                              // 0x03E8 (size: 0x4)

    void SetTrainingMode(TEnumAsByte<Enum_TrainingRoom_Mode> WhereTo);
    void SetAIBehaviour(bool Active, class UAIFightingComponent* AIComponent);
    void SetSpawnAIAsPassive(class AActor* AIRespawned);
    void ResetTutorialState();
    void CleanSpawnedAIs();
    void Spawn AIs(FSTR_Training_SpawnedAI SelectedAI, FSTR_Training_SpawnedAI& SpawnedAI);
    void SetCurrentTrainingEvent(TEnumAsByte<Enum_TrainingRoom_Events> TriggeredEvent);
    void PlayEventSound(TEnumAsByte<Enum_TrainingRoom_Events> Event);
    void EnterTrainingRoom();
    void LeaveTrainingRoom();
    void ResetTrainingRoom();
    void AIChangeBehaviour();
    void ReceiveBeginPlay();
    void StartArchetypeChange();
    void ApplyArchetype(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    void ChangeArchetypes(FSTR_Training_SpawnedAI SelectedAI);
    void FinishedSpawn();
    void StartFreeTraining();
    void StartSelectedMode(bool FreeTraining, int32 LessonNumber);
    void ReturnToTrainingModeSelection();
    void OnContinueInteraction(bool _bContinue);
    void OnContinueInteract(bool _bContinue);
    void ExecuteUbergraph_BP_TrainingManager(int32 EntryPoint);
    void OnTrainingEventTriggered__DelegateSignature(TEnumAsByte<Enum_TrainingRoom_Events> TriggeredEvent);
    void OnTrainingEnded__DelegateSignature();
}; // Size: 0x3EC

#endif
