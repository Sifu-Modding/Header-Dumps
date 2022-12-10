#ifndef UE4SS_SDK_BP_SavePanel_HPP
#define UE4SS_SDK_BP_SavePanel_HPP

class UBP_SavePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowAnim;
    class UWidgetAnimation* SelectedAnim;
    class UWidgetAnimation* HoveredAnim;
    class UAsyncImage* BackgroundAsyncImage;
    class UBP_HUD_Age_C* BP_HUD_Age;
    class UHorizontalBox* CurrentSaveHorizontalBox;
    class UTextBlock* DayTimeText;
    class UTextBlock* DifficultyText;
    class UTextBlock* GenderText;
    class UBP_Btn_InputTip_C* InputTypeWidget;
    class USCButton* MainButton;
    class UWidgetSwitcher* MainFrameSwitcher;
    class UTextBlock* MapTitleText;
    class UOverlay* Notif;
    class UTextBlock* PlayTimeText;
    class UTextBlock* SaveDateText;
    bool NewGameModeEnabled;
    FString SaveFileName;
    FBP_SavePanel_COnSaveSelected OnSaveSelected;
    void OnSaveSelected(class UBP_SavePanel_C* SavePanel, bool NewGame);
    bool bIsSaveValid;
    FLinearColor Dominant Color;

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
};

#endif
