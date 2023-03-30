#ifndef UE4SS_SDK_BP_Menu_Stat_HPP
#define UE4SS_SDK_BP_Menu_Stat_HPP

class UBP_Menu_Stat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UPerPlatformImage* Icon_Infinite;                                           // 0x0270 (size: 0x8)
    class UHorizontalBox* PointsBox;                                                  // 0x0278 (size: 0x8)
    class UWidgetSwitcher* Stat_Switcher;                                             // 0x0280 (size: 0x8)
    class UBorder* StatFrame;                                                         // 0x0288 (size: 0x8)
    class UAsyncImage* StatIcon;                                                      // 0x0290 (size: 0x8)
    class UPerPlatformTextBlock* StatName;                                            // 0x0298 (size: 0x8)
    FShrineRewardStruct ShrineReward;                                                 // 0x02A0 (size: 0x68)
    bool IsBlack;                                                                     // 0x0308 (size: 0x1)

    void SetIsBlack(bool IsBlack);
    void ComputeRewardClass(FShrineRewardStruct InReward, TSubclassOf<class UGameplayEffect>& Output, int32& RewardLevel);
    void UpdateStat();
    void GetStatLevel(const FShrineRewardStruct InReward, TSubclassOf<class UGameplayEffect>& StatEffect, int32& MaxLevel, int32& CurrentLevel);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_Menu_Stat(int32 EntryPoint);
}; // Size: 0x309

#endif
