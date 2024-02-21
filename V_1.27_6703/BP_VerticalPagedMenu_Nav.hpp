#ifndef UE4SS_SDK_BP_VerticalPagedMenu_Nav_HPP
#define UE4SS_SDK_BP_VerticalPagedMenu_Nav_HPP

class UBP_VerticalPagedMenu_Nav_C : public UBP_PagedMenu_Nav_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UVerticalBox* VerticalButtonContainer;                                      // 0x02E0 (size: 0x8)
    bool bIsLeft;                                                                     // 0x02E8 (size: 0x1)

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
}; // Size: 0x2E9

#endif
