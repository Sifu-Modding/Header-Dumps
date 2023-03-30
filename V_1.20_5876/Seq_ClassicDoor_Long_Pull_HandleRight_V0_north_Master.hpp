#ifndef UE4SS_SDK_Seq_ClassicDoor_Long_Pull_HandleRight_V0_north_Master_HPP
#define UE4SS_SDK_Seq_ClassicDoor_Long_Pull_HandleRight_V0_north_Master_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void EnableInputs();
    void CamBlendout();
    void FrameOne();
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x108

#endif
