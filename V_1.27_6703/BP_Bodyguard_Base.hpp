#ifndef UE4SS_SDK_BP_Bodyguard_Base_HPP
#define UE4SS_SDK_BP_Bodyguard_Base_HPP

class ABP_Bodyguard_Base_C : public ABP_AICharacter_Base_C
{
    FArchetypeTakedownAnims takedownOverride;                                         // 0x1FF0 (size: 0x88)

    void GetOverridingTakedowns(FArchetypeTakedownAnims& OverridingTakedown);
}; // Size: 0x2078

#endif
