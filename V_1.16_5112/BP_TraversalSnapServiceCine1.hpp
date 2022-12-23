#ifndef UE4SS_SDK_BP_TraversalSnapServiceCine1_HPP
#define UE4SS_SDK_BP_TraversalSnapServiceCine1_HPP

class UBP_TraversalSnapServiceCine1_C : public USnapOrderService
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<TraversalCine_AnchorEnum> Anchor;

    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
    void ExecuteUbergraph_BP_TraversalSnapServiceCine1(int32 EntryPoint);
};

#endif
