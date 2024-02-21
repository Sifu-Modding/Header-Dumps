#ifndef UE4SS_SDK_BPDodgeTypeAISelection_Base_HPP
#define UE4SS_SDK_BPDodgeTypeAISelection_Base_HPP

class UBPDodgeTypeAISelection_Base_C : public UDodgeTypeUseCaseMatrix
{

    EDodgeDirectionType BPE_GetDodgeToUseFromHitbox(const FHitBox& _hitbox, const class UArchetypeAsset* _archetype);
}; // Size: 0x28

#endif
