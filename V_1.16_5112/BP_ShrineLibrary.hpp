#ifndef UE4SS_SDK_BP_ShrineLibrary_HPP
#define UE4SS_SDK_BP_ShrineLibrary_HPP

class UBP_ShrineLibrary_C : public UBlueprintFunctionLibrary
{

    void IsShrineUsable(class UStatsComponent* StatsComponent, TEnumAsByte<ShrineTypeEnum> ShrineType, int32 ConditionValue, class UObject* __WorldContext, bool& IsUsable);
};

#endif
