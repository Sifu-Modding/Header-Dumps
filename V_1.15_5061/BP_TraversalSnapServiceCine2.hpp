#ifndef UE4SS_SDK_BP_TraversalSnapServiceCine2_HPP
#define UE4SS_SDK_BP_TraversalSnapServiceCine2_HPP

class UBP_TraversalSnapServiceCine2_C : public USnapOrderService
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<TraversalCine_AnchorEnum> Anchor;

    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
    void ExecuteUbergraph_BP_TraversalSnapServiceCine2(int32 EntryPoint);
};

#endif
