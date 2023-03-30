#ifndef UE4SS_SDK_BP_AnimDrivenCameraBTService_HPP
#define UE4SS_SDK_BP_AnimDrivenCameraBTService_HPP

class UBP_AnimDrivenCameraBTService_C : public UAnimDrivenCameraOrderBTService
{
    class UAbstractCameraData* CameraData;                                            // 0x0088 (size: 0x8)

    class UAbstractCameraData* GetCameraData();
}; // Size: 0x90

#endif
