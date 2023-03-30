#ifndef UE4SS_SDK_DetectiveLinkableItem_HPP
#define UE4SS_SDK_DetectiveLinkableItem_HPP

class UDetectiveLinkableItem_C : public USCUserWidget
{
    FText Title;                                                                      // 0x0310 (size: 0x18)
    FGameplayTag Tag;                                                                 // 0x0328 (size: 0x8)
    TArray<FDetectiveBoardEntry> Entries;                                             // 0x0330 (size: 0x10)
    bool Linked;                                                                      // 0x0340 (size: 0x1)
    DetectiveBoardItemState CurrentState;                                             // 0x0341 (size: 0x1)

    void UpdateState();
    void UpdateReveal(class UAbilitySystemComponent* bpp__InComponent__pf);
    void UpdateDetectiveState();
    void SetOriginLinkEntryID(FGameplayTag bpp__EntryID__pf);
    void IsPin(bool& bpp__bIsPin__pf);
    bool IsEntryCompleted(FGameplayTag bpp__GameplayTag__pf, class UAbilitySystemComponent* bpp__InAbilityComp__pf);
}; // Size: 0x348

#endif
