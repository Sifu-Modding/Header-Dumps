#ifndef UE4SS_SDK_BPWeapon_MakeShiftOneHandedFamilly_HPP
#define UE4SS_SDK_BPWeapon_MakeShiftOneHandedFamilly_HPP

class ABPWeapon_MakeShiftOneHandedFamilly_C : public ABPWeapon_C
{
    class UBillboardComponent* Billboard;

    InputAction BPE_FindAppropriateActionFromContext(class AFightingCharacter* _user);
    FText BPE_GetHUDActionText(bool& _bUsable);
};

#endif
