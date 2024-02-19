#ifndef UE4SS_SDK_BP_Btn_SpinBox_Modifiers_HPP
#define UE4SS_SDK_BP_Btn_SpinBox_Modifiers_HPP

class UBP_Btn_SpinBox_Modifiers_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0318 (size: 0x8)
    class UBP_Btn_InfoBubble_C* BP_Menu_InfoBubble;                                   // 0x0320 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0328 (size: 0x8)
    class UButton* Button_Buy;                                                        // 0x0330 (size: 0x8)
    class UButton* Button_Checkbox;                                                   // 0x0338 (size: 0x8)
    class UButton* Button_Left;                                                       // 0x0340 (size: 0x8)
    class UButton* Button_Right;                                                      // 0x0348 (size: 0x8)
    class UWidgetSwitcher* CheatTypeIconSwitcher;                                     // 0x0350 (size: 0x8)
    class UOverlay* ChoiceList;                                                       // 0x0358 (size: 0x8)
    class URichTextBlock* ChoiceTitle;                                                // 0x0360 (size: 0x8)
    class URichTextBlock* Content_Text;                                               // 0x0368 (size: 0x8)
    class URichTextBlock* Content_Text_Checkbox;                                      // 0x0370 (size: 0x8)
    class UOverlay* Cost;                                                             // 0x0378 (size: 0x8)
    class UImage* CurrencyIcon;                                                       // 0x0380 (size: 0x8)
    class UTextBlock* CurrencyValue;                                                  // 0x0388 (size: 0x8)
    class UImage* Cursor_0;                                                           // 0x0390 (size: 0x8)
    class UImage* Cursor_1;                                                           // 0x0398 (size: 0x8)
    class UImage* Cursor_2;                                                           // 0x03A0 (size: 0x8)
    class UImage* Cursor_3;                                                           // 0x03A8 (size: 0x8)
    class UImage* Cursor_4;                                                           // 0x03B0 (size: 0x8)
    class UImage* Cursor_5;                                                           // 0x03B8 (size: 0x8)
    class UImage* Cursor_6;                                                           // 0x03C0 (size: 0x8)
    class UImage* Cursor_7;                                                           // 0x03C8 (size: 0x8)
    class UImage* Cursor_8;                                                           // 0x03D0 (size: 0x8)
    class UImage* Cursor_9;                                                           // 0x03D8 (size: 0x8)
    class UImage* Cursor_10;                                                          // 0x03E0 (size: 0x8)
    class UWidgetSwitcher* DescriptionColor;                                          // 0x03E8 (size: 0x8)
    class UImage* Grad_1;                                                             // 0x03F0 (size: 0x8)
    class UImage* Grad_2;                                                             // 0x03F8 (size: 0x8)
    class UImage* Grad_3;                                                             // 0x0400 (size: 0x8)
    class UImage* Grad_4;                                                             // 0x0408 (size: 0x8)
    class UImage* Grad_5;                                                             // 0x0410 (size: 0x8)
    class UImage* Grad_6;                                                             // 0x0418 (size: 0x8)
    class UImage* Grad_7;                                                             // 0x0420 (size: 0x8)
    class UImage* Grad_8;                                                             // 0x0428 (size: 0x8)
    class UImage* Grad_9;                                                             // 0x0430 (size: 0x8)
    class UImage* Grad_10;                                                            // 0x0438 (size: 0x8)
    class UImage* IMG_CheckboxIcon;                                                   // 0x0440 (size: 0x8)
    class UImage* Left_Arrow;                                                         // 0x0448 (size: 0x8)
    class UPerPlatformImage* LineImg;                                                 // 0x0450 (size: 0x8)
    class UBP_Btn_ComboMovesetTitle_C* MoveSetInputs;                                 // 0x0458 (size: 0x8)
    class UImage* NotifActivated_Img;                                                 // 0x0460 (size: 0x8)
    class UOverlay* OnOffCheckbox;                                                    // 0x0468 (size: 0x8)
    class UWidgetSwitcher* OptionSwitcher;                                            // 0x0470 (size: 0x8)
    class UOverlay* OverlayAll;                                                       // 0x0478 (size: 0x8)
    class UOverlay* OverlayNotifActivated;                                            // 0x0480 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x0488 (size: 0x8)
    class USizeBox* SizeBox_Choice;                                                   // 0x0490 (size: 0x8)
    class USizeBox* SizeBoxCost;                                                      // 0x0498 (size: 0x8)
    class USizeBox* SizeBoxDescription;                                               // 0x04A0 (size: 0x8)
    class UHorizontalBox* Slider;                                                     // 0x04A8 (size: 0x8)
    class UWidgetSwitcher* Switcher_SelectionType;                                    // 0x04B0 (size: 0x8)
    class UVerticalBox* TitleVerticalBox;                                             // 0x04B8 (size: 0x8)
    class URichTextBlock* Txt_InboxDescriptionBlack;                                  // 0x04C0 (size: 0x8)
    class URichTextBlock* Txt_InboxDescriptionWhite;                                  // 0x04C8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x04D0 (size: 0x8)
    FText MultiChoiceTitle;                                                           // 0x04D8 (size: 0x18)
    TArray<FText> Texts;                                                              // 0x04F0 (size: 0x10)
    TArray<FText> Descriptions;                                                       // 0x0500 (size: 0x10)
    int32 SelectedIndex;                                                              // 0x0510 (size: 0x4)
    FBP_Btn_SpinBox_Modifiers_COnValueChanged OnValueChanged;                         // 0x0518 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat, FGameplayTag CheatGameplayTag, class UBP_Btn_SpinBox_Modifiers_C* Btn, bool ManualUpdate);
    FBP_Btn_SpinBox_Modifiers_COnReceivedFocus OnReceivedFocus;                       // 0x0528 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_SpinBox_Modifiers_COnLostFocus OnLostFocus;                               // 0x0538 (size: 0x10)
    void OnLostFocus();
    class UTexture2D* SelectionBackgroundTexture;                                     // 0x0548 (size: 0x8)
    FBP_Btn_SpinBox_Modifiers_COnClicked OnClicked;                                   // 0x0550 (size: 0x10)
    void OnClicked(class UBP_Btn_SpinBox_Modifiers_C* SpinboxModifier);
    bool CycleOnClick;                                                                // 0x0560 (size: 0x1)
    bool bIsInt;                                                                      // 0x0561 (size: 0x1)
    int32 IntRangeMin;                                                                // 0x0564 (size: 0x4)
    int32 IntRangeMax;                                                                // 0x0568 (size: 0x4)
    bool bCanLoop;                                                                    // 0x056C (size: 0x1)
    bool BIncludeLimits;                                                              // 0x056D (size: 0x1)
    float HorizontalSizeChoice;                                                       // 0x0570 (size: 0x4)
    int32 SliderIndex;                                                                // 0x0574 (size: 0x4)
    uint8 Scalability;                                                                // 0x0578 (size: 0x1)
    bool bIsScalability;                                                              // 0x0579 (size: 0x1)
    FBP_Btn_SpinBox_Modifiers_CScalabilityChanged ScalabilityChanged;                 // 0x0580 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    bool isOnOffSwitch;                                                               // 0x0590 (size: 0x1)
    bool ActivateOnUnlock;                                                            // 0x0591 (size: 0x1)
    FText InfoText;                                                                   // 0x0598 (size: 0x18)
    TArray<class UBorder*> CursorArray;                                               // 0x05B0 (size: 0x10)
    TArray<class UBorder*> GradArray;                                                 // 0x05C0 (size: 0x10)
    bool IsBlack;                                                                     // 0x05D0 (size: 0x1)
    FLinearColor ButtonColor;                                                         // 0x05D4 (size: 0x10)
    EGameOptionTypes OptionType;                                                      // 0x05E4 (size: 0x1)
    bool SkipOptionType;                                                              // 0x05E5 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x05E8 (size: 0x8)
    TArray<class UFileMediaSource*> VideoIllustrations;                               // 0x05F0 (size: 0x10)
    class UMaterial* MediaMat;                                                        // 0x0600 (size: 0x8)
    TArray<class UTexture2D*> ImageIllustrations;                                     // 0x0608 (size: 0x10)
    bool IsInFocus;                                                                   // 0x0618 (size: 0x1)
    bool IsLocked;                                                                    // 0x0619 (size: 0x1)
    FBP_Btn_SpinBox_Modifiers_COnUnlocked OnUnlocked;                                 // 0x0620 (size: 0x10)
    void OnUnlocked();
    FGameplayTag ContentTypeTag;                                                      // 0x0630 (size: 0x8)
    TArray<FString> CheatTagsValues;                                                  // 0x0638 (size: 0x10)
    TArray<FGameplayTag> CheatTags;                                                   // 0x0648 (size: 0x10)
    TArray<int32> iUnlockCosts;                                                       // 0x0658 (size: 0x10)
    FLinearColor CurrencyColor;                                                       // 0x0668 (size: 0x10)
    bool bDebugMode;                                                                  // 0x0678 (size: 0x1)
    TArray<FUI_ComboInput> MovesetTitleComboInput;                                    // 0x0680 (size: 0x10)
    FText MovesetTitleDetailsText;                                                    // 0x0690 (size: 0x18)
    TArray<FText> MovesetArchetypes;                                                  // 0x06A8 (size: 0x10)
    FGameplayTagContainer CurrentMapTags;                                             // 0x06B8 (size: 0x20)

    void Remove Banned Tags(bool InCustomMode);
    void IsArenaMenuMap(bool& Condition);
    void SetupMovesetInput();
    void SetDebugMode();
    void IsOnOffCheckbox(bool& OnOffSwitchValid);
    void ResetIndex();
    void UpdateDescriptionBoundaries();
    void GetContentText(FText& ContentText);
    void GetDescription(FText& Title, FText& Description);
    void IsUnaffordable(bool& Unaffordable);
    void IsCurrentTagModifier(bool& Modifier);
    void SelectValueByTag(FGameplayTag SelectedTag);
    void RefreshFocusVisualState(bool Focus);
    void UpdateLock(bool& IsLocked);
    void UpdateActivatedModifierFeedback();
    void UpdateModifierTypeFeedback();
    void GetSelectedUnlockCost(int32& iSelectedUnlockCost);
    void GetFocusedCheatTag(FGameplayTag& FocusedCheatTag);
    void GetSelectedCheatTag(FGameplayTag& CheatTagSelected);
    void InternalOnValueChanged();
    void UnlockCheat();
    void SetIsLocked(bool Locked);
    void SetInboxDescription(FText Text, bool On Focus);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetIsBlack(bool IsBlack);
    void EnableInteractions(bool Enable);
    void SetContentText(const FText& InText, bool OnFocus);
    void ShowInfo();
    int32 SetSelectedIndex(int32 Index, float LocalFloat);
    void FillArray(const TArray<class UBorder*>& Array, FLinearColor Color, FVector2D Size, FVector2D Margin);
    void SetFocusBrush(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetNextValue(ECycleDirection Direction, bool InitialSetup);
    void SetSelectedContent(int32 Index, float IndexFloat, bool OnFocus);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void BPE_OnClicked_1();
    void BPE_OnCultureChanged();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Btn_SpinBox_Modifiers_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Modifiers_Button_Buy_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Modifiers_Button_Buy_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Modifiers_Button_Buy_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Modifiers_Button_Buy_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_SpinBox_Modifiers(int32 EntryPoint);
    void OnUnlocked__DelegateSignature();
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature(class UBP_Btn_SpinBox_Modifiers_C* SpinboxModifier);
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat, FGameplayTag CheatGameplayTag, class UBP_Btn_SpinBox_Modifiers_C* Btn, bool ManualUpdate);
}; // Size: 0x6D8

#endif
