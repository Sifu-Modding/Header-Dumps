#ifndef UE4SS_SDK_BP_SavePanel_HPP
#define UE4SS_SDK_BP_SavePanel_HPP

class UBP_SavePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x0270 (size: 0x8)
    class UWidgetAnimation* SelectedAnim;                                             // 0x0278 (size: 0x8)
    class UWidgetAnimation* HoveredAnim;                                              // 0x0280 (size: 0x8)
    class UAsyncImage* BackgroundAsyncImage;                                          // 0x0288 (size: 0x8)
    class UBP_HUD_Age_C* BP_HUD_Age;                                                  // 0x0290 (size: 0x8)
    class UHorizontalBox* CurrentSaveHorizontalBox;                                   // 0x0298 (size: 0x8)
    class UTextBlock* DayTimeText;                                                    // 0x02A0 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x02A8 (size: 0x8)
    class UTextBlock* GenderText;                                                     // 0x02B0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTypeWidget;                                        // 0x02B8 (size: 0x8)
    class USCButton* MainButton;                                                      // 0x02C0 (size: 0x8)
    class UWidgetSwitcher* MainFrameSwitcher;                                         // 0x02C8 (size: 0x8)
    class UTextBlock* MapTitleText;                                                   // 0x02D0 (size: 0x8)
    class UOverlay* Notif;                                                            // 0x02D8 (size: 0x8)
    class UTextBlock* PlayTimeText;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* SaveDateText;                                                   // 0x02E8 (size: 0x8)
    bool NewGameModeEnabled;                                                          // 0x02F0 (size: 0x1)
    FString SaveFileName;                                                             // 0x02F8 (size: 0x10)
    FBP_SavePanel_COnSaveSelected OnSaveSelected;                                     // 0x0308 (size: 0x10)
    void OnSaveSelected(class UBP_SavePanel_C* SavePanel, bool NewGame);
    bool bIsSaveValid;                                                                // 0x0318 (size: 0x1)
    FLinearColor Dominant Color;                                                      // 0x031C (size: 0x10)

    void ReinitFromAnim();
    void IsCurrentSave(bool& CurrentSave);
    void SetSaveFilename(FString InFilename);
    void Construct();
    void BndEvt__BP_SavePanel_MainButton_K2Node_ComponentBoundEvent_0_ButtonFocused__DelegateSignature(class USCButton* _buttonFocused);
    void BndEvt__BP_SavePanel_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_SavePanel_MainButton_K2Node_ComponentBoundEvent_2_ButtonUnFocused__DelegateSignature(class USCButton* _buttonUnfocused);
    void BndEvt__BP_SavePanel_MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_SavePanel_MainButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Unfocused();
    void ExecuteUbergraph_BP_SavePanel(int32 EntryPoint);
    void OnSaveSelected__DelegateSignature(class UBP_SavePanel_C* SavePanel, bool NewGame);
}; // Size: 0x32C

#endif
