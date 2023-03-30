#ifndef UE4SS_SDK_BPAttackComponent_HPP
#define UE4SS_SDK_BPAttackComponent_HPP

class UBPAttackComponent_C : public UAttackComponent
{
    class UTimelineComponent* timetest;                                               // 0x0C80 (size: 0x8)

    void GetOwnerAsFightingCharacter(class AFightingCharacter*& FightingCharacter);
}; // Size: 0xC88

#endif
