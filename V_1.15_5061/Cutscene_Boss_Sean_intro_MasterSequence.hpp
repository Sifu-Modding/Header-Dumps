#ifndef UE4SS_SDK_Cutscene_Boss_Sean_intro_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Sean_intro_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Switch Phase();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void BlendToPlayerView();
    void SwitchPhase();
    void ForceAttackonOndCutscene();
    void LaunchMusic();
    void SetMusicToPhase1();
    void SequenceEvent_0(float _fTime);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
