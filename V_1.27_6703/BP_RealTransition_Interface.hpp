#ifndef UE4SS_SDK_BP_RealTransition_Interface_HPP
#define UE4SS_SDK_BP_RealTransition_Interface_HPP

class IBP_RealTransition_Interface_C : public IInterface
{

    void StartFadeIn(float bpp__Duration__pf, float bpp__EnableInputTimeRatio__pf);
    void SetupRealTransitionMID(class UMaterialInstanceDynamic* bpp__MID__pf, bool bpp__KeepWeight__pf);
    void SetupCustomExposure(bool bpp__NewValue__pf, float bpp__ExposureMultiplier__pf);
    void SetPostProcessEnable(bool bpp__bIsEnabled__pf);
    void SetExposure(float bpp__NewExposure__pf);
    void SetAKEvent(class UAkAudioEvent* bpp__Event__pf, class UAkComponent* bpp__Ak__pf);
    void EnablePostProcess();
    void DisablePostProcess();
    void DisableExposure();
}; // Size: 0x28

#endif
