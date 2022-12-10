#ifndef UE4SS_SDK_BP_InteractiveSurface_interface_HPP
#define UE4SS_SDK_BP_InteractiveSurface_interface_HPP

class IBP_InteractiveSurface_interface_C : public IInterface
{

    void DebugCapsules(const float Duration);
    void GetCapsules(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, TArray<float>& Radius);
};

#endif
