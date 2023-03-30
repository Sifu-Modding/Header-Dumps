#ifndef UE4SS_SDK_BP_TwoHandedWeaponFamily_HPP
#define UE4SS_SDK_BP_TwoHandedWeaponFamily_HPP

class ABP_TwoHandedWeaponFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)

    void BPE_OverrideBounceType(const class AActor* _Instigator, const class AActor* _target);
    void ExecuteUbergraph_BP_TwoHandedWeaponFamily(int32 EntryPoint);
}; // Size: 0x908

#endif
