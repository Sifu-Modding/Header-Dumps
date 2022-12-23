#ifndef UE4SS_SDK_BP_Menu_Stat_HPP
#define UE4SS_SDK_BP_Menu_Stat_HPP

class UBP_Menu_Stat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPerPlatformImage* Icon_Infinite;
    class UHorizontalBox* PointsBox;
    class UWidgetSwitcher* Stat_Switcher;
    class UBorder* StatFrame;
    class UAsyncImage* StatIcon;
    class UPerPlatformTextBlock* StatName;
    FShrineRewardStruct ShrineReward;
    bool IsBlack;

    void SetIsBlack(bool IsBlack);
    void ComputeRewardClass(FShrineRewardStruct InReward, TSubclassOf<class UGameplayEffect>& Output, int32& RewardLevel);
    void UpdateStat();
    void GetStatLevel(const FShrineRewardStruct InReward, TSubclassOf<class UGameplayEffect>& StatEffect, int32& MaxLevel, int32& CurrentLevel);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_Menu_Stat(int32 EntryPoint);
};

#endif
