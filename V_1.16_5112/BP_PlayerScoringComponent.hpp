#ifndef UE4SS_SDK_BP_PlayerScoringComponent_HPP
#define UE4SS_SDK_BP_PlayerScoringComponent_HPP

class UBP_PlayerScoringComponent_C : public UPlayerScoringComponent
{
    class UPDA_ScoringV2_C* ScoringDB;
    TMap<class Enum_ScoringV2Tweakings, class UPDA_ScoringV2_C*> ScoringV2Tweakings;
    FBP_PlayerScoringComponent_CED_ToggleScoringSystem ED_ToggleScoringSystem;
    void ED_ToggleScoringSystem(bool bpp__ScoringActivated__pf);
    FBP_PlayerScoringComponent_CED_UpdateFloorScore ED_UpdateFloorScore;
    void ED_UpdateFloorScore(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    FBP_PlayerScoringComponent_CED_ToggleFloorScore ED_ToggleFloorScore;
    void ED_ToggleFloorScore(bool bpp__Freeze__pf);
    FBP_PlayerScoringComponent_CED_DisplayRecap ED_DisplayRecap;
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    bool RecapHasBeenDisplayed;
    float FinalLevelScore;
    FBP_PlayerScoringComponent_CED_OnEfficiencyChanged ED_OnEfficiencyChanged;
    void ED_OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    FBP_PlayerScoringComponent_CED_NewFloorReached ED_NewFloorReached;
    void ED_NewFloorReached(bool bpp__IsFinalFloor__pf);
    Enum_ScoringV2Tweakings K2Node_CustomEvent_Tweaking;
    class UPDA_ScoringV2_C* CallFunc_Map_Find_Value;
    FBP_PlayerScoringComponent_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    float K2Node_Event__FloorScore;
    float K2Node_Event__MaxFloorScore;
    bool K2Node_Event__Freeze;
    int32 K2Node_Event__NewFloor;
    int32 K2Node_Event__OldFloor;
    class AFightingCharacter* K2Node_Event__Owner_1;
    class AFightingCharacter* K2Node_DynamicCast_AsBP_Fighting_Player;
    bool K2Node_DynamicCast_bSuccess;
    class AFightingCharacter* K2Node_Event__Owner;
    uint8 K2Node_CustomEvent__ID;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent;
    class AFightingCharacter* K2Node_DynamicCast_AsBP_Fighting_Player_1;
    bool K2Node_DynamicCast_bSuccess_1;
    float K2Node_Event__fOld;
    float K2Node_Event__fNew;

    void ED_UpdateFloorScore__DelegateSignature(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void ED_ToggleScoringSystem__DelegateSignature(bool bpp__ScoringActivated__pf);
    void ED_ToggleFloorScore__DelegateSignature(bool bpp__Freeze__pf);
    void ED_OnEfficiencyChanged__DelegateSignature(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void ED_NewFloorReached__DelegateSignature(bool bpp__IsFinalFloor__pf);
    void ED_DisplayRecap__DelegateSignature(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void OnKnockdownAttackStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void ExecuteUbergraph_BP_PlayerScoringComponent_0(int32 bpp__EntryPoint__pf);
    void ChangeScoringV2Tweaking(Enum_ScoringV2Tweakings bpp__Tweaking__pf);
    void ChangeScoringDB(class UPDA_ScoringV2_C* bpp__NewScoringDB__pf);
    void BPF_DisplayRecapScoreAndSave();
    void BPE_ToggleFloorScore(bool bpp___Freeze__pf);
    void BPE_OnUpdateFloorScore(float bpp___FloorScore__pf, float bpp___MaxFloorScore__pf);
    void BPE_OnUnbindCallbacks(class AFightingCharacter* bpp___Owner__pf);
    void BPE_OnNewFloorReached(int32 bpp___NewFloor__pf, int32 bpp___OldFloor__pf);
    void BPE_OnNewEfficiency(float bpp___fOld__pf, float bpp___fNew__pf);
    void BPE_OnInitializeScoring();
    void BPE_OnFinalFloorReached();
    void BPE_OnBindCallbacks(class AFightingCharacter* bpp___Owner__pf);
    bool BPE_IsSyncAttackKnockdown(const FSCUserDefinedEnumHandler& bpp___BlueprintID__pf__const);
    bool BPE_CanTargetGenerateScoring(class AFightingCharacter* bpp___OpponentCharacter__pf);
    void OrderStartingDynamicDelegate__DelegateSignature(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
};

#endif
