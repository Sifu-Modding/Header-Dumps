#ifndef UE4SS_SDK_BP_Menu_CityView_HPP
#define UE4SS_SDK_BP_Menu_CityView_HPP

class UBP_Menu_CityView_C : public UInteractiveCamMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UWidgetAnimation* SwitchHideoutAnim;                                        // 0x03E8 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x03F0 (size: 0x8)
    class UImage* AlarmClockDot_A;                                                    // 0x03F8 (size: 0x8)
    class UImage* AlarmClockDot_B;                                                    // 0x0400 (size: 0x8)
    class UImage* ArrowLeft;                                                          // 0x0408 (size: 0x8)
    class UImage* ArrowRight;                                                         // 0x0410 (size: 0x8)
    class UBackgroundBlur* BG_PopupBlur;                                              // 0x0418 (size: 0x8)
    class UBP_ActiveModifierBox_C* BP_ActiveModifierBox;                              // 0x0420 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_DeathCounter;                               // 0x0428 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBack;                                                // 0x0430 (size: 0x8)
    class UHorizontalBox* BtnBox_Modifiers;                                           // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnCheat_1;                                             // 0x0440 (size: 0x8)
    class UButton* BtnLeft;                                                           // 0x0448 (size: 0x8)
    class UButton* BtnRight;                                                          // 0x0450 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x0458 (size: 0x8)
    class UImage* CityView_Current;                                                   // 0x0460 (size: 0x8)
    class UImage* CityView_New;                                                       // 0x0468 (size: 0x8)
    class UTextBlock* CluesTotal;                                                     // 0x0470 (size: 0x8)
    class UTextBlock* CluesValue;                                                     // 0x0478 (size: 0x8)
    class UImage* Dot;                                                                // 0x0480 (size: 0x8)
    class UImage* FX_Candle_Bloom;                                                    // 0x0488 (size: 0x8)
    class UImage* FX_Candle_Flame;                                                    // 0x0490 (size: 0x8)
    class UImage* FX_Candle_Smoke;                                                    // 0x0498 (size: 0x8)
    class UTextBlock* HighScoreValue;                                                 // 0x04A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x04A8 (size: 0x8)
    class UHorizontalBox* ItemsBox;                                                   // 0x04B0 (size: 0x8)
    class UImage* Key01;                                                              // 0x04B8 (size: 0x8)
    class UImage* Key02;                                                              // 0x04C0 (size: 0x8)
    class UImage* Key03;                                                              // 0x04C8 (size: 0x8)
    class UTextBlock* LevelTxt;                                                       // 0x04D0 (size: 0x8)
    class UImage* List;                                                               // 0x04D8 (size: 0x8)
    class UTextBlock* Ornement;                                                       // 0x04E0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* PopupPreviousHideout;                          // 0x04E8 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* PopupWuguan;                                   // 0x04F0 (size: 0x8)
    class UHorizontalBox* ScoreBox;                                                   // 0x04F8 (size: 0x8)
    class UImage* WudeSymbol;                                                         // 0x0500 (size: 0x8)
    bool CursorInitialized;                                                           // 0x0508 (size: 0x1)
    EMenuTransitions Transition;                                                      // 0x0509 (size: 0x1)
    EMenuEnum PrevMenu;                                                               // 0x050A (size: 0x1)
    FBP_Menu_CityView_COnActionButtonPressed OnActionButtonPressed;                   // 0x0510 (size: 0x10)
    void OnActionButtonPressed();
    FWuguanTypeArray WuguanTypeArray;                                                 // 0x0520 (size: 0x10)
    int32 iHideoutNb;                                                                 // 0x0530 (size: 0x4)
    float fSwitchHideoutTime;                                                         // 0x0534 (size: 0x4)
    int32 iMaxNbHideout;                                                              // 0x0538 (size: 0x4)
    bool bOpenedInSelectHideoutLevel;                                                 // 0x053C (size: 0x1)
    FLinearColor LockedTintKey;                                                       // 0x0540 (size: 0x10)
    int32 BossKillLevel;                                                              // 0x0550 (size: 0x4)
    int32 iLastWuguanIdx;                                                             // 0x0554 (size: 0x4)
    float fFadeDuration;                                                              // 0x0558 (size: 0x4)
    int32 iResetSaveMask;                                                             // 0x055C (size: 0x4)
    class UMaterialInstanceDynamic* ListMID;                                          // 0x0560 (size: 0x8)
    class UMaterialInstanceDynamic* WudeMID;                                          // 0x0568 (size: 0x8)
    TArray<class UMaterialInterface*> HideoutsBackgroundMaterials_Transient;          // 0x0570 (size: 0x10)
    TArray<TEnumAsByte<EBossTag>> BossTags;                                           // 0x0580 (size: 0x10)
    bool bHasSparedSomeone;                                                           // 0x0590 (size: 0x1)
    TMap<int32, FVector2D> FX_Candle_Position;                                        // 0x0598 (size: 0x50)
    FWidgetTransform FX Candle Transform;                                             // 0x05E8 (size: 0x1C)
    TArray<FSlateColor> FX_Color;                                                     // 0x0608 (size: 0x10)
    class UMaterialInstanceDynamic* AlarmDotMID;                                      // 0x0618 (size: 0x8)
    class UMaterialInstanceDynamic* AlarmDotMID_B;                                    // 0x0620 (size: 0x8)
    TArray<FGameplayTagContainer> ShowClueTagContainerPerHideout;                     // 0x0628 (size: 0x10)

    void SequenceEvent__ENTRYPOINTBP_Menu_CityView_0();
    void AreModifiersAccessible(bool& CanOpenModifiers);
    void UpdateVisual(bool FromGiveup);
    bool BPE_OnMenuActionSecondaryPressed();
    void UpdateCurrentCityViewBackground();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetListAndWudeColors(int32 inInt);
    void GetTagsFromSave();
    void SetCityViewBackground(int32 Index, class UImage* CityView);
    void EnsureListAndWudeMID();
    class UMaterialInterface* Get Background Material(int32 Index, bool& bIs21_9);
    void PreTravel();
    void SetListAndWude(int32 HideoutID);
    void UpdateArrows();
    void Go To Selected Map(int32 iMapIdx, bool bGoToHideout);
    void UpdateHideoutInfo(int32 iHideout);
    void OpenedFromDeathMenu(int32 iGiveUpAge);
    void GetHideoutNb(int32& iHideoutNb, int32& iMaxNbHideout, int32& iLastWuguan);
    bool BPE_OnActionButtonPressed();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void OnActionButtonPressed_Event();
    void Enable Inputs();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Menu_CityView_PopupWuguan_K2Node_ComponentBoundEvent_0_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_CityView_PopupWuguan_K2Node_ComponentBoundEvent_1_NoClicked__DelegateSignature();
    void BndEvt__BP_Menu_CityView_PopupPreviousHideout_K2Node_ComponentBoundEvent_2_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_CityView_PopupPreviousHideout_K2Node_ComponentBoundEvent_3_NoClicked__DelegateSignature();
    void SwitchHideoutEnd();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_CityView_BtnLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_CityView_BtnRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void CloseMenu();
    void ExecuteUbergraph_BP_Menu_CityView(int32 EntryPoint);
    void OnActionButtonPressed__DelegateSignature();
}; // Size: 0x638

#endif
