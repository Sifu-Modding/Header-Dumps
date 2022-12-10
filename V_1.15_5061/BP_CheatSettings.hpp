#ifndef UE4SS_SDK_BP_CheatSettings_HPP
#define UE4SS_SDK_BP_CheatSettings_HPP

class UBP_CheatSettings_C : public USCCheatManagerSettings
{
    TMap<class FGameplayTag, class FModifiersCheatsStruct> CheatsInfo;
    FString sTest;
    TMap<FGameplayTag, TEnumAsByte<CheatType>> EasyCheatType;
    TMap<FGameplayTag, TEnumAsByte<CheatType>> NormalCheatType;
    TMap<FGameplayTag, TEnumAsByte<CheatType>> HardCheatType;

    void GetCheatInfo(FGameplayTag CheatTag, FText& CheatTitle, FText& CheatDescription, FText& CheatValue);
    void GetCheatType(FGameplayTag CheatToEvaluate, TEnumAsByte<CheatType>& eCheatType);
};

#endif
