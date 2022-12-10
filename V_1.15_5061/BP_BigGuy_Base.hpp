#ifndef UE4SS_SDK_BP_BigGuy_Base_HPP
#define UE4SS_SDK_BP_BigGuy_Base_HPP

class ABP_BigGuy_Base_C : public ABP_AICharacter_Base_C
{
    FArchetypeTakedownAnims takedownOverride;

    void GetOverridingTakedowns(FArchetypeTakedownAnims& OverridingTakedown);
};

#endif
