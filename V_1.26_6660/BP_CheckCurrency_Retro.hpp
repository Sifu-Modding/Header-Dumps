#ifndef UE4SS_SDK_BP_CheckCurrency_Retro_HPP
#define UE4SS_SDK_BP_CheckCurrency_Retro_HPP

class UBP_CheckCurrency_Retro_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TMap<FGameplayTag, int32> CheatsCost;                                             // 0x01F0 (size: 0x50)
    int32 iPaidCheats;                                                                // 0x0240 (size: 0x4)
    int32 iMustHaveCurrencyTotal;                                                     // 0x0244 (size: 0x4)
    int32 iCurrentCurrencyTotal;                                                      // 0x0248 (size: 0x4)
    int32 tmp;                                                                        // 0x024C (size: 0x4)
    FGameplayTagContainer AchievementTagsChecked;                                     // 0x0250 (size: 0x20)

    void BPE_Init();
    void m_OnAchievementsInit_Event();
    void BPE_Shutdown();
    void ExecuteUbergraph_BP_CheckCurrency_Retro(int32 EntryPoint);
}; // Size: 0x270

#endif
