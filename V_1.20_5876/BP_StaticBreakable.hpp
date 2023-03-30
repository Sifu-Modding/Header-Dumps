#ifndef UE4SS_SDK_BP_StaticBreakable_HPP
#define UE4SS_SDK_BP_StaticBreakable_HPP

class ABP_StaticBreakable_C : public ABP_BaseBreakable_C
{
    class USCNavModifierComponent* SCNavModifier;                                     // 0x0550 (size: 0x8)
    class UBoxComponent* Box_Trigger;                                                 // 0x0558 (size: 0x8)
    class UReplayableStaticObjectComponent* ReplayableStaticObject;                   // 0x0560 (size: 0x8)
    TEnumAsByte<AKE_StaticBreakable_Switch> AKE_StaticBreakable_Switch;               // 0x0568 (size: 0x1)

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    float BPE_GetRTPCValue();
}; // Size: 0x569

#endif
