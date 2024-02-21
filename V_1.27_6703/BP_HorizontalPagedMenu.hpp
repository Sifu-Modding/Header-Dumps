#ifndef UE4SS_SDK_BP_HorizontalPagedMenu_HPP
#define UE4SS_SDK_BP_HorizontalPagedMenu_HPP

class UBP_HorizontalPagedMenu_C : public UBP_PagedMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UWidgetAnimation* OutNext;                                                  // 0x0390 (size: 0x8)
    class UWidgetAnimation* OutPrev;                                                  // 0x0398 (size: 0x8)
    class UWidgetAnimation* InPrev;                                                   // 0x03A0 (size: 0x8)
    class UWidgetAnimation* InNext;                                                   // 0x03A8 (size: 0x8)
    class UNamedSlot* BackgroundSlot;                                                 // 0x03B0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x03B8 (size: 0x8)
    class UNamedSlot* LeftNamedSlot;                                                  // 0x03C0 (size: 0x8)
    class USpacer* LeftSpacer;                                                        // 0x03C8 (size: 0x8)
    class UBP_MenuContainer_C* MenuContainer;                                         // 0x03D0 (size: 0x8)
    class UBP_HorizontalPagedMenu_Nav_C* NavigationMenu;                              // 0x03D8 (size: 0x8)
    class UNamedSlot* OverlayNamedSlot;                                               // 0x03E0 (size: 0x8)
    class UNamedSlot* RightNamedSlot;                                                 // 0x03E8 (size: 0x8)
    class USpacer* RightSpacer;                                                       // 0x03F0 (size: 0x8)
    class UOverlay* RootOverlay;                                                      // 0x03F8 (size: 0x8)
    class USpacer* TopSpacer;                                                         // 0x0400 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> NavMenuAlignement;                              // 0x0408 (size: 0x1)
    bool bAltNavigation;                                                              // 0x0409 (size: 0x1)
    float SideNavSpacerSize;                                                          // 0x040C (size: 0x4)
    float TopSpacerSize;                                                              // 0x0410 (size: 0x4)

    void GetMenuContainer(class UBP_MenuContainer_C*& OutContainer);
    void GetNavigationMenu(class UBP_PagedMenu_Nav_C*& OutMenu);
    void GetPopMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void GetPushMenuAnimation(ECycleDirection eNavigationDirection, class UWidgetAnimation*& OutAnimation);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_HorizontalPagedMenu(int32 EntryPoint);
}; // Size: 0x414

#endif
