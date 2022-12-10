#ifndef UE4SS_SDK_BP_Weapon_BatFamily_HPP
#define UE4SS_SDK_BP_Weapon_BatFamily_HPP

class ABP_Weapon_BatFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OverrideBounceType(const class AActor* _Instigator, const class AActor* _target);
    void ExecuteUbergraph_BP_Weapon_BatFamily(int32 EntryPoint);
};

#endif
