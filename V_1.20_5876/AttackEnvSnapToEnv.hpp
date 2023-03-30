#ifndef UE4SS_SDK_AttackEnvSnapToEnv_HPP
#define UE4SS_SDK_AttackEnvSnapToEnv_HPP

class UAttackEnvSnapToEnv_C : public USnapOrderService
{

    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
}; // Size: 0xC0

#endif
