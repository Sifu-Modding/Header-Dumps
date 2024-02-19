#ifndef UE4SS_SDK_CancelAllLookAt_HPP
#define UE4SS_SDK_CancelAllLookAt_HPP

class UCancelAllLookAt_C : public UCameraTransitionEvent
{

    void ReceiveLaunchEvent(class UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fBlendRatio);
}; // Size: 0x28

#endif
