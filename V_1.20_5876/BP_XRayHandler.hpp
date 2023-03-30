#ifndef UE4SS_SDK_BP_XRayHandler_HPP
#define UE4SS_SDK_BP_XRayHandler_HPP

class IBP_XRayHandler_C : public IInterface
{

    void PushXRayWanted();
    void PushXRayBlocker();
    void PopXRayWanted();
    void PopXRayBlocker();
}; // Size: 0x28

#endif
