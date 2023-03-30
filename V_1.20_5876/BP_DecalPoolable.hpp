#ifndef UE4SS_SDK_BP_DecalPoolable_HPP
#define UE4SS_SDK_BP_DecalPoolable_HPP

class ABP_DecalPoolable_C : public ASCDecalActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    float Timeline_0_NewTrack_0_7A39C6BD4E4F7493250745B3ADA19882;                     // 0x02D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7A39C6BD4E4F7493250745B3ADA19882; // 0x02DC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Fade Out();
    void ExecuteUbergraph_BP_DecalPoolable(int32 EntryPoint);
}; // Size: 0x2E8

#endif
