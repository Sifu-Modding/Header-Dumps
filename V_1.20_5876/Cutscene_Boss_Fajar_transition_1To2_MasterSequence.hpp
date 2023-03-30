#ifndef UE4SS_SDK_Cutscene_Boss_Fajar_transition_1To2_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Fajar_transition_1To2_MasterSequence_HPP

class USequenceDirector_C : public UAIPhaseTransitionSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)
    class AActor* TeleportDummyActor;                                                 // 0x0108 (size: 0x8)
    class ABP_Weapon_Machete_C* Weapon01;                                             // 0x0110 (size: 0x8)
    class ABP_Weapon_Machete_C* Weapon02;                                             // 0x0118 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_6();
    void SequenceEvent__ENTRYPOINTSequenceDirector_5();
    void SequenceEvent__ENTRYPOINTSequenceDirector_4();
    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Teleport Shot 2 Test();
    void LvlTransition();
    void Switch LA();
    void Switch Phase();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void Teleport();
    void ToPlayerViewAndEquipWeapons();
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
    void SequenceEvent_Trigg_Phase2_Music();
    void SequenceEvent_Trigg_MusicTransition();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x120

#endif
