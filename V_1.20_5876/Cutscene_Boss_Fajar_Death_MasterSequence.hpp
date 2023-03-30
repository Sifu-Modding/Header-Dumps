#ifndef UE4SS_SDK_Cutscene_Boss_Fajar_Death_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Boss_Fajar_Death_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)
    class AActor* TeleportDummyActor;                                                 // 0x0108 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void SequenceEvent_SetStateMusic();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x110

#endif
