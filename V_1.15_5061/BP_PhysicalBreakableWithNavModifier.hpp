#ifndef UE4SS_SDK_BP_PhysicalBreakableWithNavModifier_HPP
#define UE4SS_SDK_BP_PhysicalBreakableWithNavModifier_HPP

class ABP_PhysicalBreakableWithNavModifier_C : public ABP_PhysicalBreakable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCNavModifierComponent* SCNavModifier;
    FVector InitDestructibleLocation;
    float DistBeforeDeactivateNavModifier;

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void DeactivateNavModifier();
    void ExecuteUbergraph_BP_PhysicalBreakableWithNavModifier(int32 EntryPoint);
};

#endif
