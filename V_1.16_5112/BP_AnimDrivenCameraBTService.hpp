#ifndef UE4SS_SDK_BP_AnimDrivenCameraBTService_HPP
#define UE4SS_SDK_BP_AnimDrivenCameraBTService_HPP

class UBP_AnimDrivenCameraBTService_C : public UAnimDrivenCameraOrderBTService
{
    class UAbstractCameraData* CameraData;

    class UAbstractCameraData* GetCameraData();
};

#endif
