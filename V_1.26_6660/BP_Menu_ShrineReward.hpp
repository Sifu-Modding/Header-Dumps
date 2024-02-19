#ifndef UE4SS_SDK_BP_Menu_ShrineReward_HPP
#define UE4SS_SDK_BP_Menu_ShrineReward_HPP

class UBP_Menu_ShrineReward_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* StampAnim;                                                // 0x0828 (size: 0x8)
    class UBP_Btn_Input_C* BP_InputIcon;                                              // 0x0830 (size: 0x8)
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint;                                    // 0x0838 (size: 0x8)
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_1;                                  // 0x0840 (size: 0x8)
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_2;                                  // 0x0848 (size: 0x8)
    class UBP_Menu_StatPoint_C* BP_Menu_StatPoint_3;                                  // 0x0850 (size: 0x8)
    class UTextBlock* CostText;                                                       // 0x0858 (size: 0x8)
    class UOverlay* DetailsBox;                                                       // 0x0860 (size: 0x8)
    class UPerPlatformImage* Icon_Infinite;                                           // 0x0868 (size: 0x8)
    class USizeBox* IconBox;                                                          // 0x0870 (size: 0x8)
    class UHorizontalBox* PointsBox;                                                  // 0x0878 (size: 0x8)
    class UWidgetSwitcher* PointSwitcher;                                             // 0x0880 (size: 0x8)
    class UTextBlock* RewardDescription;                                              // 0x0888 (size: 0x8)
    class UImage* RewardFrame;                                                        // 0x0890 (size: 0x8)
    class UAsyncImage* RewardIcon;                                                    // 0x0898 (size: 0x8)
    class UTextBlock* RewardTitle;                                                    // 0x08A0 (size: 0x8)
    class UImage* StrokeAge;                                                          // 0x08A8 (size: 0x8)
    FBP_Menu_ShrineReward_COnRewardSelected OnRewardSelected;                         // 0x08B0 (size: 0x10)
    void OnRewardSelected(TSubclassOf<class UGameplayEffect> InReward);
    class UStatsComponent* REF_StatsComponent;                                        // 0x08C0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> RewardClass;                                   // 0x08C8 (size: 0x8)
    FSlateColor BaseTint;                                                             // 0x08D0 (size: 0x28)
    FShrineRewardStruct ShrineReward (Normal);                                        // 0x08F8 (size: 0x68)
    bool MaxLevelReached;                                                             // 0x0960 (size: 0x1)
    class UShrineWidgetData_C* Shrine Widget Data;                                    // 0x0968 (size: 0x8)
    bool Active;                                                                      // 0x0970 (size: 0x1)
    bool RefillFocus;                                                                 // 0x0971 (size: 0x1)
    FShrineRewardStruct ShrineReward (Easy);                                          // 0x0978 (size: 0x68)
    FShrineRewardStruct ShrineReward (Hard);                                          // 0x09E0 (size: 0x68)
    bool PerDifficultyReward;                                                         // 0x0A48 (size: 0x1)
    bool IsInDarkMode;                                                                // 0x0A49 (size: 0x1)

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
}; // Size: 0xA4A

#endif
