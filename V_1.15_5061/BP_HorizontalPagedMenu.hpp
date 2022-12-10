#ifndef UE4SS_SDK_BP_HorizontalPagedMenu_HPP
#define UE4SS_SDK_BP_HorizontalPagedMenu_HPP

class UBP_HorizontalPagedMenu_C : public UBP_PagedMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutNext;
    class UWidgetAnimation* OutPrev;
    class UWidgetAnimation* InPrev;
    class UWidgetAnimation* InNext;
    class UNamedSlot* BackgroundSlot;
    class UInvalidationBox* InvalidationBox_0;
    class UNamedSlot* LeftNamedSlot;
    class USpacer* LeftSpacer;
    class UBP_MenuContainer_C* MenuContainer;
    class UBP_HorizontalPagedMenu_Nav_C* NavigationMenu;
    class UNamedSlot* OverlayNamedSlot;
    class UNamedSlot* RightNamedSlot;
    class USpacer* RightSpacer;
    class UOverlay* RootOverlay;
    class USpacer* TopSpacer;
    TEnumAsByte<EHorizontalAlignment> NavMenuAlignement;
    bool bAltNavigation;
    float SideNavSpacerSize;
    float TopSpacerSize;

    void GetMenuContainer(class UBP_MenuContainer_C*& OutContainer);
    void GetNavigationMenu(class UBP_PagedMenu_Nav_C*& OutMenu);
    void GetPopMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetPushMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_HorizontalPagedMenu(int32 EntryPoint);
};

#endif
