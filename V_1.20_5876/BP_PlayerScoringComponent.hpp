#ifndef UE4SS_SDK_BP_PlayerScoringComponent_HPP
#define UE4SS_SDK_BP_PlayerScoringComponent_HPP

class UBP_PlayerScoringComponent_C : public UPlayerScoringComponent
{
    class UPDA_ScoringV2_C* ScoringDB;                                                // 0x02F8 (size: 0x8)
    TMap<class Enum_ScoringV2Tweakings, class UPDA_ScoringV2_C*> ScoringV2Tweakings;  // 0x0300 (size: 0x50)
    FBP_PlayerScoringComponent_CED_ToggleScoringSystem ED_ToggleScoringSystem;        // 0x0350 (size: 0x10)
    void ED_ToggleScoringSystem(bool bpp__ScoringActivated__pf);
    FBP_PlayerScoringComponent_CED_UpdateFloorScore ED_UpdateFloorScore;              // 0x0360 (size: 0x10)
    void ED_UpdateFloorScore(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    FBP_PlayerScoringComponent_CED_ToggleFloorScore ED_ToggleFloorScore;              // 0x0370 (size: 0x10)
    void ED_ToggleFloorScore(bool bpp__Freeze__pf);
    FBP_PlayerScoringComponent_CED_DisplayRecap ED_DisplayRecap;                      // 0x0380 (size: 0x10)
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    bool RecapHasBeenDisplayed;                                                       // 0x0390 (size: 0x1)
    float FinalLevelScore;                                                            // 0x0394 (size: 0x4)
    FBP_PlayerScoringComponent_CED_OnEfficiencyChanged ED_OnEfficiencyChanged;        // 0x0398 (size: 0x10)
    void ED_OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    FBP_PlayerScoringComponent_CED_NewFloorReached ED_NewFloorReached;                // 0x03A8 (size: 0x10)
    void ED_NewFloorReached(bool bpp__IsFinalFloor__pf);
    class UPDA_ScoringV2_C* ScoringDB_HardPoint;                                      // 0x03B8 (size: 0x8)
    FBP_PlayerScoringComponent_CED_ReloadDB ED_ReloadDB;                              // 0x03C0 (size: 0x10)
    void ED_ReloadDB();
    FBP_PlayerScoringComponent_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x03D0 (size: 0x10)
    void OnHardpointCaptured(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    FBP_PlayerScoringComponent_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x03E0 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    float K2Node_Event__FloorScore;                                                   // 0x03F0 (size: 0x4)
    float K2Node_Event__MaxFloorScore;                                                // 0x03F4 (size: 0x4)
    bool K2Node_Event__Freeze;                                                        // 0x03F8 (size: 0x1)
    int32 K2Node_Event__NewFloor;                                                     // 0x03FC (size: 0x4)
    int32 K2Node_Event__OldFloor;                                                     // 0x0400 (size: 0x4)
    class AFightingCharacter* K2Node_Event__owner_1;                                  // 0x0408 (size: 0x8)
    class AFightingCharacter* K2Node_DynamicCast_AsBP_Fighting_Player;                // 0x0410 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0418 (size: 0x1)
    class AFightingCharacter* K2Node_Event__owner;                                    // 0x0420 (size: 0x8)
    uint8 K2Node_CustomEvent__ID;                                                     // 0x0428 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent;                        // 0x0430 (size: 0x8)
    class AFightingCharacter* K2Node_DynamicCast_AsBP_Fighting_Player_1;              // 0x0438 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0440 (size: 0x1)
    float K2Node_Event__fOld;                                                         // 0x0444 (size: 0x4)
    float K2Node_Event__fNew;                                                         // 0x0448 (size: 0x4)
    Enum_ScoringV2Tweakings K2Node_CustomEvent_Tweaking;                              // 0x044C (size: 0x1)
    class UPDA_ScoringV2_C* CallFunc_Map_Find_Value;                                  // 0x0450 (size: 0x8)
    class UArenaHardpointsObjective* K2Node_DynamicCast_AsArena_Hardpoints_Objective; // 0x0458 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x0460 (size: 0x1)
    FHardpointInfos K2Node_CustomEvent__HardpointInfo;                                // 0x0468 (size: 0x58)
    int32 K2Node_CustomEvent__CurrentChallengeIndex;                                  // 0x04C0 (size: 0x4)

    void ED_UpdateFloorScore__DelegateSignature(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void ED_ToggleScoringSystem__DelegateSignature(bool bpp__ScoringActivated__pf);
    void ED_ToggleFloorScore__DelegateSignature(bool bpp__Freeze__pf);
    void ED_ReloadDB__DelegateSignature();
    void ED_OnEfficiencyChanged__DelegateSignature(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void ED_NewFloorReached__DelegateSignature(bool bpp__IsFinalFloor__pf);
    void ED_DisplayRecap__DelegateSignature(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void OnKnockdownAttackStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnHardPointCaptured(const FHardpointInfos& bpp___HardpointInfo__pf__const, int32 bpp___CurrentChallengeIndex__pf);
    void ExecuteUbergraph_BP_PlayerScoringComponent_3(int32 bpp__EntryPoint__pf);
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
    float BPE_GetFloorScoreToReachMaxMultiplier();
    bool BPE_CanTargetGenerateScoring(class AFightingCharacter* bpp___OpponentCharacter__pf);
    void OrderStartingDynamicDelegate__DelegateSignature(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
}; // Size: 0x4C8

#endif
