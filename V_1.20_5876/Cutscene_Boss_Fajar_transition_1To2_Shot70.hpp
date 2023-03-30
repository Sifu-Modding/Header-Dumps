#ifndef UE4SS_SDK_Cutscene_Boss_Fajar_transition_1To2_Shot70_HPP
#define UE4SS_SDK_Cutscene_Boss_Fajar_transition_1To2_Shot70_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_FightingPlayer_C* Character_0);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_FightingPlayer_C* Character_0);
    void AddRightHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void RemoveRightHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
