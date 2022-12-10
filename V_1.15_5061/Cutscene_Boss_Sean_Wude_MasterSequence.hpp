#ifndef UE4SS_SDK_Cutscene_Boss_Sean_Wude_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Sean_Wude_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TeleportDummyActor;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void SequenceEvent_SetStateMusic();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
