#ifndef UE4SS_SDK_BP_PhysicalBreakable_HPP
#define UE4SS_SDK_BP_PhysicalBreakable_HPP

class ABP_PhysicalBreakable_C : public ABP_DynamicBreakable_C
{
    class UCapsuleComponent* Capsule;
    TEnumAsByte<AKE_PhysicalBreakable_Switch> AKE_PhysicalBreakable_Switch;

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    float BPE_GetRTPCValue();
};

#endif
