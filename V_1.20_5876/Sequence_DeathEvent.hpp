#ifndef UE4SS_SDK_Sequence_DeathEvent_HPP
#define UE4SS_SDK_Sequence_DeathEvent_HPP

class USequenceDirector_C : public UDeathLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)
    TArray<class AActor*> ActorLists;                                                 // 0x0108 (size: 0x10)
    class UParticleSystem* PS_DeathBurst;                                             // 0x0118 (size: 0x8)
    class UParticleSystem* PS_DeathCircle;                                            // 0x0120 (size: 0x8)
    float TimeDilation;                                                               // 0x0128 (size: 0x4)

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
}; // Size: 0x12C

#endif
