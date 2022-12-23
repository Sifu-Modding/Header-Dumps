#ifndef UE4SS_SDK_BPFL_LevelSelect_HPP
#define UE4SS_SDK_BPFL_LevelSelect_HPP

class UBPFL_LevelSelect_C : public UBlueprintFunctionLibrary
{

    void GetLevelSelectMaterialsSoftRef(class UObject* __WorldContext, TArray<TSoftObjectPtr<UMaterialInterface>>& MaterialArray, bool& bIs21_9);
    void GetLevelSelectBossTags(class USCAbilitySystemComponent* AbilityComponent, class UObject* __WorldContext, TArray<TEnumAsByte<EBossTag>>& eBossTags);
};

#endif
