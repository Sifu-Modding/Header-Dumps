#ifndef UE4SS_SDK_Cutscene_Boss_Sean_transition_1To2_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Sean_transition_1To2_MasterSequence_HPP

class USequenceDirector_C : public UAIPhaseTransitionSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TeleportDummyActor;
    class AActor* TeleportStartDummyActor;

    void SequenceEvent__ENTRYPOINTSequenceDirector_6();
    void SequenceEvent__ENTRYPOINTSequenceDirector_5();
    void SequenceEvent__ENTRYPOINTSequenceDirector_4();
    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void TeleportStart();
    void Teleport();
    void LvlTransition();
    void Switch LA();
    void Switch Phase();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void Cut to Sequence View();
    void ToPlayerView();
    void F();
    void SequenceEvent_0();
    void SequenceEvent_1();
    void MusicSetP1toP2();
    void SequenceEvent_2();
    void MusicPhase2();
    void CorsairSetState();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
