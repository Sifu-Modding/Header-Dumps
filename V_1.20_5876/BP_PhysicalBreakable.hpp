#ifndef UE4SS_SDK_BP_PhysicalBreakable_HPP
#define UE4SS_SDK_BP_PhysicalBreakable_HPP

class ABP_PhysicalBreakable_C : public ABP_DynamicBreakable_C
{
    class UCapsuleComponent* Capsule;                                                 // 0x0558 (size: 0x8)
    TEnumAsByte<AKE_PhysicalBreakable_Switch> AKE_PhysicalBreakable_Switch;           // 0x0560 (size: 0x1)

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    float BPE_GetRTPCValue();
}; // Size: 0x561

#endif
