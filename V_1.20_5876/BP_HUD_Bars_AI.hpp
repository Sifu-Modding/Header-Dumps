#ifndef UE4SS_SDK_BP_HUD_Bars_AI_HPP
#define UE4SS_SDK_BP_HUD_Bars_AI_HPP

class UBP_HUD_Bars_AI_C : public UTargetableWidget
{
    class UWidgetAnimation* StructureImpacted;                                        // 0x0448 (size: 0x8)
    class UWidgetAnimation* FadeOut_Structure;                                        // 0x0450 (size: 0x8)
    class UWidgetAnimation* MiniBossBlink;                                            // 0x0458 (size: 0x8)
    class UWidgetAnimation* MinibossTransform;                                        // 0x0460 (size: 0x8)
    class UWidgetAnimation* BeginBroken;                                              // 0x0468 (size: 0x8)
    class UCanvasPanel* AIFeedbacks;                                                  // 0x0470 (size: 0x8)
    class UImage* Axis_Glow;                                                          // 0x0478 (size: 0x8)
    class UImage* AxisIcon;                                                           // 0x0480 (size: 0x8)
    class UImage* Bkg_Advanced;                                                       // 0x0488 (size: 0x8)
    class UImage* Bkg_LastMan;                                                        // 0x0490 (size: 0x8)
    class UOverlay* BossUI;                                                           // 0x0498 (size: 0x8)
    class UBP_HUD_ContextualActions_C* BP_ContextualAction;                           // 0x04A0 (size: 0x8)
    class UBP_HUD_Bars_Health_C* BP_HealthBoss;                                       // 0x04A8 (size: 0x8)
    class UBP_HUD_Bars_Health_C* BP_HealthGaugeAI;                                    // 0x04B0 (size: 0x8)
    class UBP_HUD_Bars_StructureBig_C* BP_StructureBoss;                              // 0x04B8 (size: 0x8)
    class UBP_HUD_TakedownAction_C* BP_TakedownAction;                                // 0x04C0 (size: 0x8)
    class UBorder* DefaultUI;                                                         // 0x04C8 (size: 0x8)
    class UOverlay* Health_Overlay;                                                   // 0x04D0 (size: 0x8)
    class UProgressBar* Structure_Bar;                                                // 0x04D8 (size: 0x8)
    class UProgressBar* Structure_Bkg;                                                // 0x04E0 (size: 0x8)
    class UOverlay* Structure_Overlay;                                                // 0x04E8 (size: 0x8)
    class USizeBox* Structure_SizeBox;                                                // 0x04F0 (size: 0x8)
    class UOverlay* StructureBrokenOverlay;                                           // 0x04F8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Background;                                 // 0x0500 (size: 0x8)
    FGeometry WidgetSize;                                                             // 0x0508 (size: 0x38)
    FVector2D WidgetToViewportRatio;                                                  // 0x0540 (size: 0x8)
    class AFightingCharacter* CurrentFighter;                                         // 0x0548 (size: 0x8)
    class UDefenseComponent* Defense;                                                 // 0x0550 (size: 0x8)
    float Structure Percent;                                                          // 0x0558 (size: 0x4)
    class UHealthComponent* Health Component;                                         // 0x0560 (size: 0x8)
    float Health Percent;                                                             // 0x0568 (size: 0x4)
    bool StructureDisplayed;                                                          // 0x056C (size: 0x1)
    bool ContextualActionAvailable;                                                   // 0x056D (size: 0x1)
    FSlateBrush AxisBossBrush;                                                        // 0x0570 (size: 0x88)
    FSlateBrush AxisBrush;                                                            // 0x05F8 (size: 0x88)
    FSlateBrush AxisDefaultBrush;                                                     // 0x0680 (size: 0x88)
    FSlateBrush AxisBrokenBrush;                                                      // 0x0708 (size: 0x88)
    FSlateBrush BossBarBrush;                                                         // 0x0790 (size: 0x88)
    class UAIFightingComponent* AIComponent;                                          // 0x0818 (size: 0x8)
    bool Is HUD Visible;                                                              // 0x0820 (size: 0x1)
    bool InFocus;                                                                     // 0x0821 (size: 0x1)
    TArray<FUI_ContextualActionsInputs> ContextualActionsInputs;                      // 0x0828 (size: 0x10)
    bool TakedownActionAvailable;                                                     // 0x0838 (size: 0x1)
    FName ContextualActionSocketName;                                                 // 0x083C (size: 0x8)
    FVector ContextualAction3dOffset;                                                 // 0x0844 (size: 0xC)
    FVector2D ContextualAction2dOffset;                                               // 0x0850 (size: 0x8)
    FName TakedownActionSocket;                                                       // 0x0858 (size: 0x8)
    FVector Takedown3DOffset;                                                         // 0x0860 (size: 0xC)
    FVector2D Takedown2dOffset;                                                       // 0x086C (size: 0x8)
    bool Is Boss;                                                                     // 0x0874 (size: 0x1)
    bool Is Boss UI Displayed;                                                        // 0x0875 (size: 0x1)
    bool Is Being Takendown;                                                          // 0x0876 (size: 0x1)
    bool Is Cinematic Playing;                                                        // 0x0877 (size: 0x1)
    class AFightingCharacter* PrevFighter;                                            // 0x0878 (size: 0x8)
    FSlateBrush AxisAdvancedBrush;                                                    // 0x0880 (size: 0x88)
    FVector2D MinibossHealthSize;                                                     // 0x0908 (size: 0x8)
    FVector2D MinibossStructureBrokenOverlayScale;                                    // 0x0910 (size: 0x8)
    float MinibossStructureWidth;                                                     // 0x0918 (size: 0x4)
    FVector2D MinibossBackgroundScale;                                                // 0x091C (size: 0x8)
    FVector2D AdvancedHealthSize;                                                     // 0x0924 (size: 0x8)
    FVector2D AdvancedStructureBrokenOverlayScale;                                    // 0x092C (size: 0x8)
    float AdvancedStructureWidth;                                                     // 0x0934 (size: 0x4)
    FVector2D AdvancedBackgroundScale;                                                // 0x0938 (size: 0x8)
    FVector2D BaseHealthSize;                                                         // 0x0940 (size: 0x8)
    FVector2D BaseStructureBrokenOverlayScale;                                        // 0x0948 (size: 0x8)
    float BaseStructureWidth;                                                         // 0x0950 (size: 0x4)
    FVector2D BaseBackgroundScale;                                                    // 0x0954 (size: 0x8)
    bool Temp_bool_Has_Been_Initd_Variable;                                           // 0x095C (size: 0x1)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0960 (size: 0x10)
    void GuardBrokenDynamicDelegate();
    bool Temp_bool_IsClosed_Variable;                                                 // 0x0970 (size: 0x1)
    class AActor* K2Node_Event__actor;                                                // 0x0978 (size: 0x8)
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character;                // 0x0980 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0988 (size: 0x1)
    EFightingState K2Node_CustomEvent__eFightingState;                                // 0x0989 (size: 0x1)
    bool K2Node_CustomEvent__bPush;                                                   // 0x098A (size: 0x1)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x098C (size: 0x10)
    void DynamicMulticast();
    uint8 K2Node_CustomEvent__ID_5;                                                   // 0x099C (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_5;                      // 0x09A0 (size: 0x8)
    bool CallFunc_BPF_GetOrderIDFromType__bFound;                                     // 0x09A8 (size: 0x1)
    EActionType K2Node_CustomEvent__eAction;                                          // 0x09A9 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x09AA (size: 0x1)
    bool K2Node_Event__bPawnOnly;                                                     // 0x09AB (size: 0x1)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x09AC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x09BC (size: 0x10)
    void OnTargetChange(EActionType bpp___eAction__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x09CC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5; // 0x09DC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    int32 K2Node_Event__iPreviousPhase;                                               // 0x09EC (size: 0x4)
    int32 K2Node_Event__iPhase;                                                       // 0x09F0 (size: 0x4)
    FName K2Node_Event__archetypeName;                                                // 0x09F4 (size: 0x8)
    ESlateVisibility K2Node_Event__eNewVibility;                                      // 0x09FC (size: 0x1)
    float K2Node_CustomEvent__fAmount;                                                // 0x0A00 (size: 0x4)
    class UHealthComponent* K2Node_CustomEvent__healthComponent;                      // 0x0A08 (size: 0x8)
    bool K2Node_CustomEvent__bApplied;                                                // 0x0A10 (size: 0x1)
    float K2Node_CustomEvent_NewValue;                                                // 0x0A14 (size: 0x4)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6; // 0x0A18 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7; // 0x0A28 (size: 0x10)
    void DeathComponentDelegate();
    TScriptInterface<class IHUDCarrier_C> K2Node_DynamicCast_AsHUDCarrier;            // 0x0A38 (size: 0x10)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0A48 (size: 0x1)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8; // 0x0A4C (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9; // 0x0A5C (size: 0x10)
    void OnDamageDelegate(float bpp___fAmount__pf, class UHealthComponent* bpp___healthComponent__pf, bool bpp___bApplied__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10; // 0x0A6C (size: 0x10)
    void GuardGaugeChangedDelegate(float bpp__NewValue__pf);
    bool CallFunc_Update_Structure_Update_Visibility;                                 // 0x0A7C (size: 0x1)
    float CallFunc_Update_Structure_Structure_Percent;                                // 0x0A80 (size: 0x4)
    bool CallFunc_Update_Structure_StructureImpacted;                                 // 0x0A84 (size: 0x1)
    bool K2Node_CustomEvent_Display_Segment;                                          // 0x0A85 (size: 0x1)
    bool K2Node_CustomEvent_Update_Visibility_1;                                      // 0x0A86 (size: 0x1)
    bool K2Node_CustomEvent_Update_Visibility;                                        // 0x0A87 (size: 0x1)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11; // 0x0A88 (size: 0x10)
    void AbilityDynamicDelegate(class UGameplayAbility* _ability);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12; // 0x0A98 (size: 0x10)
    void AbilityDynamicDelegate(class UGameplayAbility* _ability);
    uint8 K2Node_CustomEvent__ID_4;                                                   // 0x0AA8 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_4;                      // 0x0AB0 (size: 0x8)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13; // 0x0AB8 (size: 0x10)
    void PrefightLowStructureChanged(bool bpp___bForcedLowStructure__pf);
    uint8 K2Node_CustomEvent__ID_3;                                                   // 0x0AC8 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_3;                      // 0x0AD0 (size: 0x8)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14; // 0x0AD8 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    class USCLevelSequence* K2Node_Event__inSequence_1;                               // 0x0AE8 (size: 0x8)
    class USCLevelSequence* K2Node_Event__inSequence;                                 // 0x0AF0 (size: 0x8)
    bool K2Node_CustomEvent__bForcedLowStructure;                                     // 0x0AF8 (size: 0x1)
    bool CallFunc_Update_Structure_Update_Visibility_1;                               // 0x0AF9 (size: 0x1)
    bool CallFunc_Update_Structure_Update_Visibility_2;                               // 0x0AFA (size: 0x1)
    class UWidgetAnimation* K2Node_Event_Animation;                                   // 0x0B00 (size: 0x8)
    class AFightingCharacter* K2Node_CustomEvent_FighterToUnbind;                     // 0x0B08 (size: 0x8)
    class AFightingCharacter* K2Node_CustomEvent_FighterTobind;                       // 0x0B10 (size: 0x8)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15; // 0x0B18 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    TScriptInterface<class IHudCarrierListener_C> Temp_interface_Variable;            // 0x0B28 (size: 0x10)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_16 K2Node_CreateDelegate_OutputDelegate_16; // 0x0B38 (size: 0x10)
    void OnAIPhaseChangedDynamic(int32 bpp___iPreviousPhase__pf, int32 bpp___iCurrentPhase__pf, FName bpp___PhaseName__pf);
    int32 K2Node_CustomEvent__iPreviousPhase;                                         // 0x0B48 (size: 0x4)
    int32 K2Node_CustomEvent__iCurrentPhase;                                          // 0x0B4C (size: 0x4)
    FName K2Node_CustomEvent__PhaseName;                                              // 0x0B50 (size: 0x8)
    class UGameplayAbility* K2Node_CustomEvent__ability_1;                            // 0x0B58 (size: 0x8)
    class UGameplayAbility* K2Node_CustomEvent__ability;                              // 0x0B60 (size: 0x8)
    uint8 K2Node_CustomEvent__ID_2;                                                   // 0x0B68 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_2;                      // 0x0B70 (size: 0x8)
    bool Temp_bool_Variable;                                                          // 0x0B78 (size: 0x1)
    uint8 K2Node_CustomEvent__ID_1;                                                   // 0x0B79 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_1;                      // 0x0B80 (size: 0x8)
    class UBP_HUD_Bars_Health_C* K2Node_Select_Default;                               // 0x0B88 (size: 0x8)
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_17 K2Node_CreateDelegate_OutputDelegate_17; // 0x0B90 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    bool CallFunc_Update_Health_Need_update_visibility;                               // 0x0BA0 (size: 0x1)
    uint8 K2Node_CustomEvent__ID;                                                     // 0x0BA1 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent;                        // 0x0BA8 (size: 0x8)
    bool CallFunc_Update_Structure_Update_Visibility_3;                               // 0x0BB0 (size: 0x1)
    class UArchetypeAsset* K2Node_DynamicCast_AsBP_Boss_Archetype_DB;                 // 0x0BB8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x0BC0 (size: 0x1)
    TArray<class UWidget*> K2Node_MakeArray_Array;                                    // 0x0BC8 (size: 0x10)
    class UArchetypeAsset* K2Node_DynamicCast_AsBP_Base_Archetype_DB;                 // 0x0BD8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_3;                                               // 0x0BE0 (size: 0x1)
    bool CallFunc_BPF_IsForceHealthDamage_ReturnValue;                                // 0x0BE1 (size: 0x1)

    void OnScaleHUD__DelegateSignature();
    void Update Structure(bool& bpp__UpdatexVisibility__pfT);
    void Update Health(class UBP_HUD_Bars_Health_C* bpp__LocalGauge__pf, bool bpp__DisplayxSegment__pfT, bool& bpp__Needxupdatexvisibility__pfTT);
    void Update Global Visibility();
    void UpdateTakedownInputVisibility(uint8 bpp__OrderID__pf);
    void UpdateStructureBrokenEvent(class AFightingCharacter* bpp__FighterToUnbind__pf, class AFightingCharacter* bpp__FighterTobind__pf, const FUpdateStructureBrokenEventBpp__OnGuardBrokenChangedDelegate__pf__const& bpp__OnGuardBrokenChangedDelegate__pf__const, const FUpdateStructureBrokenEventBpp__OnSyncAttackOrderChangedDelegate__pf__const& bpp__OnSyncAttackOrderChangedDelegate__pf__const);
    void UpdateRegisteredCustomEvents(class AFightingCharacter* bpp__FighterToUnbind__pf, class AFightingCharacter* bpp__FighterTobind__pf);
    void UpdateProgressBar(class UProgressBar* bpp__ProgressBar__pf, FVector2D bpp__MarqueeSize__pf);
    void UpdatePrefightLowStructureEvent(class AFightingCharacter* bpp__FighterToUnbind__pf, class AFightingCharacter* bpp__FighterTobind__pf, const FUpdatePrefightLowStructureEventBpp__Event__pf__const& bpp__Event__pf__const);
    void UpdateOrderEvents(class AFightingCharacter* bpp__FighterToUnbind__pf, const FUpdateOrderEventsBpp__OnStart__pf__const& bpp__OnStart__pf__const, class AFightingCharacter* bpp__FighterTobind__pf, const FUpdateOrderEventsBpp__OnStop__pf__const& bpp__OnStop__pf__const, EOrderType bpp___eOrderType__pf);
    void UpdateFSEvent(class AFightingCharacter* bpp__FighterToUnbind__pf, class AFightingCharacter* bpp__FighterTobind__pf, const FUpdateFSEventBpp__Event__pf__const& bpp__Event__pf__const);
    void UpdateContextualActionsInputVisibility(uint8 bpp__OrderID__pf, class UOrderComponent* bpp__OrderComponent__pf);
    void UpdateChargeVisibility();
    void UpdateBPOrderEvents(class AFightingCharacter* bpp__FighterToUnbind__pf, const FUpdateBPOrderEventsBpp__OnStart__pf__const& bpp__OnStart__pf__const, class AFightingCharacter* bpp__FighterTobind__pf, const FUpdateBPOrderEventsBpp__OnStop__pf__const& bpp__OnStop__pf__const, BlueprintOrders bpp___eOrderType__pf);
    void Unregister Events On Current Fighter();
    void StopSyncActionInstigator(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void StartSyncActionInstigator(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void StartStructureBroken();
    void ShouldDisplayHud(bool& bpp__Display__pf);
    void SetBarsSize(BP_Enum_ArchetypeCategory bpp__ArchetypeType__pf);
    void ScaleBarsAI();
    void PhaseChange(class AActor* bpp__LocalFighter__pf, int32 bpp__LocalPhase__pf, FName bpp__PhaseName__pf);
    void On Structure Changed Internal(bool bpp__UpdatexVisibility__pfT);
    void On Structure Changed(float bpp__NewValue__pf);
    void On Health Changed Iternal(bool bpp__DisplayxSegment__pfT, bool bpp__UpdatexVisibility__pfT);
    void On Health Changed(float bpp___fAmount__pf, class UHealthComponent* bpp___healthComponent__pf, bool bpp___bApplied__pf);
    void On Display Health Changed();
    void On AI Death();
    void OnTargetChange(EActionType bpp___eAction__pf);
    void OnSyncAttackInstigatorOrderChanged(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnStructureBroken();
    void OnSlapstickFightDeactivate();
    void OnRemoveSlapstick_Event();
    void OnPrefightLowStructrueChanged(bool bpp___bForcedLowStructure__pf);
    void OnPhaseChanged(int32 bpp___iPreviousPhase__pf, int32 bpp___iCurrentPhase__pf, FName bpp___PhaseName__pf);
    void OnFocusStop(class UGameplayAbility* bpp___ability__pf);
    void OnFocusStarted(class UGameplayAbility* bpp___ability__pf);
    void OnFightingStateChange(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    bool Is Health Full();
    void InitDisplay(class AFightingCharacter* bpp__FightingCharacter__pf);
    void HUD Visible();
    void HUD Hidden();
    void Finished TakenDownEvent(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void FetchCharacterComponents(class AActor* bpp__Actor__pf);
    void Construct();
    void BPE_VisibilityChangedFromMenu(ESlateVisibility bpp___eNewVibility__pf);
    void BPE_UnbindFromDelegates();
    void BPE_RelatedActorChanged(class AActor* bpp___actor__pf);
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_OnCinematicFinished(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_OnAIPhaseChanged(int32 bpp___iPreviousPhase__pf, int32 bpp___iPhase__pf, FName bpp___archetypeName__pf);
    void BPE_BindToDelegates(bool bpp___bPawnOnly__pf);
    void BeingTakenDownEvent(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void BeingParriedEvent(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void VisibilityChanged__DelegateSignature();
    void PrefightLowStructureChanged__DelegateSignature(bool bpp___bForcedLowStructure__pf);
    void OrderStartingDynamicDelegate__DelegateSignature(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnTargetChange__DelegateSignature(EActionType bpp___eAction__pf);
    void OnDamageDelegate__DelegateSignature(float bpp___fAmount__pf, class UHealthComponent* bpp___healthComponent__pf, bool bpp___bApplied__pf);
    void OnAIPhaseChangedDynamic__DelegateSignature(int32 bpp___iPreviousPhase__pf, int32 bpp___iCurrentPhase__pf, FName bpp___PhaseName__pf);
    void GuardGaugeChangedDelegate__DelegateSignature(float bpp__NewValue__pf);
    void GuardBrokenDynamicDelegate__DelegateSignature();
    void FightingStateChanged__DelegateSignature(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void DynamicMulticast__DelegateSignature();
    void DeathComponentDelegate__DelegateSignature();
}; // Size: 0xBE8

#endif
