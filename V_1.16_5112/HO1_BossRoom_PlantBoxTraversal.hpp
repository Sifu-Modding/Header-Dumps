#ifndef UE4SS_SDK_HO1_BossRoom_PlantBoxTraversal_HPP
#define UE4SS_SDK_HO1_BossRoom_PlantBoxTraversal_HPP

class AHO1_BossRoom_PlantBoxTraversal_C : public ABP_TableTraversal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* Debug Name;
    class UBoxComponent* Vanish Box;
    class UBP_WallJumpBoundingBoxComponent_C* BP_WallJumpBoundingBoxComponent;
    class UStaticMeshComponent* SM_PurpleMist_07_A_1;
    class UChildActorComponent* BP_Cutable_Bamboos;
    FVector Timeline_0_NewTrack_0_996018994AB32AD33CCB1B9020C214E9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_996018994AB32AD33CCB1B9020C214E9;
    class UTimelineComponent* Timeline_0;
    int32 Phase;
    int32 Debug ID;

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
};

#endif
