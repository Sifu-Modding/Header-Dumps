#ifndef UE4SS_SDK_BP_Library_Menu_HPP
#define UE4SS_SDK_BP_Library_Menu_HPP

class UBP_Library_Menu_C : public UBlueprintFunctionLibrary
{

    void HandleMenuCategoryChange(class UButtonUserWidget* bpp__NewButton__pf, class UButtonUserWidget* bpp__PrevButton__pf, class UTableWidget* bpp__Table__pf, class UMenuWidget* bpp__Menu__pf, class UObject* bpp____WorldContext__pf);
    void GetUI_Colors(class UObject* bpp____WorldContext__pf, FUI_Base_Colors& bpp__BaseColors__pf, FUI_GameplayColors& bpp__GameplayColors__pf, FUI_ElementColors& bpp__ElementColors__pf);
    void GetTextStyles(class UObject* bpp____WorldContext__pf, FUI_TextStyles& bpp__TextStyles__pf);
    void GetScrollBoxStyle(class UObject* bpp____WorldContext__pf, FScrollBarStyle& bpp__BarStyleBlackmode__pf, FScrollBarStyle& bpp__BarStyleWhitemode__pf);
    void GetMenuAnimations(class UMenuWidget* bpp__Owner__pf, class UObject* bpp____WorldContext__pf, class UUserWidget*& bpp__Animations__pf);
    void GetHideoutColor(class UObject* bpp____WorldContext__pf, FLinearColor& bpp__HideoutColor__pf);
    void GetHideout(class UObject* bpp____WorldContext__pf, int32& bpp__Hideout__pf);
};

#endif
