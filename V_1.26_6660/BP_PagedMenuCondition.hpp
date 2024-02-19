#ifndef UE4SS_SDK_BP_PagedMenuCondition_HPP
#define UE4SS_SDK_BP_PagedMenuCondition_HPP

class UBP_PagedMenuCondition_C : public UObject
{

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x28

#endif
