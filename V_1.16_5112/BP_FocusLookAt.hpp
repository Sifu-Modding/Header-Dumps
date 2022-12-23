#ifndef UE4SS_SDK_BP_FocusLookAt_HPP
#define UE4SS_SDK_BP_FocusLookAt_HPP

class UBP_FocusLookAt_C : public UCTM_LookAt
{

    void GetCurrentTarget(class UCameraComponentThird* CameraComponent, class AActor*& Target);
    FVector BPE_GetPositionToLook(class UCameraComponentThird* _cameraComponent);
    bool BPE_CanLaunchLookAt(class UCameraComponentThird* _cameraComponent);
};

#endif
