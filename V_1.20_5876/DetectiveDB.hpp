#ifndef UE4SS_SDK_DetectiveDB_HPP
#define UE4SS_SDK_DetectiveDB_HPP

class UDetectiveDB_C : public UObject
{
    TMap<class FGameplayTag, class FDetectiveBoardEntry> Entries;                     // 0x0028 (size: 0x50)
    TMap<class FGameplayTag, class TSoftObjectPtr<UTexture2D>> Icons;                 // 0x0078 (size: 0x50)
    TMap<class FGameplayTag, class FDetectiveBoardItemDescription> Items;             // 0x00C8 (size: 0x50)
    TMap<class FGameplayTag, class FGameplayTag> ItemTagPerDetectiveTag;              // 0x0118 (size: 0x50)

}; // Size: 0x168

#endif
