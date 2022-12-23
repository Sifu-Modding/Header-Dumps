#ifndef UE4SS_SDK_ParryMatchBP_HPP
#define UE4SS_SDK_ParryMatchBP_HPP

class UParryMatchBP_C : public UParryMatch
{

    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin);
    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin);
};

#endif
