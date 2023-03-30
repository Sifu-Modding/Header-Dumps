#ifndef UE4SS_SDK_BP_PhysicalBreakableWithNavModifier_HPP
#define UE4SS_SDK_BP_PhysicalBreakableWithNavModifier_HPP

class ABP_PhysicalBreakableWithNavModifier_C : public ABP_PhysicalBreakable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class USCNavModifierComponent* SCNavModifier;                                     // 0x0570 (size: 0x8)
    FVector InitDestructibleLocation;                                                 // 0x0578 (size: 0xC)
    float DistBeforeDeactivateNavModifier;                                            // 0x0584 (size: 0x4)

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void DeactivateNavModifier();
    void ExecuteUbergraph_BP_PhysicalBreakableWithNavModifier(int32 EntryPoint);
}; // Size: 0x588

#endif
