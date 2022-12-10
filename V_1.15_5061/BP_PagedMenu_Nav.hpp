#ifndef UE4SS_SDK_BP_PagedMenu_Nav_HPP
#define UE4SS_SDK_BP_PagedMenu_Nav_HPP

class UBP_PagedMenu_Nav_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    EMenuEnum CurrentMenu;
    bool Black;
    TArray<EMenuEnum> MenuList;
    bool bApplyMenuList;
    FBP_PagedMenu_Nav_COnAskForMenuPush OnAskForMenuPush;
    void OnAskForMenuPush(EMenuEnum NewMenu);
    FBP_PagedMenu_Nav_COnCurrentMenuChanged OnCurrentMenuChanged;
    void OnCurrentMenuChanged(EMenuEnum OldMenu, EMenuEnum NewMenu);
    ECycleDirection NavigationDirection;
    int32 CurrentMenuIndex;
    TSubclassOf<class UUserWidget> BtnTabClass;
    bool bPushOnFocus;
    class UBP_Btn_Tab_C* FocusedButton;
    int32 FirstIndex;

    void SetBtnGamepadNavDisabled(class UBP_Btn_Tab_C* InButton, bool InDisableGamepadNav);
    void SetGamepadNavDisabled(bool InDisableGamepadNav);
    void UpdateButtonsOpacity(bool IsValidated);
    void ShowInputOnMenu(EMenuEnum InMenu);
    void OnButtonClick(class UButtonUserWidget* Button, bool bWithMouse);
    void FocusButtonByMenu(EMenuEnum InMenu);
    void OnLocalCurrentMenuChanged(EMenuEnum PrevMenu, EMenuEnum NewMenu);
    void OnSlotAdded(class UBP_Btn_Tab_C* InBtn, class UPanelSlot* inTab);
    void GetButtonContainer(class UPanelWidget*& OutContainer);
    void GetNavigationSFX(bool bSuccess, class UAkAudioEvent*& OutEvent);
    void TryUpdateCurrentMenu();
    void OnPageNavigation(ECycleDirection InDirection);
    void CreateButtonFromMenu(EMenuEnum Menu, class AFightingPlayerController* PlayerController);
    void SetMenuIndex(int32 InIndex, bool InPlaySound);
    void SetMenuList(TArray<EMenuEnum>& InMenuList);
    void SetColor(bool Black);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Destruct();
    void AskForMenuPushEvent(EMenuEnum NewMenu);
    void OnCurrentMenuChangedEvent(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void OnButtonLocallyFocused(class UBP_Btn_Tab_C* InButton);
    void ExecuteUbergraph_BP_PagedMenu_Nav(int32 EntryPoint);
    void OnCurrentMenuChanged__DelegateSignature(EMenuEnum OldMenu, EMenuEnum NewMenu);
    void OnAskForMenuPush__DelegateSignature(EMenuEnum NewMenu);
};

#endif
