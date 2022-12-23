#ifndef UE4SS_SDK_BP_CheckCurrency_Retro_HPP
#define UE4SS_SDK_BP_CheckCurrency_Retro_HPP

class UBP_CheckCurrency_Retro_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<FGameplayTag, int32> CheatsCost;
    int32 iPaidCheats;
    int32 iMustHaveCurrencyTotal;
    int32 iCurrentCurrencyTotal;
    int32 tmp;
    FGameplayTagContainer AchievementTagsChecked;

    void BPE_Init();
    void m_OnAchievementsInit_Event();
    void BPE_Shutdown();
    void ExecuteUbergraph_BP_CheckCurrency_Retro(int32 EntryPoint);
};

#endif
