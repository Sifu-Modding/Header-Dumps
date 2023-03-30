#ifndef UE4SS_SDK_HO1_BossRoom_PlantBoxTraversal_HPP
#define UE4SS_SDK_HO1_BossRoom_PlantBoxTraversal_HPP

class AHO1_BossRoom_PlantBoxTraversal_C : public ABP_TableTraversal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UTextRenderComponent* Debug Name;                                           // 0x0308 (size: 0x8)
    class UBoxComponent* Vanish Box;                                                  // 0x0310 (size: 0x8)
    class UBP_WallJumpBoundingBoxComponent_C* BP_WallJumpBoundingBoxComponent;        // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_PurpleMist_07_A_1;                                 // 0x0320 (size: 0x8)
    class UChildActorComponent* BP_Cutable_Bamboos;                                   // 0x0328 (size: 0x8)
    FVector Timeline_0_NewTrack_0_996018994AB32AD33CCB1B9020C214E9;                   // 0x0330 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_996018994AB32AD33CCB1B9020C214E9; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    int32 Phase;                                                                      // 0x0348 (size: 0x4)
    int32 Debug ID;                                                                   // 0x034C (size: 0x4)

    void Get Closest Vanish Point(FVector From, FVector& Point);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Phase_02();
    void SetTraversalInactive();
    void SetTraversalActive();
    void ReceiveBeginPlay();
    void PlayAudioEvent(class UTraversalComponent* _traversalComponent);
    void ExecuteUbergraph_HO1_BossRoom_PlantBoxTraversal(int32 EntryPoint);
}; // Size: 0x350

#endif
