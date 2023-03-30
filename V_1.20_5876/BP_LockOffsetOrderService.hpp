#ifndef UE4SS_SDK_BP_LockOffsetOrderService_HPP
#define UE4SS_SDK_BP_LockOffsetOrderService_HPP

class UBP_LockOffsetOrderService_C : public UBlueprintOrderService
{
    FVector Offset;                                                                   // 0x0028 (size: 0xC)

    void BPE_OnStop(const FBPOrderServiceInstance& _instance, bool _bInterrupted);
    void BPE_OnStart(const FBPOrderServiceInstance& _instance);
}; // Size: 0x34

#endif
