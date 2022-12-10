#ifndef UE4SS_SDK_DetectiveDB_HPP
#define UE4SS_SDK_DetectiveDB_HPP

class UDetectiveDB_C : public UObject
{
    TMap<class FGameplayTag, class FDetectiveBoardEntry> Entries;
    TMap<class FGameplayTag, class TSoftObjectPtr<UTexture2D>> Icons;
    TMap<class FGameplayTag, class FDetectiveBoardItemDescription> Items;
    TMap<class FGameplayTag, class FGameplayTag> ItemTagPerDetectiveTag;

};

#endif
