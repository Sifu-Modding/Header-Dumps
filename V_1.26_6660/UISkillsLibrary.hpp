#ifndef UE4SS_SDK_UISkillsLibrary_HPP
#define UE4SS_SDK_UISkillsLibrary_HPP

class UUISkillsLibrary_C : public UBlueprintFunctionLibrary
{

    void Get Pendant Count(class UStatsComponent* Target, bool AfterNextDeath, class UObject* __WorldContext, int32& Count);
    void Get Pendant Count Per Age(int32 A, class UObject* __WorldContext, int32& Count);
    void GetSkill(TSubclassOf<class USkillGameplayEffect> Skill, class UObject* __WorldContext);
    void GetSkillUIData(TSubclassOf<class USkillGameplayEffect> Skill, class UObject* __WorldContext, class USkillUIData_C*& UIData);
}; // Size: 0x28

#endif
