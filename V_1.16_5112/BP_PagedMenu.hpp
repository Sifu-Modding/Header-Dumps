#ifndef UE4SS_SDK_BP_PagedMenu_HPP
#define UE4SS_SDK_BP_PagedMenu_HPP

class UBP_PagedMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<EMenuEnum> MenuList;
    TMap<class EMenuEnum, class FPagedMenuConditionParams> MenuConditions;
    FBP_PagedMenu_COnAllMenuClosed OnAllMenuClosed;
    void OnAllMenuClosed();
    TMap<class EMenuEnum, class FGameplayTag> MenuTitleUpdateCondition;
    EMenuEnum MenuToPush;
    class UMenuWidget* WaintingForMenu;
    TArray<EMenuEnum> EffectiveMenuList;
    bool bWaitingForValidation;
    bool bNeedsValidation;
    bool bAnimateMenus;
    FBP_PagedMenu_COnWaitingForValidationChanged OnWaitingForValidationChanged;
    void OnWaitingForValidationChanged(bool bNewWaitingForValidation);
    TArray<FMenuRequestStructure> MenuRequestList;
    FString TempArgument;

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
};

#endif
