#ifndef UE4SS_SDK_BP_CheatSettings_HPP
#define UE4SS_SDK_BP_CheatSettings_HPP

class UBP_CheatSettings_C : public USCCheatManagerSettings
{
    TMap<class FGameplayTag, class FModifiersCheatsStruct> CheatsInfo;                // 0x0118 (size: 0x50)
    FString sTest;                                                                    // 0x0168 (size: 0x10)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> EasyCheatType;                         // 0x0178 (size: 0x50)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> NormalCheatType;                       // 0x01C8 (size: 0x50)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> HardCheatType;                         // 0x0218 (size: 0x50)
    FGameplayTagContainer CustomModeBannedTags;                                       // 0x0268 (size: 0x20)
    FGameplayTagContainer MainGameBannedTags;                                         // 0x0288 (size: 0x20)

    void RerollRandomCheats(bool bUnapplyCurrentCheats, bool bIsCustomMode, bool& bNeedSave);
    void GetRandomizerBanList(int32 iFilterType, bool bExcludeMovesets, bool IsCustomMode, FGameplayTagContainer& BannedCheats);
    void GetCheatInfo(FGameplayTag CheatTag, FText& CheatTitle, FText& CheatDescription, FText& CheatValue, FText& Cheat Arena Description, bool& Hide in Arena, TEnumAsByte<ECheatCategory>& CheatCategory);
    void GetCheatType(FGameplayTag CheatToEvaluate, TEnumAsByte<CheatType>& eCheatType);
}; // Size: 0x2A8

#endif
