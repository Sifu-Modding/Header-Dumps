#ifndef UE4SS_SDK_Sequence_DeathEvent_HPP
#define UE4SS_SDK_Sequence_DeathEvent_HPP

class USequenceDirector_C : public UDeathLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AActor*> ActorLists;
    class UParticleSystem* PS_DeathBurst;
    class UParticleSystem* PS_DeathCircle;
    float TimeDilation;
    class ACharacter* PlayerCharacter;

    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Death Flash();
    void PauseSequence();
    void OnRep_HideXP();
    void BlendToSequenceView();
    void ShowMenuPlayPendantSequence();
    void FrameOne();
    void OnMoveCamToMenuEnd();
    void StandBackUp();
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
