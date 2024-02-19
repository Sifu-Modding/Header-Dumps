#ifndef UE4SS_SDK_DetectiveTagsDebugguer_HPP
#define UE4SS_SDK_DetectiveTagsDebugguer_HPP

class UDetectiveTagsDebugguer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UTextBlock* GameplayTagContainerTextBlock;                                  // 0x0270 (size: 0x8)
    FString CachedString;                                                             // 0x0278 (size: 0x10)
    TArray<FGameplayTag> NewVar_0;                                                    // 0x0288 (size: 0x10)

    void RefreshCachedString();
    void Construct();
    void OnTagsChanged(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void ExecuteUbergraph_DetectiveTagsDebugguer(int32 EntryPoint);
}; // Size: 0x298

#endif
