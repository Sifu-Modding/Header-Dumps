#ifndef UE4SS_SDK_BossIntroduction_HPP
#define UE4SS_SDK_BossIntroduction_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void RemoveBossModels();
    void PlayAnimation();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
