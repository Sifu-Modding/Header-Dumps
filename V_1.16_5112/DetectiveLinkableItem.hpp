#ifndef UE4SS_SDK_DetectiveLinkableItem_HPP
#define UE4SS_SDK_DetectiveLinkableItem_HPP

class UDetectiveLinkableItem_C : public USCUserWidget
{
    FText Title;
    FGameplayTag Tag;
    TArray<FDetectiveBoardEntry> Entries;
    bool Linked;
    DetectiveBoardItemState CurrentState;

    void UpdateState();
    void UpdateReveal(class UAbilitySystemComponent* bpp__InComponent__pf);
    void UpdateDetectiveState();
    void SetOriginLinkEntryID(FGameplayTag bpp__EntryID__pf);
    void IsPin(bool& bpp__bIsPin__pf);
    bool IsEntryCompleted(FGameplayTag bpp__GameplayTag__pf, class UAbilitySystemComponent* bpp__InAbilityComp__pf);
};

#endif
