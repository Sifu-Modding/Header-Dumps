#ifndef UE4SS_SDK_BPAttackComponent_HPP
#define UE4SS_SDK_BPAttackComponent_HPP

class UBPAttackComponent_C : public UAttackComponent
{
    class UTimelineComponent* timetest;

    void GetOwnerAsFightingCharacter(class AFightingCharacter*& FightingCharacter);
};

#endif
