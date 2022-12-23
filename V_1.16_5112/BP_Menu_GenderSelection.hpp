#ifndef UE4SS_SDK_BP_Menu_GenderSelection_HPP
#define UE4SS_SDK_BP_Menu_GenderSelection_HPP

class UBP_Menu_GenderSelection_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SwitchSelectAnim;
    class UBP_Btn_TitleBtn_C* BtnFemale;
    class UBP_Btn_TitleBtn_C* BtnMale;
    class UHorizontalBox* GenderBox;
    class UImage* Line;
    bool bMaleSelected;
    FBP_Menu_GenderSelection_COnGenderSelected OnGenderSelected;
    void OnGenderSelected(bool bMaleSelected);
    bool FadeToBlackAfterSelection;
    bool ChangeOnCharacter;

    void TrySwapGenderOnCharacter();
    void SetChangeOnCharacter();
    void AddFadeToBlackAfterGenderSelection();
    class UWidget* OnNavigate(EUINavigation Navigation);
    void OnFail_387AF1A1411A7A208C429F9A5DAB12F6();
    void OnSuccess_387AF1A1411A7A208C429F9A5DAB12F6();
    void Construct();
    void ExitMenu();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_GenderSelection_BtnMale_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_GenderSelection_BtnFemale_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_GiveFocus();
    void ExecuteUbergraph_BP_Menu_GenderSelection(int32 EntryPoint);
    void OnGenderSelected__DelegateSignature(bool bMaleSelected);
};

#endif
