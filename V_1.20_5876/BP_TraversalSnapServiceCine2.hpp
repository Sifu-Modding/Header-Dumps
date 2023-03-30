#ifndef UE4SS_SDK_BP_TraversalSnapServiceCine2_HPP
#define UE4SS_SDK_BP_TraversalSnapServiceCine2_HPP

class UBP_TraversalSnapServiceCine2_C : public USnapOrderService
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    TEnumAsByte<TraversalCine_AnchorEnum> Anchor;                                     // 0x00C8 (size: 0x1)

    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
    void ExecuteUbergraph_BP_TraversalSnapServiceCine2(int32 EntryPoint);
}; // Size: 0xC9

#endif
