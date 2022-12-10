#ifndef UE4SS_SDK_WBP_ReplaySubMenuBase_HPP
#define UE4SS_SDK_WBP_ReplaySubMenuBase_HPP

class UWBP_ReplaySubMenuBase_C : public UReplaySubMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_ReplaySubMenuBase_COnMenuPushedDispatcher OnMenuPushedDispatcher;
    void OnMenuPushedDispatcher();
    FWBP_ReplaySubMenuBase_COnMenuPoppedDispatcher OnMenuPoppedDispatcher;
    void OnMenuPoppedDispatcher();
    bool FocusOnPushed;
    class UWBP_ReplaySubMenuBase_C* PreviousMenu;
    float OpacityNotOnTop;
    bool IsOnTop;
    bool ShouldUpdateOnTopOpacity;
    class ABaseReplayController* Controller;
    class UWidget* WidgetToFocusOnPush;
    bool FocusFirstItemOnPushed;
    FWBP_ReplaySubMenuBase_COnConstructedDispatcher OnConstructedDispatcher;
    void OnConstructedDispatcher();
    class UWidget* PreviousWidgetFocused;
    ESlateVisibility PoppedVisibility;
    bool ShouldCloseOtherMenusWhenPushed;
    bool ShouldPreventOtherMenusFromBeingPushed;
    bool UpdateVisibilityWhenNotOnTop;
    ESlateVisibility VisibilityWhenNotOnTop;
    bool PushAvailabilityLayerOnPushed;
    bool PopAvailabilityLayerOnPopped;
    FAvailabilityLayerCaches AvailabilityLayerCaches;
    bool PopSpectatorStateWhenPushed;
    bool HasPopSpectatorState;
    FWBP_ReplaySubMenuBase_COnMenuFocusDispatcher OnMenuFocusDispatcher;
    void OnMenuFocusDispatcher(bool Focused);
    bool IsFocused;
    bool BlockAutoFocus;
    class UReplayKey* SelectedKey;

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
};

#endif
