#ifndef UE4SS_SDK_BP_Menu_GenderSelection_HPP
#define UE4SS_SDK_BP_Menu_GenderSelection_HPP

class UBP_Menu_GenderSelection_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* SwitchSelectAnim;                                         // 0x03E0 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnFemale;                                              // 0x03E8 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnMale;                                                // 0x03F0 (size: 0x8)
    class UHorizontalBox* GenderBox;                                                  // 0x03F8 (size: 0x8)
    class UImage* Line;                                                               // 0x0400 (size: 0x8)
    bool bMaleSelected;                                                               // 0x0408 (size: 0x1)
    FBP_Menu_GenderSelection_COnGenderSelected OnGenderSelected;                      // 0x0410 (size: 0x10)
    void OnGenderSelected(bool bMaleSelected);
    bool FadeToBlackAfterSelection;                                                   // 0x0420 (size: 0x1)
    bool ChangeOnCharacter;                                                           // 0x0421 (size: 0x1)

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
}; // Size: 0x422

#endif
