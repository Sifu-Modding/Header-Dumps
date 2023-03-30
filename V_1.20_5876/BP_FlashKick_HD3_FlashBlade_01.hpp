#ifndef UE4SS_SDK_BP_FlashKick_HD3_FlashBlade_01_HPP
#define UE4SS_SDK_BP_FlashKick_HD3_FlashBlade_01_HPP

class ABP_FlashKick_HD3_FlashBlade_01_C : public ABP_FlashKick_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1ED8 (size: 0x8)
    TEnumAsByte<AKE_WeaponName_Switch> Audio_FlashbladeWeapon;                        // 0x1EE0 (size: 0x1)

    void GetAkWeaponNameSwitch(TEnumAsByte<AKE_WeaponName_Switch>& Name);
    void GetWeaponType(TEnumAsByte<EWeaponType>& WeaponType);
    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void UpdateDurabilityRTPC();
    void SendOptionValueAndTriggerUpdate(bool bIsHighContrast);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FlashKick_HD3_FlashBlade_01(int32 EntryPoint);
}; // Size: 0x1EE1

#endif
