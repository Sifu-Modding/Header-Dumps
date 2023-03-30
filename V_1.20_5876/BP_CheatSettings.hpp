#ifndef UE4SS_SDK_BP_CheatSettings_HPP
#define UE4SS_SDK_BP_CheatSettings_HPP

class UBP_CheatSettings_C : public USCCheatManagerSettings
{
    TMap<class FGameplayTag, class FModifiersCheatsStruct> CheatsInfo;                // 0x0078 (size: 0x50)
    FString sTest;                                                                    // 0x00C8 (size: 0x10)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> EasyCheatType;                         // 0x00D8 (size: 0x50)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> NormalCheatType;                       // 0x0128 (size: 0x50)
    TMap<FGameplayTag, TEnumAsByte<CheatType>> HardCheatType;                         // 0x0178 (size: 0x50)

    void GetCheatInfo(FGameplayTag CheatTag, FText& CheatTitle, FText& CheatDescription, FText& CheatValue, FText& Cheat Arena Description, bool& Hide in Arena);
    void GetCheatType(FGameplayTag CheatToEvaluate, TEnumAsByte<CheatType>& eCheatType);
}; // Size: 0x1C8

#endif
