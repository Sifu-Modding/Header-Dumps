#ifndef UE4SS_SDK_Seq_ClassicDoor_Long_Pull_HandleRight_V0_north_shot10_HPP
#define UE4SS_SDK_Seq_ClassicDoor_Long_Pull_HandleRight_V0_north_shot10_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_LockableDoor_Master_C* LockableDoor);
    void DoorEvent_0(class ABP_LockableDoor_Master_C* LockableDoor, class UAkAudioEvent* AkEvent, bool IsDoorClose);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
