#ifndef UE4SS_SDK_BP_Weapon_ShiroizuDagger_HPP
#define UE4SS_SDK_BP_Weapon_ShiroizuDagger_HPP

class ABP_Weapon_ShiroizuDagger_C : public ABPWeapon_MakeShiftOneHandedFamilly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0908 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x0910 (size: 0x8)

    void Stop highlight(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void OnThrowableStateUpdated(EThrowableState _eNewState);
    void BPE_OnThrown();
    void ExecuteUbergraph_BP_Weapon_ShiroizuDagger(int32 EntryPoint);
}; // Size: 0x918

#endif
