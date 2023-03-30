#ifndef UE4SS_SDK_BP_PunchingBag_HPP
#define UE4SS_SDK_BP_PunchingBag_HPP

class ABP_PunchingBag_C : public ABP_TargetableDummy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint1;                            // 0x0338 (size: 0x8)
    class UStaticMeshComponent* SM_PunchingBallAttach_01_1;                           // 0x0340 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0348 (size: 0x8)
    FString AK_MaterialType;                                                          // 0x0350 (size: 0x10)
    float TargetRange;                                                                // 0x0360 (size: 0x4)
    TArray<class AActor*> Overlapped Actors;                                          // 0x0368 (size: 0x10)

    void HitEvent(FHitDescription HitDescription, float& FreezeDuration);
    bool CanBeHitted(class AActor* _Instigator);
    EFactionsEnums GetFaction();
    bool IsValidTarget(const class AActor* _targeter);
    void PhysicalHit(float FreezeDuration);
    void ExecuteUbergraph_BP_PunchingBag(int32 EntryPoint);
}; // Size: 0x378

#endif
