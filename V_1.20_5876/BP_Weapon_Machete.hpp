#ifndef UE4SS_SDK_BP_Weapon_Machete_HPP
#define UE4SS_SDK_BP_Weapon_Machete_HPP

class ABP_Weapon_Machete_C : public ABPWeapon_BladesFamily_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0908 (size: 0x8)

    void ReceiveActorOnInputTouchBegin(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    void AnimNotify_StartToAttack();
    void AnimNotify_StartToAttack2();
    void ExecuteUbergraph_BP_Weapon_Machete(int32 EntryPoint);
}; // Size: 0x910

#endif
