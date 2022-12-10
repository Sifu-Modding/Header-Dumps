#ifndef UE4SS_SDK_Seq_HeavyDoor_Long_Push_V0_MC_Master_HPP
#define UE4SS_SDK_Seq_HeavyDoor_Long_Push_V0_MC_Master_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void EnableInputs();
    void CamBlendout();
    void FrameOne();
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
