#ifndef UE4SS_SDK_BP_SliceBamboo_HPP
#define UE4SS_SDK_BP_SliceBamboo_HPP

class ABP_SliceBamboo_C : public ASCActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMeshRef;                                        // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* FolliageBase;                                         // 0x02F0 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x02F8 (size: 0x8)
    class UBP_WallJumpBoundingBoxComponent_C* BP_WallJumpBoundingBoxComponent;        // 0x0300 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0308 (size: 0x8)
    class UBoxComponent* BoxCollHit;                                                  // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Animated StaticMesh;                                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Timeline_2_NewTrack_2_E08433BC49ED792A686CC29ABF431EDC;                     // 0x0330 (size: 0x4)
    float Timeline_2_NewTrack_1_E08433BC49ED792A686CC29ABF431EDC;                     // 0x0334 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_E08433BC49ED792A686CC29ABF431EDC; // 0x0338 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0340 (size: 0x8)
    float Timeline_0_NewTrack_0_49FDAE274B65502AE2C5A0BDFD63AD37;                     // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_49FDAE274B65502AE2C5A0BDFD63AD37; // 0x034C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0350 (size: 0x8)
    class UProceduralMeshComponent* Rest of ProceduralMesh;                           // 0x0358 (size: 0x8)
    bool Is Sliced;                                                                   // 0x0360 (size: 0x1)
    FVector Impact Location;                                                          // 0x0364 (size: 0xC)

    bool CanBeHitted(class AActor* _Instigator);
    EFactionsEnums GetFaction();
    bool IsValidTarget(const class AActor* _targeter);
    void Compute Rotation(FVector Impact Dir, FVector Location, EAttackMovementType Attack_Movement, class AActor* Hit Instigator, FTransform& Transfom Slice);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Slicing();
    void BndEvt__BP_EnvironmentalHitComponent_K2Node_ComponentBoundEvent_0_HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void ReceiveBeginPlay();
    void Wobbling(bool Fajar Jumping on Bamboo);
    void ExecuteUbergraph_BP_SliceBamboo(int32 EntryPoint);
}; // Size: 0x370

#endif
