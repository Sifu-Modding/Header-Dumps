#ifndef UE4SS_SDK_Seq_DetectiveDoor_Card_Push_HandleLeft_V0_east_shot10_HPP
#define UE4SS_SDK_Seq_DetectiveDoor_Card_Push_HandleLeft_V0_east_shot10_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_LockableDoor_Master_C* LockableDoor);
    void DoorEvent_0(class ABP_LockableDoor_Master_C* LockableDoor, class UAkAudioEvent* AkEvent, bool IsDoorClose);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
