#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class UBP_HUD_C : public UHUDUserWidget
{
    class UWidgetAnimation* CheatsOnFade;                                             // 0x03A0 (size: 0x8)
    class UWidgetAnimation* DeathCounterDecrease;                                     // 0x03A8 (size: 0x8)
    class UWidgetAnimation* HintFadeIn;                                               // 0x03B0 (size: 0x8)
    class UWidgetAnimation* AgeFade;                                                  // 0x03B8 (size: 0x8)
    class UWidgetAnimation* FocusFade;                                                // 0x03C0 (size: 0x8)
    class UWidgetAnimation* SkipAnim;                                                 // 0x03C8 (size: 0x8)
    class UWidgetAnimation* XPFade;                                                   // 0x03D0 (size: 0x8)
    class UWidgetAnimation* StructureFade;                                            // 0x03D8 (size: 0x8)
    class UWidgetAnimation* HealthFade;                                               // 0x03E0 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x03E8 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input_Traversal;                                    // 0x03F0 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input_Traversal_1;                                  // 0x03F8 (size: 0x8)
    class UBP_Btn_PickUp_C* BP_Btn_PickUp;                                            // 0x0400 (size: 0x8)
    class UBP_Btn_Hold_C* BP_Btn_SkipHold;                                            // 0x0408 (size: 0x8)
    class UBP_HUD_FocusRessource_C* BP_FocusRessource;                                // 0x0410 (size: 0x8)
    class UBP_HUD_Bars_Health_C* BP_Health_MC;                                        // 0x0418 (size: 0x8)
    class UBP_HUD_Age_C* BP_HUD_Age;                                                  // 0x0420 (size: 0x8)
    class UBP_HUD_ComboXP_C* BP_HUD_Combo;                                            // 0x0428 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_HUDAgeDeath;                                // 0x0430 (size: 0x8)
    class UBP_Notif_HighScore_C* BP_Notif_HighScore;                                  // 0x0438 (size: 0x8)
    class UBP_NotifWidget_C* BP_NotifWidget;                                          // 0x0440 (size: 0x8)
    class UBP_HUD_Bars_StructureBig_C* BP_Structure_MC;                               // 0x0448 (size: 0x8)
    class UHorizontalBox* CHEATSON;                                                   // 0x0450 (size: 0x8)
    class UScaleBox* Combo_ScaleBox;                                                  // 0x0458 (size: 0x8)
    class UHorizontalBox* DeathCounterBox;                                            // 0x0460 (size: 0x8)
    class UCanvasPanel* HintContainer;                                                // 0x0468 (size: 0x8)
    class UTextBlock* HintTraversal;                                                  // 0x0470 (size: 0x8)
    class UTextBlock* HintTraversal_Static;                                           // 0x0478 (size: 0x8)
    class UCanvasPanel* HUDContainer;                                                 // 0x0480 (size: 0x8)
    class UCanvasPanel* HUDSubContainer;                                              // 0x0488 (size: 0x8)
    class UImage* Icon_1;                                                             // 0x0490 (size: 0x8)
    class UScaleBox* InputBox;                                                        // 0x0498 (size: 0x8)
    class UScaleBox* InputTraversalBox;                                               // 0x04A0 (size: 0x8)
    class UScaleBox* InputTraversalBoxFix;                                            // 0x04A8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x04B0 (size: 0x8)
    class UTextBlock* ModifiersTitle;                                                 // 0x04B8 (size: 0x8)
    class UTextBlock* ModifiersTitle_1;                                               // 0x04C0 (size: 0x8)
    class UTextBlock* ModifiersTitle_2;                                               // 0x04C8 (size: 0x8)
    class UTextBlock* NewCounterTxt;                                                  // 0x04D0 (size: 0x8)
    class UTextBlock* OldCounterTxt;                                                  // 0x04D8 (size: 0x8)
    class UOverlay* OverlayHealth;                                                    // 0x04E0 (size: 0x8)
    class UBP_Btn_Input_C* PrepTip;                                                   // 0x04E8 (size: 0x8)
    class UImage* Skull_Shadow;                                                       // 0x04F0 (size: 0x8)
    class UImage* TraversalIcon;                                                      // 0x04F8 (size: 0x8)
    class UBP_Notif_XP_C* XP_HUD;                                                     // 0x0500 (size: 0x8)
    class UScaleBox* XP_ScaleBox;                                                     // 0x0508 (size: 0x8)
    class UWidgetSwitcher* XpSwitcher;                                                // 0x0510 (size: 0x8)
    class AFightingCharacter* MyChar;                                                 // 0x0518 (size: 0x8)
    FGeometry WidgetSize;                                                             // 0x0520 (size: 0x38)
    float GuardRatio;                                                                 // 0x0558 (size: 0x4)
    FVector AboveHeadOffset;                                                          // 0x055C (size: 0xC)
    FVector2D WidgetToViewportRatio;                                                  // 0x0568 (size: 0x8)
    FVector OnSpineOffset;                                                            // 0x0570 (size: 0xC)
    class AActor* MyTarget;                                                           // 0x0580 (size: 0x8)
    class AFightingCharacter* MyTargetChar;                                           // 0x0588 (size: 0x8)
    FLinearColor LowLifeColor;                                                        // 0x0590 (size: 0x10)
    FLinearColor MaxLifeColor;                                                        // 0x05A0 (size: 0x10)
    FLinearColor GuardBrokenColor;                                                    // 0x05B0 (size: 0x10)
    FLinearColor LowGuardColor;                                                       // 0x05C0 (size: 0x10)
    FLinearColor MaxGuardColor;                                                       // 0x05D0 (size: 0x10)
    float Target_GuardRatio;                                                          // 0x05E0 (size: 0x4)
    bool Target_GuardBarHidden;                                                       // 0x05E4 (size: 0x1)
    class AActor* MyDesignatedTarget;                                                 // 0x05E8 (size: 0x8)
    class AActor* MyPreviewTarget;                                                    // 0x05F0 (size: 0x8)
    FVector AboveObjectOffset;                                                        // 0x05F8 (size: 0xC)
    bool MyCharChanged;                                                               // 0x0604 (size: 0x1)
    bool FightHUDDisplayed;                                                           // 0x0605 (size: 0x1)
    class UPlayerFightingComponent* MyFightingComponent;                              // 0x0608 (size: 0x8)
    bool LaunchActionUsingStamina;                                                    // 0x0610 (size: 0x1)
    class AActor* MyLastTarget;                                                       // 0x0618 (size: 0x8)
    TArray<class UObject*> Effects;                                                   // 0x0620 (size: 0x10)
    TArray<int32> EffectsNb;                                                          // 0x0630 (size: 0x10)
    bool bUsingLockedText;                                                            // 0x0640 (size: 0x1)
    bool FirstLock;                                                                   // 0x0641 (size: 0x1)
    class UDefenseComponent* Defense Component;                                       // 0x0648 (size: 0x8)
    class UCharacterHealthComponent* Health Component;                                // 0x0650 (size: 0x8)
    float XPPercent;                                                                  // 0x0658 (size: 0x4)
    float FakeXPLevel;                                                                // 0x065C (size: 0x4)
    EDangerStates CurrentDangerState;                                                 // 0x0660 (size: 0x1)
    bool HealthDisplayed;                                                             // 0x0661 (size: 0x1)
    bool StructureDisplayed;                                                          // 0x0662 (size: 0x1)
    EDownState CurrentDownState;                                                      // 0x0663 (size: 0x1)
    bool ChargeAnim;                                                                  // 0x0664 (size: 0x1)
    TArray<class USCUserWidget*> interactionHint;                                     // 0x0668 (size: 0x10)
    bool Reminder;                                                                    // 0x0678 (size: 0x1)
    bool FromPause;                                                                   // 0x0679 (size: 0x1)
    bool ForceHideHealth;                                                             // 0x067A (size: 0x1)
    bool HideAfterFocus;                                                              // 0x067B (size: 0x1)
    bool IsFightingPlayerKND;                                                         // 0x067C (size: 0x1)
    class UAsyncTaskTagChanged* asyncTagChangedTask;                                  // 0x0680 (size: 0x8)
    FTimerHandle CooldownUpdateFunctionHandle;                                        // 0x0688 (size: 0x8)
    class UObject* EventDispatcher;                                                   // 0x0690 (size: 0x8)
    TMap<class UInteractionObjectComponent*, class USCUserWidget*> ComponentToHint;   // 0x0698 (size: 0x50)
    bool IsCinematicPlaying;                                                          // 0x06E8 (size: 0x1)
    bool IsSkipShown;                                                                 // 0x06E9 (size: 0x1)
    bool CanSkipCinematic;                                                            // 0x06EA (size: 0x1)
    TArray<class UWidgetAnimation*> ReminderAnims;                                    // 0x06F0 (size: 0x10)
    FTimerHandle HUDReminderTimer;                                                    // 0x0700 (size: 0x8)
    bool FocusDisplayed;                                                              // 0x0708 (size: 0x1)
    bool ForceHideFocus;                                                              // 0x0709 (size: 0x1)
    bool AgeDisplayed;                                                                // 0x070A (size: 0x1)
    class UInteractionDetectionComponent* DetectionComponent;                         // 0x0710 (size: 0x8)
    FBP_HUD_CLocalOnSaveLoadedEventDispatcher LocalOnSaveLoadedEventDispatcher;       // 0x0718 (size: 0x10)
    void LocalOnSaveLoadedEventDispatcher(ELoadResult bpp___eLoadResult__pf);
    float HUDScaleValue;                                                              // 0x0728 (size: 0x4)
    bool XpDisplayed;                                                                 // 0x072C (size: 0x1)
    bool InitialDisplay;                                                              // 0x072D (size: 0x1)
    bool InTraining;                                                                  // 0x072E (size: 0x1)
    bool DisplayMaxHealth;                                                            // 0x072F (size: 0x1)
    bool DisplayTraversalHint;                                                        // 0x0730 (size: 0x1)
    bool TraversalAvailable;                                                          // 0x0731 (size: 0x1)
    FTimerHandle DisplayTraversalHintTimer;                                           // 0x0738 (size: 0x8)
    FTimerHandle HideTraversalHintTimer;                                              // 0x0740 (size: 0x8)
    bool TraversalHintStaticOnScreen;                                                 // 0x0748 (size: 0x1)
    ETraversalEntryType Temp_byte_Variable;                                           // 0x0749 (size: 0x1)
    FText Temp_text_Variable;                                                         // 0x0750 (size: 0x18)
    FText Temp_text_Variable_1;                                                       // 0x0768 (size: 0x18)
    FText Temp_text_Variable_2;                                                       // 0x0780 (size: 0x18)
    FText Temp_text_Variable_3;                                                       // 0x0798 (size: 0x18)
    FText Temp_text_Variable_4;                                                       // 0x07B0 (size: 0x18)
    FText Temp_text_Variable_5;                                                       // 0x07C8 (size: 0x18)
    ETraversalEntryType Temp_byte_Variable_1;                                         // 0x07E0 (size: 0x1)
    FSlateBrush Temp_struct_Variable;                                                 // 0x07E8 (size: 0x88)
    FSlateBrush Temp_struct_Variable_1;                                               // 0x0870 (size: 0x88)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x08F8 (size: 0x10)
    void DynamicMulticast();
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0908 (size: 0x10)
    void CurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    int32 Temp_int_Loop_Counter_Variable;                                             // 0x0918 (size: 0x4)
    int32 Temp_int_Array_Index_Variable;                                              // 0x091C (size: 0x4)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0920 (size: 0x10)
    void VisibilityChanged();
    FGeometry K2Node_Event_MyGeometry;                                                // 0x0930 (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x0968 (size: 0x4)
    TArray<class UPlayerFightingComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x0970 (size: 0x10)
    class UPlayerFightingComponent* CallFunc_Array_Get_Item;                          // 0x0980 (size: 0x8)
    int32 Temp_int_Variable;                                                          // 0x0988 (size: 0x4)
    int32 Temp_int_Variable_1;                                                        // 0x098C (size: 0x4)
    bool K2Node_Event__bPawnOnly;                                                     // 0x0990 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x0991 (size: 0x1)
    EDangerStates K2Node_CustomEvent__ePreviousDangerState;                           // 0x0992 (size: 0x1)
    EDangerStates K2Node_CustomEvent__eNewDangerState;                                // 0x0993 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x0994 (size: 0x1)
    int32 Temp_int_Array_Index_Variable_1;                                            // 0x0998 (size: 0x4)
    bool K2Node_CustomEvent__bCancel;                                                 // 0x099C (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x09A0 (size: 0x10)
    void OnFocusMechanicStop(bool bpp___bCancel__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x09B0 (size: 0x10)
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5; // 0x09C0 (size: 0x10)
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6; // 0x09D0 (size: 0x10)
    void OnFocusMechanicStart();
    class USCUserWidget* CallFunc_Create_ReturnValue;                                 // 0x09E0 (size: 0x8)
    EMenuEnum K2Node_CustomEvent__ePrevMenu;                                          // 0x09E8 (size: 0x1)
    EMenuEnum K2Node_CustomEvent__eNewMenu;                                           // 0x09E9 (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7; // 0x09EC (size: 0x10)
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    class UAsyncTaskTagChanged* CallFunc_ListenForTagsChange_ReturnValue;             // 0x0A00 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_4;                                              // 0x0A08 (size: 0x1)
    int32 Temp_int_Loop_Counter_Variable_1;                                           // 0x0A0C (size: 0x4)
    bool Temp_bool_Variable_1;                                                        // 0x0A10 (size: 0x1)
    class AFightingCharacter* K2Node_CustomEvent__pawn;                               // 0x0A18 (size: 0x8)
    bool CallFunc_BPF_ShouldDisplayInteractionText__bOutCanInteract;                  // 0x0A20 (size: 0x1)
    FVector CallFunc_Get_HUD_Location_For_Interaction_OutLocation;                    // 0x0A24 (size: 0xC)
    bool CallFunc_DisplayStaticHUD_2DProjSuccess;                                     // 0x0A30 (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8; // 0x0A34 (size: 0x10)
    void OnDangerStateChanged(EDangerStates bpp___ePreviousDangerState__pf, EDangerStates bpp___eNewDangerState__pf);
    class UFightingMovementComponent* K2Node_DynamicCast_AsFighting_Movement_Component; // 0x0A48 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0A50 (size: 0x1)
    bool K2Node_Event_SetDefault;                                                     // 0x0A51 (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9; // 0x0A54 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    EFightingState K2Node_CustomEvent__eFightingState;                                // 0x0A64 (size: 0x1)
    bool K2Node_CustomEvent__bPush;                                                   // 0x0A65 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess_1;                                              // 0x0A66 (size: 0x1)
    class USCLevelSequence* K2Node_Event__inSequence_1;                               // 0x0A68 (size: 0x8)
    class USCLevelSequence* K2Node_Event__inSequence;                                 // 0x0A70 (size: 0x8)
    ELoadResult K2Node_CustomEvent_eLoadResult;                                       // 0x0A78 (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10; // 0x0A7C (size: 0x10)
    void FileLoaded(ELoadResult bpp___eLoadResult__pf);
    TArray<class UWidget*> K2Node_MakeArray_Array;                                    // 0x0A90 (size: 0x10)
    ESlateVisibility Temp_byte_Variable_2;                                            // 0x0AA0 (size: 0x1)
    TArray<class UWidget*> CallFunc_GetAllChildren_ReturnValue;                       // 0x0AA8 (size: 0x10)
    class UWidget* CallFunc_Array_Get_Item_1;                                         // 0x0AB8 (size: 0x8)
    class UScaleBox* K2Node_DynamicCast_AsScale_Box;                                  // 0x0AC0 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0AC8 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_3;                                            // 0x0AC9 (size: 0x1)
    TArray<class UWidget*> CallFunc_GetAllChildren_ReturnValue_1;                     // 0x0AD0 (size: 0x10)
    bool Temp_bool_Variable_2;                                                        // 0x0AE0 (size: 0x1)
    class UWidget* CallFunc_Array_Get_Item_2;                                         // 0x0AE8 (size: 0x8)
    ESlateVisibility K2Node_Select_Default;                                           // 0x0AF0 (size: 0x1)
    float K2Node_Select_Default_1;                                                    // 0x0AF4 (size: 0x4)
    float K2Node_CustomEvent__fPrevious;                                              // 0x0AF8 (size: 0x4)
    float K2Node_CustomEvent__fNew;                                                   // 0x0AFC (size: 0x4)
    ECharacterStat K2Node_CustomEvent__type;                                          // 0x0B00 (size: 0x1)
    int32 K2Node_CustomEvent__previousValue;                                          // 0x0B04 (size: 0x4)
    int32 K2Node_CustomEvent__currentValue;                                           // 0x0B08 (size: 0x4)
    bool K2Node_SwitchEnum_CmpSuccess_2;                                              // 0x0B0C (size: 0x1)
    float CallFunc_ReleaseHold_HoldValue;                                             // 0x0B10 (size: 0x4)
    float K2Node_CustomEvent_CurrentSavedHighscore;                                   // 0x0B14 (size: 0x4)
    float K2Node_CustomEvent_CurrentLevelScore;                                       // 0x0B18 (size: 0x4)
    bool K2Node_CustomEvent_NewHighscoreReached;                                      // 0x0B1C (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11; // 0x0B20 (size: 0x10)
    void StatsChanged();
    bool CallFunc_AreCheatsActivated_CheatsOn;                                        // 0x0B30 (size: 0x1)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12; // 0x0B34 (size: 0x10)
    void OnTagChanged();
    int32 K2Node_Select_Default_2;                                                    // 0x0B44 (size: 0x4)
    int32 CallFunc_Get_XPWidget_Index_WidgetIndex;                                    // 0x0B48 (size: 0x4)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13; // 0x0B4C (size: 0x10)
    void OnTagUpdate();
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14; // 0x0B5C (size: 0x10)
    void TraversalHintUsable(const FTraversalInfo& bpp__currentTraversalInfo__pf, bool bpp__bUsable__pf);
    class UFightingMovementComponent* K2Node_DynamicCast_AsFighting_Movement_Component_1; // 0x0B70 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x0B78 (size: 0x1)
    bool CallFunc_DisplayStaticHUD_2DProjSuccess_1;                                   // 0x0B79 (size: 0x1)
    class UCameraComponentThird* CallFunc_GetCameraThird_CameraThirdComp;             // 0x0B80 (size: 0x8)
    FTraversalInfo K2Node_CustomEvent_currentTraversalInfo;                           // 0x0B88 (size: 0xC8)
    bool K2Node_CustomEvent_bUsable;                                                  // 0x0C50 (size: 0x1)
    FText K2Node_Select_Default_3;                                                    // 0x0C58 (size: 0x18)
    class UScaleBox* CallFunc_GetHintTraversalScaleBox_ScaleBox;                      // 0x0C70 (size: 0x8)
    int32 Temp_int_Variable_2;                                                        // 0x0C78 (size: 0x4)
    FSlateBrush K2Node_MakeStruct_SlateBrush;                                         // 0x0C80 (size: 0x88)
    FSlateBrush K2Node_MakeStruct_SlateBrush_1;                                       // 0x0D08 (size: 0x88)
    FSlateBrush K2Node_Select_Default_4;                                              // 0x0D90 (size: 0x88)
    FBP_HUD_CK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15; // 0x0E18 (size: 0x10)
    void OnTagChanged();
    class UScaleBox* CallFunc_GetHintTraversalScaleBox_ScaleBox_1;                    // 0x0E28 (size: 0x8)

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
    void TraversalHintDisplay();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    bool StructureShowConditions();
    void StatsUpdated(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void StatsHasCHanged();
    void ShowSkipButton();
    void SetWidgetPositionFrom3D(class UWidget* bpp__Widget__pf, FVector bpp__Location__pf, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void SetMultiplierWidgetVisibility();
    void SetLockWidgetPositionOnActor(class AActor* bpp__RelatedActor__pf, class UObject* bpp__Widget__pf, bool bpp__IsLastTarget__pf, FVector2D bpp__Offset2d__pf);
    void SetForceHideScoring(bool bpp__Hide__pf);
    void ScaleHUD(bool bpp__SetDefault__pf);
    void PawnInitialized(class AFightingCharacter* bpp___pawn__pf);
    void OnVisible();
    void OnTraversalHintUsable(const FTraversalInfo& bpp__currentTraversalInfo__pf__const, bool bpp__bUsable__pf);
    void OnTagUpdate_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnTagEnd_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnTagBegin_82A9E1E84CD4586A4D56CCB15B22765F();
    void OnPlayerGetInitialControl();
    void OnMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void OnInitialized();
    void OnFocusValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    void OnFocusStop(bool bpp___bCancel__pf);
    void OnFocusStart();
    void OnFocus(bool bpp__FocusLocal__pf);
    void OnFightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void OnArenaObjectiveStart();
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
    void GetHintTraversalScaleBox(class UScaleBox*& bpp__ScaleBox__pf);
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
    void BindEventToPlayerController();
    void AttachedWidgetToChar(class UWidget* bpp__Widget__pf, FVector bpp__Locationx__pfT, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void AttachedWidgetToActorWithTarget(class AActor* bpp__Parent__pf, class UWidget* bpp__Widget__pf, FVector bpp__Offset__pf, FVector2D bpp__Offset2d__pf);
    void AreCheatsActivated(bool& bpp__CheatsOn__pf);
    bool AgeShowConditions();
    void VisibilityChanged__DelegateSignature();
    void TraversalHintUsable__DelegateSignature(const FTraversalInfo& bpp__currentTraversalInfo__pf, bool bpp__bUsable__pf);
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
    void DynamicMulticast__DelegateSignature();
    void CurrentMenuChanged__DelegateSignature(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
}; // Size: 0xE30

#endif
