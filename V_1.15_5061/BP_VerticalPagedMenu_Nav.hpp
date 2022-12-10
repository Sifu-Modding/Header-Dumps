#ifndef UE4SS_SDK_BP_VerticalPagedMenu_Nav_HPP
#define UE4SS_SDK_BP_VerticalPagedMenu_Nav_HPP

class UBP_VerticalPagedMenu_Nav_C : public UBP_PagedMenu_Nav_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalButtonContainer;
    bool bIsLeft;

    class UWidget* ButtonNavRulesOnSides(EUINavigation Navigation);
    void SetBtnGamepadNavDisabled(class UBP_Btn_Tab_C* InButton, bool InDisableGamepadNav);
    class UWidget* CustomLoopNavigationDown(EUINavigation Navigation);
    class UWidget* CustomLoopNavigationUp(EUINavigation Navigation);
    void GetButtonContainer(class UPanelWidget*& OutContainer);
    void OnSlotAdded(class UBP_Btn_Tab_C* InBtn, class UPanelSlot* inTab);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_BP_VerticalPagedMenu_Nav(int32 EntryPoint);
};

#endif
