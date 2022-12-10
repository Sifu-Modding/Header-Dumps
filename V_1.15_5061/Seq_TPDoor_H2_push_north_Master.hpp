#ifndef UE4SS_SDK_Seq_TPDoor_H2_push_north_Master_HPP
#define UE4SS_SDK_Seq_TPDoor_H2_push_north_Master_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TeleportActor;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Teleport();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void EnableInputs();
    void CamBlendout();
    void FrameOne();
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
