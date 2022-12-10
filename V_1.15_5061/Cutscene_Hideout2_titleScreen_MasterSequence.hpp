#ifndef UE4SS_SDK_Cutscene_Hideout2_titleScreen_MasterSequence_HPP
#define UE4SS_SDK_Cutscene_Hideout2_titleScreen_MasterSequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void BlendToSequenceView();
    void BlendToPlayerView();
    void FrameOne();
    void SequenceEvent_0();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
