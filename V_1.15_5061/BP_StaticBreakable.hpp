#ifndef UE4SS_SDK_BP_StaticBreakable_HPP
#define UE4SS_SDK_BP_StaticBreakable_HPP

class ABP_StaticBreakable_C : public ABP_BaseBreakable_C
{
    class USCNavModifierComponent* SCNavModifier;
    class UBoxComponent* Box_Trigger;
    class UReplayableStaticObjectComponent* ReplayableStaticObject;
    TEnumAsByte<AKE_StaticBreakable_Switch> AKE_StaticBreakable_Switch;

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    float BPE_GetRTPCValue();
};

#endif
