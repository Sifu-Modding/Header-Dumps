#ifndef UE4SS_SDK_Real_LD_Disciple_Entering_SeanRoom_Shot10_Master_HPP
#define UE4SS_SDK_Real_LD_Disciple_Entering_SeanRoom_Shot10_Master_HPP

class USequenceDirector_C : public UWGLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;

    void EnableInputs();
    void FrameOne();
    void SequenceEvent_0();
    void SequenceEvent_1(float _fTime);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
