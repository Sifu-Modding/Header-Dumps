#ifndef UE4SS_SDK_BP_HideWeaponOrderService_HPP
#define UE4SS_SDK_BP_HideWeaponOrderService_HPP

class UBP_HideWeaponOrderService_C : public UBlueprintOrderService
{

    void BPE_OnStop(const FBPOrderServiceInstance& _instance, bool _bInterrupted);
    void BPE_OnStart(const FBPOrderServiceInstance& _instance);
}; // Size: 0x28

#endif
