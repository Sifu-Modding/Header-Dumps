#ifndef UE4SS_SDK_BP_VerticalPagedMenu_HPP
#define UE4SS_SDK_BP_VerticalPagedMenu_HPP

class UBP_VerticalPagedMenu_C : public UBP_PagedMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutNext;
    class UWidgetAnimation* OutPrev;
    class UWidgetAnimation* InPrev;
    class UWidgetAnimation* InNext;
    class UNamedSlot* BackgroundSlot;
    class UBP_MenuContainer_C* MenuContainer;
    class UBP_VerticalPagedMenu_Nav_C* NavigationMenu;
    class UNamedSlot* OverlayNamedSlot;
    class UOverlay* RootOverlay;
    TEnumAsByte<EHorizontalAlignment> NavMenuAlignement;
    float LeftSpacerSize;

    void GetMenuContainer(class UBP_MenuContainer_C*& OutContainer);
    void GetNavigationMenu(class UBP_PagedMenu_Nav_C*& OutMenu);
    void GetPopMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetPushMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_VerticalPagedMenu(int32 EntryPoint);
};

#endif
