#ifndef UE4SS_SDK_WBP_ReplaySubMenuBase_HPP
#define UE4SS_SDK_WBP_ReplaySubMenuBase_HPP

class UWBP_ReplaySubMenuBase_C : public UReplaySubMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    FWBP_ReplaySubMenuBase_COnMenuPushedDispatcher OnMenuPushedDispatcher;            // 0x0340 (size: 0x10)
    void OnMenuPushedDispatcher();
    FWBP_ReplaySubMenuBase_COnMenuPoppedDispatcher OnMenuPoppedDispatcher;            // 0x0350 (size: 0x10)
    void OnMenuPoppedDispatcher();
    bool FocusOnPushed;                                                               // 0x0360 (size: 0x1)
    class UWBP_ReplaySubMenuBase_C* PreviousMenu;                                     // 0x0368 (size: 0x8)
    float OpacityNotOnTop;                                                            // 0x0370 (size: 0x4)
    bool IsOnTop;                                                                     // 0x0374 (size: 0x1)
    bool ShouldUpdateOnTopOpacity;                                                    // 0x0375 (size: 0x1)
    class ABaseReplayController* Controller;                                          // 0x0378 (size: 0x8)
    class UWidget* WidgetToFocusOnPush;                                               // 0x0380 (size: 0x8)
    bool FocusFirstItemOnPushed;                                                      // 0x0388 (size: 0x1)
    FWBP_ReplaySubMenuBase_COnConstructedDispatcher OnConstructedDispatcher;          // 0x0390 (size: 0x10)
    void OnConstructedDispatcher();
    class UWidget* PreviousWidgetFocused;                                             // 0x03A0 (size: 0x8)
    ESlateVisibility PoppedVisibility;                                                // 0x03A8 (size: 0x1)
    bool ShouldCloseOtherMenusWhenPushed;                                             // 0x03A9 (size: 0x1)
    bool ShouldPreventOtherMenusFromBeingPushed;                                      // 0x03AA (size: 0x1)
    bool UpdateVisibilityWhenNotOnTop;                                                // 0x03AB (size: 0x1)
    ESlateVisibility VisibilityWhenNotOnTop;                                          // 0x03AC (size: 0x1)
    bool PushAvailabilityLayerOnPushed;                                               // 0x03AD (size: 0x1)
    bool PopAvailabilityLayerOnPopped;                                                // 0x03AE (size: 0x1)
    FAvailabilityLayerCaches AvailabilityLayerCaches;                                 // 0x03B0 (size: 0x18)
    bool PopSpectatorStateWhenPushed;                                                 // 0x03C8 (size: 0x1)
    bool HasPopSpectatorState;                                                        // 0x03C9 (size: 0x1)
    FWBP_ReplaySubMenuBase_COnMenuFocusDispatcher OnMenuFocusDispatcher;              // 0x03D0 (size: 0x10)
    void OnMenuFocusDispatcher(bool Focused);
    bool IsFocused;                                                                   // 0x03E0 (size: 0x1)
    bool BlockAutoFocus;                                                              // 0x03E1 (size: 0x1)
    class UReplayKey* SelectedKey;                                                    // 0x03E8 (size: 0x8)

    void GetPropertyItemsRecursive(class UPanelWidget* PanelWidget, TArray<class UWidget*>& Items);
    void SetAsWidgetSwitcherIndex(bool& bSwitcherIndexSet);
    bool BPE_OnMenuPushRequest(class UReplayMenuWidget* _parent, class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    bool BPE_OnMenuPopRequest(class UReplayMenuWidget* _parent);
    void IsConsumingNavigationInput(bool& IsConsumingInput);
    void UpdateOnTopOpacity();
    void GetCurrentFocusWidget(class UWidget*& Widget);
    void GetPropertyItems(TArray<class UWidget*>& _items);
    void GetRootContainer(class UPanelWidget*& Widget);
    void Construct();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void BPE_OnMenuPopped();
    void OnFocus();
    void OnBecomeTopStack();
    void OnRemovedFromTopStack();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void ExecuteUbergraph_WBP_ReplaySubMenuBase(int32 EntryPoint);
    void OnMenuFocusDispatcher__DelegateSignature(bool Focused);
    void OnConstructedDispatcher__DelegateSignature();
    void OnMenuPoppedDispatcher__DelegateSignature();
    void OnMenuPushedDispatcher__DelegateSignature();
}; // Size: 0x3F0

#endif
