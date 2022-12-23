#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class UBP_HUD_C : public UHUDUserWidget
{
    class UWidgetAnimation* CheatsOnFade;
    class UWidgetAnimation* DeathCounterDecrease;
    class UWidgetAnimation* HintFadeIn;
    class UWidgetAnimation* AgeFade;
    class UWidgetAnimation* FocusFade;
    class UWidgetAnimation* SkipAnim;
    class UWidgetAnimation* XPFade;
    class UWidgetAnimation* StructureFade;
    class UWidgetAnimation* HealthFade;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UBP_Btn_PickUp_C* BP_Btn_PickUp;
    class UBP_Btn_Hold_C* BP_Btn_SkipHold;
    class UBP_HUD_FocusRessource_C* BP_FocusRessource;
    class UBP_HUD_Bars_Health_C* BP_Health_MC;
    class UBP_HUD_Age_C* BP_HUD_Age;
    class UBP_HUD_Arena_C* BP_HUD_Arena;
    class UBP_HUD_ArenaStars_C* BP_HUD_ArenaStars;
    class UBP_HUD_ComboXP_C* BP_HUD_Combo;
    class UBP_HUD_HardpointBar_C* BP_HUD_HardpointBar;
    class UBp_HUD_HardpointName_C* Bp_HUD_HardpointName;
    class UBP_Notif_AgeDeathCounter_C* BP_HUDAgeDeath;
    class UBP_Notif_HighScore_C* BP_Notif_HighScore;
    class UBP_NotifWidget_C* BP_NotifWidget;
    class UBP_HUD_Bars_StructureBig_C* BP_Structure_MC;
    class UHorizontalBox* CHEATSON;
    class UWidgetSwitcher* ComboSwitcher;
    class UHorizontalBox* DeathCounterBox;
    class UCanvasPanel* HintContainer;
    class UCanvasPanel* HUDContainer;
    class UCanvasPanel* HUDSubContainer;
    class UImage* Icon_1;
    class UScaleBox* InputBox;
    class UInvalidationBox* InvalidationBox_0;
    class UTextBlock* ModifiersTitle;
    class UTextBlock* ModifiersTitle_1;
    class UTextBlock* ModifiersTitle_2;
    class UTextBlock* NewCounterTxt;
    class UTextBlock* OldCounterTxt;
    class UOverlay* OverlayHealth;
    class UBP_Btn_Input_C* PrepTip;
    class UImage* Skull_Shadow;
    class UBP_Notif_XP_C* XP_HUD;
    class UScaleBox* XP_ScaleBox;
    class UWidgetSwitcher* XpSwitcher;
    class AFightingCharacter* MyChar;
    FGeometry WidgetSize;
    float GuardRatio;
    FVector AboveHeadOffset;
    FVector2D WidgetToViewportRatio;
    FVector OnSpineOffset;
    class AActor* MyTarget;
    class AFightingCharacter* MyTargetChar;
    FLinearColor LowLifeColor;
    FLinearColor MaxLifeColor;
    FLinearColor GuardBrokenColor;
    FLinearColor LowGuardColor;
    FLinearColor MaxGuardColor;
    float Target_GuardRatio;
    bool Target_GuardBarHidden;
    class AActor* MyDesignatedTarget;
    class AActor* MyPreviewTarget;
    FVector AboveObjectOffset;
    bool MyCharChanged;
    bool FightHUDDisplayed;
    class UPlayerFightingComponent* MyFightingComponent;
    bool LaunchActionUsingStamina;
    class AActor* MyLastTarget;
    TArray<class UObject*> Effects;
    TArray<int32> EffectsNb;
    bool bUsingLockedText;
    bool FirstLock;
    class UDefenseComponent* Defense Component;
    class UCharacterHealthComponent* Health Component;
    float XPPercent;
    float FakeXPLevel;
    EDangerStates CurrentDangerState;
    bool HealthDisplayed;
    bool StructureDisplayed;
    EDownState CurrentDownState;
    bool ChargeAnim;
    TArray<class USCUserWidget*> interactionHint;
    bool Reminder;
    bool FromPause;
    bool ForceHideHealth;
    bool HideAfterFocus;
    bool IsFightingPlayerKND;
    class UAsyncTaskTagChanged* asyncTagChangedTask;
    FTimerHandle CooldownUpdateFunctionHandle;
    class UObject* EventDispatcher;
    TMap<class UInteractionObjectComponent*, class USCUserWidget*> ComponentToHint;
    bool IsCinematicPlaying;
    bool IsSkipShown;
    bool CanSkipCinematic;
    TArray<class UWidgetAnimation*> ReminderAnims;
    FTimerHandle HUDReminderTimer;
    bool FocusDisplayed;
    bool ForceHideFocus;
    bool AgeDisplayed;
    class UInteractionDetectionComponent* DetectionComponent;
    FBP_HUD_CLocalOnSaveLoadedEventDispatcher LocalOnSaveLoadedEventDispatcher;
    void LocalOnSaveLoadedEventDispatcher(ELoadResult bpp___eLoadResult__pf);
    float HUDScaleValue;
    bool XpDisplayed;
    bool InitialDisplay;
    bool InTraining;
    bool DisplayMaxHealth;
    int32 Temp_int_Variable;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void CurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void VisibilityChanged();
    int32 Temp_int_Array_Index_Variable;
    int32 Temp_int_Loop_Counter_Variable;
    int32 Temp_int_Array_Index_Variable_1;
    int32 Temp_int_Variable_1;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void OnFocusMechanicStop(bool bpp___bCancel__pf);
    TArray<class UPlayerFightingComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;
    class UPlayerFightingComponent* CallFunc_Array_Get_Item;
    bool Temp_bool_Variable;
    int32 Temp_int_Loop_Counter_Variable_1;
    bool K2Node_Event__bPawnOnly;
    bool K2Node_SwitchEnum_CmpSuccess;
    EDangerStates K2Node_CustomEvent__ePreviousDangerState;
    EDangerStates K2Node_CustomEvent__eNewDangerState;
    bool K2Node_CustomEvent__bCancel;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4;
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5;
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6;
    void OnFocusMechanicStart();
    bool Temp_bool_Variable_1;
    class USCUserWidget* CallFunc_Create_ReturnValue;
    EMenuEnum K2Node_CustomEvent__ePrevMenu;
    EMenuEnum K2Node_CustomEvent__eNewMenu;
    int32 Temp_int_Variable_2;
    class UAsyncTaskTagChanged* CallFunc_ListenForTagsChange_ReturnValue;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7;
    void OnDangerStateChanged(EDangerStates bpp___ePreviousDangerState__pf, EDangerStates bpp___eNewDangerState__pf);
    bool CallFunc_IsValid_ReturnValue_4;
    class AFightingCharacter* K2Node_CustomEvent__pawn;
    bool CallFunc_BPF_ShouldDisplayInteractionText__bOutCanInteract;
    FVector CallFunc_Get_HUD_Location_For_Interaction_OutLocation;
    bool CallFunc_DisplayStaticHUD_2DProjSuccess;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8;
    void StatsChanged();
    bool K2Node_Event_SetDefault;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9;
    void PawnInitializedDynamic(class AFightingCharacter* bpp___pawn__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10;
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    EFightingState K2Node_CustomEvent__eFightingState;
    bool K2Node_CustomEvent__bPush;
    bool K2Node_SwitchEnum_CmpSuccess_1;
    class USCLevelSequence* K2Node_Event__inSequence_1;
    class USCLevelSequence* K2Node_Event__inSequence;
    ESlateVisibility Temp_byte_Variable;
    ELoadResult K2Node_CustomEvent_eLoadResult;
    ESlateVisibility Temp_byte_Variable_1;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11;
    void FileLoaded(ELoadResult bpp___eLoadResult__pf);
    TArray<class UWidget*> K2Node_MakeArray_Array;
    bool Temp_bool_Variable_2;
    TArray<class UWidget*> CallFunc_GetAllChildren_ReturnValue;
    ESlateVisibility K2Node_Select_Default;
    class UWidget* CallFunc_Array_Get_Item_1;
    class UScaleBox* K2Node_DynamicCast_AsScale_Box;
    bool K2Node_DynamicCast_bSuccess;
    TArray<class UWidget*> CallFunc_GetAllChildren_ReturnValue_1;
    class UWidget* CallFunc_Array_Get_Item_2;
    float K2Node_Select_Default_1;
    float K2Node_CustomEvent__fPrevious;
    float K2Node_CustomEvent__fNew;
    ECharacterStat K2Node_CustomEvent__type;
    int32 K2Node_CustomEvent__previousValue;
    int32 K2Node_CustomEvent__currentValue;
    bool K2Node_SwitchEnum_CmpSuccess_2;
    float CallFunc_ReleaseHold_HoldValue;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12;
    void OnTagChanged();
    float K2Node_CustomEvent_CurrentSavedHighscore;
    float K2Node_CustomEvent_CurrentLevelScore;
    bool K2Node_CustomEvent_NewHighscoreReached;
    bool CallFunc_AreCheatsActivated_CheatsOn;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13;
    void OnTagUpdate();
    int32 K2Node_Select_Default_2;
    int32 CallFunc_Get_XPWidget_Index_WidgetIndex;
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14;
    void OnTagChanged();
    class UArenaHardpointsObjective* K2Node_DynamicCast_AsArena_Hardpoints_Objective;
    bool K2Node_DynamicCast_bSuccess_1;

    void LocalOnSaveLoadedEventDispatcher__DelegateSignature(ELoadResult bpp___eLoadResult__pf);
    void ED_DisplayRecap__DelegateSignature(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    bool XPShowConditions();
    void UpdateXPDisplay();
    void Update Interaction Hints();
    void UpdateStructureValue();
    void UpdateStructureGaugeLength();
    void UpdateStructureDisplay();
    void UpdateHUDWithProfileInfo();
    void UpdateHealthValue();
    void UpdateHealthGaugeLength();
    void UpdateHealthDisplay();
    void UpdateHealthCheatVisibility();
    void UpdateFocusDisplay();
    void UpdateAgeDisplay();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    bool StructureShowConditions();
    void StatsUpdated(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void StatsHasCHanged();
    void ShowSkipButton();
    void SetWidgetPositionFrom3D(class UWidget* bpp__Widget__pf, FVector bpp__Location__pf, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void SetLockWidgetPositionOnActor(class AActor* bpp__RelatedActor__pf, class UObject* bpp__Widget__pf, bool bpp__IsLastTarget__pf, FVector2D bpp__Offset2d__pf);
    void SetForceHideScoring(bool bpp__Hide__pf);
    void ScaleHUD(bool bpp__SetDefault__pf);
    void PawnInitialized(class AFightingCharacter* bpp___pawn__pf);
    void OnVisible();
    void OnTagUpdate_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnTagEnd_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnTagBegin_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void OnInitialized();
    void OnFocusValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    void OnFocusStop(bool bpp___bCancel__pf);
    void OnFocusStart();
    void OnFocus(bool bpp__FocusLocal__pf);
    void OnFightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void MaxHealthDisplayed();
    void LaunchMaxHealthAnim();
    void LaunchDeathGainAnim(int32 bpp__PreviousDeath__pf, int32 bpp__NewDeath__pf);
    void InitHealthDisplay();
    void HUDReminderReverseFade();
    void HUDReminder(float bpp__Delay__pf);
    void HideFightHUD();
    bool HealthShowConditions();
    void Get XPWidget Index(int32& bpp__WidgetIndex__pf);
    void Get HUD Location For Interaction(class UInteractionObjectComponent* bpp__InInteractionComponent__pf, FVector& bpp__OutLocation__pf);
    FText GetSecondActionText();
    void GetLastFocusMax(int32& bpp__LastFocusMax__pf);
    void GetHudScaleValue(float& bpp__Value__pf);
    void GetHUDEventDispatcher(class UObject*& bpp__EventDispatcher__pf);
    float GetHealthPercent();
    FLinearColor GetHealthFillColorAndOpacity();
    FText GetFirstActionText();
    ESlateVisibility Get_SecondActionText_Visibility_0();
    ESlateVisibility Get_ActionImage_Visibility_0();
    void FocusTipDisplay(float bpp__CurrentFocus__pf);
    bool FocusShowConditions();
    ESlateVisibility FlowingGauge_Visibility();
    void DisplayStaticHUD(FVector bpp__Location__pf, class UWidget* bpp__WidgetObject__pf, FVector2D bpp__2DOffset__pf, bool bpp__bUpdateVisibility__pf, bool& bpp__2DProjSuccess__pf);
    void DisplayStamina(bool bpp__Display__pf);
    void DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void DisplayMovableHUD(class AInteractiveMovable* bpp__MovableObject__pf, class UBP_Btn_PickUp_C* bpp__WidgetObject__pf);
    void DisplayFightHUD();
    void Construct();
    void Combat Mode(EDangerStates bpp___ePreviousDangerState__pf, EDangerStates bpp___eNewDangerState__pf);
    void CE_OnSaveLoaded(ELoadResult bpp__eLoadResult__pf);
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_OnCinematicFinished(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_BindToDelegates(bool bpp___bPawnOnly__pf);
    void BindToDelegates();
    void BindEventToSaveLoaded(const FBindEventToSaveLoadedBpp__Event__pf__const& bpp__Event__pf__const);
    void AttachedWidgetToChar(class UWidget* bpp__Widget__pf, FVector bpp__Locationx__pfT, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void AttachedWidgetToActorWithTarget(class AActor* bpp__Parent__pf, class UWidget* bpp__Widget__pf, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void AreCheatsActivated(bool& bpp__CheatsOn__pf);
    bool AgeShowConditions();
    void VisibilityChanged__DelegateSignature();
    void StatsChanged__DelegateSignature();
    void PawnInitializedDynamic__DelegateSignature(class AFightingCharacter* bpp___pawn__pf);
    void OnTagUpdate__DelegateSignature();
    void OnTagChanged__DelegateSignature();
    void OnFocusMechanicStop__DelegateSignature(bool bpp___bCancel__pf);
    void OnFocusMechanicStart__DelegateSignature();
    void OnDangerStateChanged__DelegateSignature(EDangerStates bpp___ePreviousDangerState__pf, EDangerStates bpp___eNewDangerState__pf);
    void FocusPointValueChanged__DelegateSignature(float bpp___fPrevious__pf, float bpp___fNew__pf);
    void FileLoaded__DelegateSignature(ELoadResult bpp___eLoadResult__pf);
    void FightingStateChanged__DelegateSignature(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void CurrentMenuChanged__DelegateSignature(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
};

#endif
