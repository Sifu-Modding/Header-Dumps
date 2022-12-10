#ifndef UE4SS_SDK_BP_VariableWeightInfoCacher_Interface_HPP
#define UE4SS_SDK_BP_VariableWeightInfoCacher_Interface_HPP

class IBP_VariableWeightInfoCacher_Interface_C : public IInterface
{

    void InvalidateAllVariableWeightInfo();
    void UpdateVariableWeightInfoBySpeedState(ESpeedState InSpeedState);
    void UpdateAllInvalidatedVariableWeightInfo();
    void SetBlendProfileBySpeedState(ESpeedState InSpeedState, TEnumAsByte<VariableWeightLayers> InViriableWeightLayer, EMoveStatus InMoveStatus, class UBlendProfile* InBlendProfile, bool bImmediateUpdate);
};

#endif
