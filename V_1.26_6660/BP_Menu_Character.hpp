#ifndef UE4SS_SDK_BP_Menu_Character_HPP
#define UE4SS_SDK_BP_Menu_Character_HPP

class UBP_Menu_Character_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UVerticalBox* AgeBox;                                                       // 0x03E0 (size: 0x8)
    class UTextBlock* AgeDot;                                                         // 0x03E8 (size: 0x8)
    class UTextBlock* AgeOrnement;                                                    // 0x03F0 (size: 0x8)
    class UBP_Menu_Stat_C* AgeReward01;                                               // 0x03F8 (size: 0x8)
    class UBP_Menu_Stat_C* AgeReward02;                                               // 0x0400 (size: 0x8)
    class UBP_Menu_Stat_C* AgeReward03;                                               // 0x0408 (size: 0x8)
    class UHorizontalBox* BreathTitle;                                                // 0x0410 (size: 0x8)
    class UTextBlock* EmptyStats;                                                     // 0x0418 (size: 0x8)
    class UHorizontalBox* EssenceTitle;                                               // 0x0420 (size: 0x8)
    class UImage* ImageMC;                                                            // 0x0428 (size: 0x8)
    class UHorizontalBox* MindTitle;                                                  // 0x0430 (size: 0x8)
    class UVerticalBox* ScoreBox;                                                     // 0x0438 (size: 0x8)
    class UTextBlock* ScoreDot;                                                       // 0x0440 (size: 0x8)
    class UTextBlock* ScoreOrnement;                                                  // 0x0448 (size: 0x8)
    class UBP_Menu_Stat_C* ScoreReward01;                                             // 0x0450 (size: 0x8)
    class UBP_Menu_Stat_C* ScoreReward02;                                             // 0x0458 (size: 0x8)
    class UBP_Menu_Stat_C* ScoreReward03;                                             // 0x0460 (size: 0x8)
    class UBP_Menu_SkillPanel_C* SkillPanel_Character;                                // 0x0468 (size: 0x8)
    class UVerticalBox* StatsBox;                                                     // 0x0470 (size: 0x8)
    class UWidgetSwitcher* StatsSwitcher;                                             // 0x0478 (size: 0x8)
    class UVerticalBox* XPBox;                                                        // 0x0480 (size: 0x8)
    class UTextBlock* XpDot;                                                          // 0x0488 (size: 0x8)
    class UTextBlock* XPOrnement;                                                     // 0x0490 (size: 0x8)
    class UBP_Menu_Stat_C* XPReward01;                                                // 0x0498 (size: 0x8)
    class UBP_Menu_Stat_C* XPReward02;                                                // 0x04A0 (size: 0x8)
    class UBP_Menu_Stat_C* XPReward03;                                                // 0x04A8 (size: 0x8)
    FBP_Menu_Character_CDisplaySkillPanel DisplaySkillPanel;                          // 0x04B0 (size: 0x10)
    void DisplaySkillPanel();
    TArray<class TSubclassOf<ABP_Shrine_Master_C>> ShrineType;                        // 0x04C0 (size: 0x10)
    TArray<class UBP_Menu_Stat_C*> StatArray;                                         // 0x04D0 (size: 0x10)
    class ABP_UI_3D_C* BP_UI_3D;                                                      // 0x04E0 (size: 0x8)
    TSoftObjectPtr<ABP_UI_3D_C> BP_UI_3D_Soft;                                        // 0x04E8 (size: 0x28)
    class UMaterialInstanceDynamic* UI_3D_MID;                                        // 0x0510 (size: 0x8)
    class UMaterialInterface* UI_3D_Material;                                         // 0x0518 (size: 0x8)
    int32 UI_3D_MID_Index;                                                            // 0x0520 (size: 0x4)
    FLinearColor BackgroundColor;                                                     // 0x0524 (size: 0x10)

    void UpdateDarkMode();
    void EnsureUI3DBP(bool& bIsValid);
    void ComputeRewardClass(const FShrineRewardStruct& InReward, TSubclassOf<class UGameplayEffect>& Stat, int32& CurrentLevel, int32& MaxLevel);
    void FillStatsBox();
    void SetStatBoxVisibility(class UVerticalBox* Box);
    void BPE_DebugSkillButtonUpdated();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_Menu_Character(int32 EntryPoint);
    void DisplaySkillPanel__DelegateSignature();
}; // Size: 0x534

#endif
