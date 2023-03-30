#ifndef UE4SS_SDK_BP_TargetableDummy_HPP
#define UE4SS_SDK_BP_TargetableDummy_HPP

class ABP_TargetableDummy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UBP_TargettableObjectComponent_C* BP_TargettableObjectComponent;            // 0x02B8 (size: 0x8)
    class UTargetableComponent* Targetable;                                           // 0x02C0 (size: 0x8)
    class UHitComponent* Hit;                                                         // 0x02C8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x02D0 (size: 0x8)
    class UCapsuleComponent* HitCapsule;                                              // 0x02D8 (size: 0x8)
    class USceneComponent* HitRefPosition;                                            // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    class UCapsuleComponent* Collision;                                               // 0x02F0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F8 (size: 0x8)
    EAttackPowers AttackPower;                                                        // 0x0300 (size: 0x1)
    FVector HitLocation;                                                              // 0x0304 (size: 0xC)
    FVector HitDirection;                                                             // 0x0310 (size: 0xC)
    class UAkAudioEvent* EventToPost;                                                 // 0x0320 (size: 0x8)
    class ABaseWeapon* Weapon;                                                        // 0x0328 (size: 0x8)

    bool CanBeHitted(class AActor* _Instigator);
    EFactionsEnums GetFaction();
    bool IsValidTarget(const class AActor* _targeter);
    void HitEvent(FHitDescription HitDescription, float& FreezeDuration);
    void HittedFeedbacks(EAttackPowers AttackPower, FVector ImpactPosition, FVector ImpactForce, bool IsWeaponHit);
    void BndEvt__Hit_K2Node_ComponentBoundEvent_0_HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void ExecuteUbergraph_BP_TargetableDummy(int32 EntryPoint);
}; // Size: 0x330

#endif
