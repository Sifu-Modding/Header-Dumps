#ifndef UE4SS_SDK_BP_VerticalPagedMenu_HPP
#define UE4SS_SDK_BP_VerticalPagedMenu_HPP

class UBP_VerticalPagedMenu_C : public UBP_PagedMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UWidgetAnimation* OutNext;                                                  // 0x0390 (size: 0x8)
    class UWidgetAnimation* OutPrev;                                                  // 0x0398 (size: 0x8)
    class UWidgetAnimation* InPrev;                                                   // 0x03A0 (size: 0x8)
    class UWidgetAnimation* InNext;                                                   // 0x03A8 (size: 0x8)
    class UNamedSlot* BackgroundSlot;                                                 // 0x03B0 (size: 0x8)
    class UBP_MenuContainer_C* MenuContainer;                                         // 0x03B8 (size: 0x8)
    class UBP_VerticalPagedMenu_Nav_C* NavigationMenu;                                // 0x03C0 (size: 0x8)
    class UNamedSlot* OverlayNamedSlot;                                               // 0x03C8 (size: 0x8)
    class UOverlay* RootOverlay;                                                      // 0x03D0 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> NavMenuAlignement;                              // 0x03D8 (size: 0x1)
    float LeftSpacerSize;                                                             // 0x03DC (size: 0x4)

    void GetMenuContainer(class UBP_MenuContainer_C*& OutContainer);
    void GetNavigationMenu(class UBP_PagedMenu_Nav_C*& OutMenu);
    void GetPopMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetPushMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_VerticalPagedMenu(int32 EntryPoint);
}; // Size: 0x3E0

#endif
