#ifndef UE4SS_SDK_FlashkickJumpHD2_Sequence_HPP
#define UE4SS_SDK_FlashkickJumpHD2_Sequence_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Frame1();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
