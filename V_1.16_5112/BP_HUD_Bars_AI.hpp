#ifndef UE4SS_SDK_BP_HUD_Bars_AI_HPP
#define UE4SS_SDK_BP_HUD_Bars_AI_HPP

class UBP_HUD_Bars_AI_C : public UTargetableWidget
{
    class UWidgetAnimation* StructureImpacted;
    class UWidgetAnimation* FadeOut_Structure;
    class UWidgetAnimation* MiniBossBlink;
    class UWidgetAnimation* MinibossTransform;
    class UWidgetAnimation* BeginBroken;
    class UCanvasPanel* AIFeedbacks;
    class UImage* Axis_Glow;
    class UImage* AxisIcon;
    class UImage* Bkg_Advanced;
    class UImage* Bkg_LastMan;
    class UOverlay* BossUI;
    class UBP_HUD_ContextualActions_C* BP_ContextualAction;
    class UBP_HUD_Bars_Health_C* BP_HealthBoss;
    class UBP_HUD_Bars_Health_C* BP_HealthGaugeAI;
    class UBP_HUD_Bars_StructureBig_C* BP_StructureBoss;
    class UBP_HUD_TakedownAction_C* BP_TakedownAction;
    class UBorder* DefaultUI;
    class UOverlay* Health_Overlay;
    class UProgressBar* Structure_Bar;
    class UProgressBar* Structure_Bkg;
    class UOverlay* Structure_Overlay;
    class USizeBox* Structure_SizeBox;
    class UOverlay* StructureBrokenOverlay;
    class UWidgetSwitcher* WidgetSwitcher_Background;
    FGeometry WidgetSize;
    FVector2D WidgetToViewportRatio;
    class AFightingCharacter* CurrentFighter;
    class UDefenseComponent* Defense;
    float Structure Percent;
    class UHealthComponent* Health Component;
    float Health Percent;
    bool StructureDisplayed;
    bool ContextualActionAvailable;
    FSlateBrush AxisBossBrush;
    FSlateBrush AxisBrush;
    FSlateBrush AxisDefaultBrush;
    FSlateBrush AxisBrokenBrush;
    FSlateBrush BossBarBrush;
    class UAIFightingComponent* AIComponent;
    bool Is HUD Visible;
    bool InFocus;
    TArray<FUI_ContextualActionsInputs> ContextualActionsInputs;
    bool TakedownActionAvailable;
    FName ContextualActionSocketName;
    FVector ContextualAction3dOffset;
    FVector2D ContextualAction2dOffset;
    FName TakedownActionSocket;
    FVector Takedown3DOffset;
    FVector2D Takedown2dOffset;
    bool Is Boss;
    bool Is Boss UI Displayed;
    bool Is Being Takendown;
    bool Is Cinematic Playing;
    class AFightingCharacter* PrevFighter;
    FSlateBrush AxisAdvancedBrush;
    FVector2D MinibossHealthSize;
    FVector2D MinibossStructureBrokenOverlayScale;
    float MinibossStructureWidth;
    FVector2D MinibossBackgroundScale;
    FVector2D AdvancedHealthSize;
    FVector2D AdvancedStructureBrokenOverlayScale;
    float AdvancedStructureWidth;
    FVector2D AdvancedBackgroundScale;
    FVector2D BaseHealthSize;
    FVector2D BaseStructureBrokenOverlayScale;
    float BaseStructureWidth;
    FVector2D BaseBackgroundScale;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void GuardBrokenDynamicDelegate();
    bool Temp_bool_Has_Been_Initd_Variable;
    class AActor* K2Node_Event__actor;
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character;
    bool K2Node_DynamicCast_bSuccess;
    bool Temp_bool_IsClosed_Variable;
    EFightingState K2Node_CustomEvent__eFightingState;
    bool K2Node_CustomEvent__bPush;
    uint8 K2Node_CustomEvent__ID_5;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_5;
    bool CallFunc_BPF_GetOrderIDFromType__bFound;
    EActionType K2Node_CustomEvent__eAction;
    bool K2Node_SwitchEnum_CmpSuccess;
    bool K2Node_Event__bPawnOnly;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void OnTargetChange(EActionType bpp___eAction__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    int32 K2Node_Event__iPreviousPhase;
    int32 K2Node_Event__iPhase;
    FName K2Node_Event__archetypeName;
    ESlateVisibility K2Node_Event__eNewVibility;
    float K2Node_CustomEvent__fAmount;
    class UHealthComponent* K2Node_CustomEvent__healthComponent;
    bool K2Node_CustomEvent__bApplied;
    float K2Node_CustomEvent_NewValue;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6;
    void DeathComponentDelegate();
    TScriptInterface<class IHUDCarrier_C> K2Node_DynamicCast_AsHUDCarrier;
    bool K2Node_DynamicCast_bSuccess_1;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8;
    void OnDamageDelegate(float bpp___fAmount__pf, class UHealthComponent* bpp___healthComponent__pf, bool bpp___bApplied__pf);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9;
    void GuardGaugeChangedDelegate(float bpp__NewValue__pf);
    bool CallFunc_Update_Structure_Update_Visibility;
    float CallFunc_Update_Structure_Structure_Percent;
    bool CallFunc_Update_Structure_StructureImpacted;
    bool K2Node_CustomEvent_Display_Segment;
    bool K2Node_CustomEvent_Update_Visibility_1;
    bool K2Node_CustomEvent_Update_Visibility;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10;
    void AbilityDynamicDelegate(class UGameplayAbility* _ability);
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11;
    void AbilityDynamicDelegate(class UGameplayAbility* _ability);
    uint8 K2Node_CustomEvent__ID_4;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_4;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12;
    void PrefightLowStructureChanged(bool bpp___bForcedLowStructure__pf);
    uint8 K2Node_CustomEvent__ID_3;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_3;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    class USCLevelSequence* K2Node_Event__inSequence_1;
    class USCLevelSequence* K2Node_Event__inSequence;
    bool K2Node_CustomEvent__bForcedLowStructure;
    bool CallFunc_Update_Structure_Update_Visibility_1;
    bool CallFunc_Update_Structure_Update_Visibility_2;
    class UWidgetAnimation* K2Node_Event_Animation;
    class AFightingCharacter* K2Node_CustomEvent_FighterToUnbind;
    class AFightingCharacter* K2Node_CustomEvent_FighterTobind;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14;
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    TScriptInterface<class IHudCarrierListener_C> Temp_interface_Variable;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15;
    void OnAIPhaseChangedDynamic(int32 bpp___iPreviousPhase__pf, int32 bpp___iCurrentPhase__pf, FName bpp___PhaseName__pf);
    int32 K2Node_CustomEvent__iPreviousPhase;
    int32 K2Node_CustomEvent__iCurrentPhase;
    FName K2Node_CustomEvent__PhaseName;
    class UGameplayAbility* K2Node_CustomEvent__ability_1;
    class UGameplayAbility* K2Node_CustomEvent__ability;
    uint8 K2Node_CustomEvent__ID_2;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_2;
    bool Temp_bool_Variable;
    uint8 K2Node_CustomEvent__ID_1;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_1;
    class UBP_HUD_Bars_Health_C* K2Node_Select_Default;
    FBP_HUD_Bars_AI_CK2Node_CreateDelegate_OutputDelegate_16 K2Node_CreateDelegate_OutputDelegate_16;
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    bool CallFunc_Update_Health_Need_update_visibility;
    uint8 K2Node_CustomEvent__ID;
    class UOrderComponent* K2Node_CustomEvent__OrderComponent;
    bool CallFunc_Update_Structure_Update_Visibility_3;
    class UArchetypeAsset* K2Node_DynamicCast_AsBP_Boss_Archetype_DB;
    bool K2Node_DynamicCast_bSuccess_2;
    TArray<class UWidget*> K2Node_MakeArray_Array;
    class UArchetypeAsset* K2Node_DynamicCast_AsBP_Base_Archetype_DB;
    bool K2Node_DynamicCast_bSuccess_3;

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
    void DeathComponentDelegate__DelegateSignature();
};

#endif