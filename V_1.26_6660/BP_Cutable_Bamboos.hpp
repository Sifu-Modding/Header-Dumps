#ifndef UE4SS_SDK_BP_Cutable_Bamboos_HPP
#define UE4SS_SDK_BP_Cutable_Bamboos_HPP

class ABP_Cutable_Bamboos_C : public ADestructibleActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D8 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;           // 0x02E0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* SM_BambooBase_Traversal;                              // 0x02F0 (size: 0x8)
    bool GD Spawn ;                                                                   // 0x02F8 (size: 0x1)
    float Time Between regrowth;                                                      // 0x02FC (size: 0x4)
    bool BambooHit;                                                                   // 0x0300 (size: 0x1)
    FBP_Cutable_Bamboos_CSetTraversalActive SetTraversalActive;                       // 0x0308 (size: 0x10)
    void SetTraversalActive();
    FBP_Cutable_Bamboos_CSetTraversalInactive SetTraversalInactive;                   // 0x0318 (size: 0x10)
    void SetTraversalInactive();
    float TargetRange;                                                                // 0x0328 (size: 0x4)

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
}; // Size: 0x32C

#endif
