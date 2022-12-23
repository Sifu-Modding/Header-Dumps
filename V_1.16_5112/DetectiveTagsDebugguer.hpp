#ifndef UE4SS_SDK_DetectiveTagsDebugguer_HPP
#define UE4SS_SDK_DetectiveTagsDebugguer_HPP

class UDetectiveTagsDebugguer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* GameplayTagContainerTextBlock;
    FString CachedString;
    TArray<FGameplayTag> NewVar_0;

    void RefreshCachedString();
    void Construct();
    void OnTagsChanged(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void ExecuteUbergraph_DetectiveTagsDebugguer(int32 EntryPoint);
};

#endif
