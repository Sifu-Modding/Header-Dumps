#ifndef UE4SS_SDK_Real_LD_intro_FireDisciple_Shot005_HPP
#define UE4SS_SDK_Real_LD_intro_FireDisciple_Shot005_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_LockableDoor_Master_C* LockableDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_LockableDoor_Master_C* LockableDoor);
    void DoorEvent_0(class ABP_LockableDoor_Master_C* LockableDoor, class UAkAudioEvent* AkEvent, bool IsDoorClose);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
