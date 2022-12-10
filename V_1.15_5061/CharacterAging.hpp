#ifndef UE4SS_SDK_CharacterAging_HPP
#define UE4SS_SDK_CharacterAging_HPP

class UCharacterAging_C : public UBlueprintFunctionLibrary
{

    void UpdateMorphTexAging(class AFightingCharacter* Character, class UObject* __WorldContext);
    void updateMorphTargets(float Age, class USkeletalMeshComponent* SkMesh, class UObject* __WorldContext);
};

#endif
