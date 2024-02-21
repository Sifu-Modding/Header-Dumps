#ifndef UE4SS_SDK_TakedownDefenderSnap_HPP
#define UE4SS_SDK_TakedownDefenderSnap_HPP

class UTakedownDefenderSnap_C : public USnapOrderService
{

    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
}; // Size: 0xC0

#endif
