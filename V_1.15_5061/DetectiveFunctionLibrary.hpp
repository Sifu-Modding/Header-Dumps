#ifndef UE4SS_SDK_DetectiveFunctionLibrary_HPP
#define UE4SS_SDK_DetectiveFunctionLibrary_HPP

class UDetectiveFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void UpdateSpecificItemLines(class UDetectiveLinkableItem_C* bpp__DetectiveBoardItem__pf, bool bpp__bOnlyOnVisible__pf, bool bpp__bUpdateLinked__pf, const TArray<class UDetectiveLinkableItem_C*>& bpp__InItemList__pf__const, class UAbilitySystemComponent* bpp__InAbilityComponent__pf, class UUserWidget* bpp__InLinesWidget__pf, bool bpp__InEditor__pf, class UObject* bpp____WorldContext__pf);
    void UpdateDetectiveItemLines(bool bpp__bEditor__pf, bool bpp__bUpdateLinked__pf, class UUserWidget* bpp__InLinesWidget__pf, class UAbilitySystemComponent* bpp__InAbilityComponent__pf, TArray<class UDetectiveLinkableItem_C*>& bpp__InItemList__pf, class UObject* bpp____WorldContext__pf);
    void IsDetectiveEntryCompleted(FDetectiveBoardEntry bpp__InEntry__pf, class UAbilitySystemComponent* bpp__InAbilityComp__pf, class UObject* bpp____WorldContext__pf, bool& bpp__bOutResult__pf);
    float GetDetectiveItemUnlockedPercent(class UAbilitySystemComponent* bpp__InAbilityComp__pf, FGameplayTag bpp__InParentTag__pf, class UObject* bpp____WorldContext__pf, int32& bpp__UnlockedItem__pf, int32& bpp__TotalItem__pf);
    float GetDetectiveEntryUnlockedPercent(class UAbilitySystemComponent* bpp__InAbilityComp__pf, FGameplayTag bpp__InParentTag__pf, DetectiveEntryTypes bpp__InEntryType__pf, class UObject* bpp____WorldContext__pf, int32& bpp__UnlockedItem__pf, int32& bpp__TotalItem__pf);
    void Add Boss Gameplay Tag to Detective Board(class ABaseCharacter* bpp__InBossCharacter__pf, FGameplayTag bpp__KilledGameplayTag__pf, FGameplayTag bpp__AbandonningGameplayTag__pf, class UObject* bpp____WorldContext__pf);
};

#endif
