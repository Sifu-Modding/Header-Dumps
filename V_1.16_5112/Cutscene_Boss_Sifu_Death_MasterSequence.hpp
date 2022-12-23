#ifndef UE4SS_SDK_Cutscene_Boss_Sifu_Death_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Sifu_Death_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void BlendToPlayerView();
    void SequenceEvent_StopRecordingReplay();
    void SequenceEvent_SetStateMusic();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
