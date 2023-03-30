#ifndef UE4SS_SDK_BP_SkillTreeV5_HPP
#define UE4SS_SDK_BP_SkillTreeV5_HPP

class ABP_SkillTreeV5_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* SM_SkillTreeFloorDecal_01_A_1;                        // 0x02B8 (size: 0x8)
    class UParticleSystemComponent* P_PollenDust_Skilltree;                           // 0x02C0 (size: 0x8)
    class UParticleSystemComponent* PS_LeavesSkillTree;                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* SM_SkillTreeFloorV5_01;                               // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* SM_TreeLeaves_V5_01;                                  // 0x02D8 (size: 0x8)
    class UCapsuleComponent* CollisionPlayer;                                         // 0x02E0 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject1;                            // 0x02E8 (size: 0x8)
    class UBoxComponent* InputPosition;                                               // 0x02F0 (size: 0x8)
    class UBoxComponent* BoxCollisionMenu;                                            // 0x02F8 (size: 0x8)
    class USceneComponent* InteractionObject;                                         // 0x0300 (size: 0x8)
    int32 TotalSkillsNumber;                                                          // 0x0308 (size: 0x4)
    int32 ActualSkillsNumber_debug;                                                   // 0x030C (size: 0x4)
    TArray<class USkeletalMesh*> SkeletalMeshArray;                                   // 0x0310 (size: 0x10)
    int32 DecimalCount;                                                               // 0x0320 (size: 0x4)
    bool Condition;                                                                   // 0x0324 (size: 0x1)
    bool TreeOld;                                                                     // 0x0325 (size: 0x1)
    TArray<class UStaticMesh*> StaticMeshArraySkillTree;                              // 0x0328 (size: 0x10)
    TArray<class UStaticMesh*> StaticMeshArrayFloor;                                  // 0x0338 (size: 0x10)
    FDataTableRowHandle NewVar_0;                                                     // 0x0348 (size: 0x10)
    class UDataTable* Skilltree DT;                                                   // 0x0358 (size: 0x8)
    int32 CurrentWuguan;                                                              // 0x0360 (size: 0x4)
    TArray<bool> ST_channelLight;                                                     // 0x0368 (size: 0x10)
    TArray<class UMaterialInstance*> FloorLeavesMaterial;                             // 0x0378 (size: 0x10)

    void UpdateSkillTreeFromSave();
    void SetSkillTreeRoots();
    void Set Skill Treein State(int32 CurrentSkillNumber);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnStatChanged(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void OnStatsChanged();
    void BndEvt__BP_SkillTreeV3_InteractionObject1_K2Node_ComponentBoundEvent_1_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnPawnInitializedEvent(class AFightingCharacter* _pawn);
    void ExecuteUbergraph_BP_SkillTreeV5(int32 EntryPoint);
}; // Size: 0x388

#endif
