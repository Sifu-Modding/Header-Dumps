#ifndef UE4SS_SDK_BP_TraversalClimb_3m50_HPP
#define UE4SS_SDK_BP_TraversalClimb_3m50_HPP

class ABP_TraversalClimb_3m50_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTraversalComponent* Traversal;
    class UStaticMeshComponent* Plane;
    class UBoxComponent* TriggerFeedbackDecals;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__TriggerFeedbackDecals_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerFeedbackDecals_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_TraversalClimb_3m50(int32 EntryPoint);
};

#endif
