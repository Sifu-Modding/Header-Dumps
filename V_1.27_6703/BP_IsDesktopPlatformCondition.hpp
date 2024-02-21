#ifndef UE4SS_SDK_BP_IsDesktopPlatformCondition_HPP
#define UE4SS_SDK_BP_IsDesktopPlatformCondition_HPP

class UBP_IsDesktopPlatformCondition_C : public UBP_PagedMenuCondition_C
{

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x28

#endif
