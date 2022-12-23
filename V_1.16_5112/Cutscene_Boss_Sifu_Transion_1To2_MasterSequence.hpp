#ifndef UE4SS_SDK_Cutscene_Boss_Sifu_Transion_1To2_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Sifu_Transion_1To2_MasterSequence_HPP

class USequenceDirector_C : public UAIPhaseTransitionSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TeleportDummyActor;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Switch Phase();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void BlendToPlayerView();
    void SequenceEvent_MusicSwitchPhase2();
    void SequenceEvent_MusicSwitchP1ToP2();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
