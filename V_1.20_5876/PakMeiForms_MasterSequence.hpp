#ifndef UE4SS_SDK_PakMeiForms_MasterSequence_HPP
#define UE4SS_SDK_PakMeiForms_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void BlendToPlayerView();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x108

#endif
