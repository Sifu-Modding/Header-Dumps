#ifndef UE4SS_SDK_BP_Btn_Combo_HPP
#define UE4SS_SDK_BP_Btn_Combo_HPP

class UBP_Btn_Combo_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* BrushOver;
    class UHorizontalBox* ButtonBox;
    class URichTextBlock* ChoiceTitle;
    class UTextBlock* Details;
    class UBorder* Line;
    FBP_Btn_Combo_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_Combo_COnLostFocus OnLostFocus;
    void OnLostFocus();
    FBP_Btn_Combo_COnClicked OnClicked;
    void OnClicked();
    FText Combo Name;
    FText InfoBuble Text;
    FText Details Text;
    TArray<FUI_ComboInput> ComboInput;
    TArray<class UBP_InputAction_C*> ButtonsArray;
    bool ListCreated;
    class UBP_Btn_Input_C* BtnInput;
    bool IsFocused;
    FGameplayTagContainer SkillTagNeeded;
    bool IsDarkMode;

    void SetIsDarkMode(bool DarkMode);
    void CheckSkillUnlocked();
    void SetButtonsAction();
    void SetFocusState(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Combo(int32 EntryPoint);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
};

#endif
