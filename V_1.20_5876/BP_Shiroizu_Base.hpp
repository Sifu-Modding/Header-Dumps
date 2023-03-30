#ifndef UE4SS_SDK_BP_Shiroizu_Base_HPP
#define UE4SS_SDK_BP_Shiroizu_Base_HPP

class ABP_Shiroizu_Base_C : public ABP_AICharacter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1ED8 (size: 0x8)
    class USkeletalMeshComponent* Daggers_Shiroizu_R;                                 // 0x1EE0 (size: 0x8)
    class USkeletalMeshComponent* Daggers_Shiroizu_L;                                 // 0x1EE8 (size: 0x8)
    TEnumAsByte<AKE_WeaponName_Switch> Audio_ShiroizuFakeWeapon;                      // 0x1EF0 (size: 0x1)

    void GetAkWeaponNameSwitch(TEnumAsByte<AKE_WeaponName_Switch>& Name);
    void GetWeaponType(TEnumAsByte<EWeaponType>& WeaponType);
    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void UpdateDurabilityRTPC();
    void SendOptionValueAndTriggerUpdate(bool bIsHighContrast);
    void ReceiveBeginPlay();
    void BndEvt__AIFighting_K2Node_ComponentBoundEvent_0_OnAIPhaseChangedDynamic__DelegateSignature(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void ExecuteUbergraph_BP_Shiroizu_Base(int32 EntryPoint);
}; // Size: 0x1EF1

#endif
