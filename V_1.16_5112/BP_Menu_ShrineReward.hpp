#ifndef UE4SS_SDK_BP_Menu_ShrineReward_HPP
#define UE4SS_SDK_BP_Menu_ShrineReward_HPP

class UBP_Menu_ShrineReward_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StampAnim;
    class UBP_Btn_Input_C* BP_InputIcon;
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint;
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_1;
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_2;
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_3;
    class UTextBlock* CostText;
    class UOverlay* DetailsBox;
    class UPerPlatformImage* Icon_Infinite;
    class USizeBox* IconBox;
    class UHorizontalBox* PointsBox;
    class UWidgetSwitcher* PointSwitcher;
    class UTextBlock* RewardDescription;
    class UImage* RewardFrame;
    class UAsyncImage* RewardIcon;
    class UTextBlock* RewardTitle;
    class UImage* StrokeAge;
    FBP_Menu_ShrineReward_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(TSubclassOf<class UGameplayEffect> InReward);
    class UStatsComponent* REF_StatsComponent;
    TSubclassOf<class UGameplayEffect> RewardClass;
    FSlateColor BaseTint;
    FShrineRewardStruct ShrineReward (Normal);
    bool MaxLevelReached;
    class UShrineWidgetData_C* Shrine Widget Data;
    bool Active;
    bool RefillFocus;
    FShrineRewardStruct ShrineReward (Easy);
    FShrineRewardStruct ShrineReward (Hard);
    bool PerDifficultyReward;
    bool IsInDarkMode;

    void SequenceEvent__ENTRYPOINTBP_Menu_ShrineReward_0();
    void OnRewardChosen();
    void SetIsInDarkMode(bool DarkMode);
    void Get Shrine Reward Internal(FShrineRewardStruct& Reward);
    void SetStyle();
    void IsUnlockable(bool& Result);
    void ValidateReward();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void ComputeRewardClass(FShrineRewardStruct InReward, TSubclassOf<class UGameplayEffect>& Output, int32& RewardLevel);
    void UpdateReward(bool bForceEnabled);
    void UpdateSelected(bool LocalSelect);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnDataUpdated();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Menu_ShrineReward(int32 EntryPoint);
    void OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
};

#endif
