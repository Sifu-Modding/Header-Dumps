#ifndef UE4SS_SDK_BackToWuguan_RedRoom_Loop_Shot20_HPP
#define UE4SS_SDK_BackToWuguan_RedRoom_Loop_Shot20_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class UHitBoxComponent* HitBox);
    void HitBox_Event_0(class UHitBoxComponent* HitBox);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
