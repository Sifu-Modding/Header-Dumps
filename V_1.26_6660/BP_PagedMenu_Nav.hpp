#ifndef UE4SS_SDK_BP_PagedMenu_Nav_HPP
#define UE4SS_SDK_BP_PagedMenu_Nav_HPP

class UBP_PagedMenu_Nav_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    EMenuEnum CurrentMenu;                                                            // 0x0270 (size: 0x1)
    bool Black;                                                                       // 0x0271 (size: 0x1)
    TArray<EMenuEnum> MenuList;                                                       // 0x0278 (size: 0x10)
    bool bApplyMenuList;                                                              // 0x0288 (size: 0x1)
    FBP_PagedMenu_Nav_COnAskForMenuPush OnAskForMenuPush;                             // 0x0290 (size: 0x10)
    void OnAskForMenuPush(EMenuEnum NewMenu);
    FBP_PagedMenu_Nav_COnCurrentMenuChanged OnCurrentMenuChanged;                     // 0x02A0 (size: 0x10)
    void OnCurrentMenuChanged(EMenuEnum OldMenu, EMenuEnum NewMenu);
    ECycleDirection NavigationDirection;                                              // 0x02B0 (size: 0x1)
    int32 CurrentMenuIndex;                                                           // 0x02B4 (size: 0x4)
    TSubclassOf<class UUserWidget> BtnTabClass;                                       // 0x02B8 (size: 0x8)
    bool bPushOnFocus;                                                                // 0x02C0 (size: 0x1)
    class UBP_Btn_Tab_C* FocusedButton;                                               // 0x02C8 (size: 0x8)
    int32 FirstIndex;                                                                 // 0x02D0 (size: 0x4)

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
}; // Size: 0x2D4

#endif
