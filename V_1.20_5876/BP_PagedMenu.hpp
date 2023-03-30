#ifndef UE4SS_SDK_BP_PagedMenu_HPP
#define UE4SS_SDK_BP_PagedMenu_HPP

class UBP_PagedMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<EMenuEnum> MenuList;                                                       // 0x0270 (size: 0x10)
    TMap<class EMenuEnum, class FPagedMenuConditionParams> MenuConditions;            // 0x0280 (size: 0x50)
    FBP_PagedMenu_COnAllMenuClosed OnAllMenuClosed;                                   // 0x02D0 (size: 0x10)
    void OnAllMenuClosed();
    TMap<class EMenuEnum, class FGameplayTag> MenuTitleUpdateCondition;               // 0x02E0 (size: 0x50)
    EMenuEnum MenuToPush;                                                             // 0x0330 (size: 0x1)
    class UMenuWidget* WaintingForMenu;                                               // 0x0338 (size: 0x8)
    TArray<EMenuEnum> EffectiveMenuList;                                              // 0x0340 (size: 0x10)
    bool bWaitingForValidation;                                                       // 0x0350 (size: 0x1)
    bool bNeedsValidation;                                                            // 0x0351 (size: 0x1)
    bool bAnimateMenus;                                                               // 0x0352 (size: 0x1)
    FBP_PagedMenu_COnWaitingForValidationChanged OnWaitingForValidationChanged;       // 0x0358 (size: 0x10)
    void OnWaitingForValidationChanged(bool bNewWaitingForValidation);
    TArray<FMenuRequestStructure> MenuRequestList;                                    // 0x0368 (size: 0x10)
    FString TempArgument;                                                             // 0x0378 (size: 0x10)

    void GetCurrentGameMode(class AGameModeBase*& GameMode);
    void GetCurrentLevelName(FString& LevelName);
    void ExcludeMenuForCurrentTitleUpdate(TArray<EMenuEnum>& InputMenuList, TArray<EMenuEnum>& OutputMenuList);
    void SetMenuRequestList(TArray<FMenuRequestStructure>& MenuRequestList, bool bRefreshMenu);
    void IsMenuInStack(class AFightingPlayerController* InController, EMenuEnum InMenu, bool& bIsInStack);
    void Update Nav Bar Navigation();
    void IsInSubMenu(bool& bOutIsInMenu);
    void UnfocusMenu();
    void GetMenuContainer(class UBP_MenuContainer_C*& OutContainer);
    void TryFocusCurrentMenu();
    void TryFocusMenu(class UMenuWidget* InMenu);
    void UpdateMenuColor(bool bEnabled);
    void GetPopMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetPushMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetNavigationMenu(class UBP_PagedMenu_Nav_C*& OutMenu);
    void GetBorderContainer(class UBorder*& OutBorder);
    void OnAskForMenu_Advanced(EMenuEnum InNewMenu, bool bPlayAnimation);
    void PushCurrentMenu(bool bPlayAnimation);
    void OnAskForMenu(EMenuEnum InNewMenu);
    void SetPanelVisibilityByChildCount(class UPanelWidget* InPanel);
    void PreConstruct(bool IsDesignTime);
    void CloseAllMenus();
    void LaunchPushMenuAnimation(EMenuEnum InMenu, bool bPlayAnimation);
    void LaunchPopAndPushAnimation(EMenuEnum MenuToPop, ECycleDirection NavigationDirection, bool bPlayAnimation);
    void OnMenuTransitionFinished();
    void Construct();
    void OnPlayerControlerChangedMenu(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void Destruct();
    void OnContainerAddToFocusPath();
    void UseMenuRequestList();
    void ExecuteUbergraph_BP_PagedMenu(int32 EntryPoint);
    void OnWaitingForValidationChanged__DelegateSignature(bool bNewWaitingForValidation);
    void OnAllMenuClosed__DelegateSignature();
}; // Size: 0x388

#endif
