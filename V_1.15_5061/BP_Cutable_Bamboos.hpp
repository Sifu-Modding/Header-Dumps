#ifndef UE4SS_SDK_BP_Cutable_Bamboos_HPP
#define UE4SS_SDK_BP_Cutable_Bamboos_HPP

class ABP_Cutable_Bamboos_C : public ADestructibleActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* SM_BambooBase_Traversal;
    bool GD Spawn ;
    float Time Between regrowth;
    bool BambooHit;
    FBP_Cutable_Bamboos_CSetTraversalActive SetTraversalActive;
    void SetTraversalActive();
    FBP_Cutable_Bamboos_CSetTraversalInactive SetTraversalInactive;
    void SetTraversalInactive();
    float TargetRange;

    EFactionsEnums GetFaction();
    bool IsValidTarget(const class AActor* _targeter);
    void SetHitDetectionActive(bool Active);
    void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void ReceiveBeginPlay();
    void BndEvt__BP_EnvironmentalImpactComponent_K2Node_ComponentBoundEvent_3_HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void Regrowth();
    void Faded Out, Replace();
    void ExecuteUbergraph_BP_Cutable_Bamboos(int32 EntryPoint);
    void SetTraversalInactive__DelegateSignature();
    void SetTraversalActive__DelegateSignature();
};

#endif
