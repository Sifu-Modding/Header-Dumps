#ifndef UE4SS_SDK_BP_DisableXRayOrderService_HPP
#define UE4SS_SDK_BP_DisableXRayOrderService_HPP

class UBP_DisableXRayOrderService_C : public UBlueprintOrderService
{

    void BPE_OnStop(const FBPOrderServiceInstance& _instance, bool _bInterrupted);
    void BPE_OnStart(const FBPOrderServiceInstance& _instance);
};

#endif
