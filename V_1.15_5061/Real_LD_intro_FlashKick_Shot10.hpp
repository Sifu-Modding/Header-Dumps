#ifndef UE4SS_SDK_Real_LD_intro_FlashKick_Shot10_HPP
#define UE4SS_SDK_Real_LD_intro_FlashKick_Shot10_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_FlashKick_Base_C* Character_1);
    void EnablePerception(class ABP_FlashKick_Base_C* Character_1);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
