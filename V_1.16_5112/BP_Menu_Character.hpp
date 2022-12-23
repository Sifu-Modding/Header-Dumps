#ifndef UE4SS_SDK_BP_Menu_Character_HPP
#define UE4SS_SDK_BP_Menu_Character_HPP

class UBP_Menu_Character_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AgeBox;
    class UTextBlock* AgeDot;
    class UTextBlock* AgeOrnement;
    class UBP_Menu_Stat_C* AgeReward01;
    class UBP_Menu_Stat_C* AgeReward02;
    class UBP_Menu_Stat_C* AgeReward03;
    class UHorizontalBox* BreathTitle;
    class UTextBlock* EmptyStats;
    class UHorizontalBox* EssenceTitle;
    class UImage* ImageMC;
    class UHorizontalBox* MindTitle;
    class UVerticalBox* ScoreBox;
    class UTextBlock* ScoreDot;
    class UTextBlock* ScoreOrnement;
    class UBP_Menu_Stat_C* ScoreReward01;
    class UBP_Menu_Stat_C* ScoreReward02;
    class UBP_Menu_Stat_C* ScoreReward03;
    class UBP_Menu_SkillPanel_C* SkillPanel_Character;
    class UVerticalBox* StatsBox;
    class UWidgetSwitcher* StatsSwitcher;
    class UVerticalBox* XPBox;
    class UTextBlock* XpDot;
    class UTextBlock* XPOrnement;
    class UBP_Menu_Stat_C* XPReward01;
    class UBP_Menu_Stat_C* XPReward02;
    class UBP_Menu_Stat_C* XPReward03;
    FBP_Menu_Character_CDisplaySkillPanel DisplaySkillPanel;
    void DisplaySkillPanel();
    TArray<class TSubclassOf<ABP_Shrine_Master_C>> ShrineType;
    TArray<class UBP_Menu_Stat_C*> StatArray;
    class ABP_UI_3D_C* BP_UI_3D;
    TSoftObjectPtr<ABP_UI_3D_C> BP_UI_3D_Soft;
    class UMaterialInstanceDynamic* UI_3D_MID;
    class UMaterialInterface* UI_3D_Material;
    int32 UI_3D_MID_Index;
    FLinearColor BackgroundColor;

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
};

#endif
