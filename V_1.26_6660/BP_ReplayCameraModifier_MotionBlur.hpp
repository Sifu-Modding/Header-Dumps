#ifndef UE4SS_SDK_BP_ReplayCameraModifier_MotionBlur_HPP
#define UE4SS_SDK_BP_ReplayCameraModifier_MotionBlur_HPP

class UBP_ReplayCameraModifier_MotionBlur_C : public UCameraModifier
{

    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
}; // Size: 0x48

#endif
