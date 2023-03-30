#ifndef UE4SS_SDK_BP_Weapon_Mop_HPP
#define UE4SS_SDK_BP_Weapon_Mop_HPP

class ABP_Weapon_Mop_C : public ABP_TwoHandedWeaponFamily_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0908 (size: 0x8)

    void BndEvt__BP_Weapon_Mop_m_DestructibleComponent_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(int32 _iNewState);
    void ExecuteUbergraph_BP_Weapon_Mop(int32 EntryPoint);
}; // Size: 0x910

#endif
