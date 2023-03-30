#ifndef UE4SS_SDK_Cutscene_Boss_Fajar_Death_Shot10_HPP
#define UE4SS_SDK_Cutscene_Boss_Fajar_Death_Shot10_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_FightingPlayer_C* Character_0);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_FightingPlayer_C* Character_0);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_FightingPlayer_C* Character_0);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_FightingPlayer_C* Character_0);
    void RemoveRightHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void AddRightHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void RemoveLeftHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void AddLeftHandEffectorOffset(class ABP_FightingPlayer_C* Character_0);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
