#ifndef UE4SS_SDK_BP_CurrentMapPagedMenuCondition_HPP
#define UE4SS_SDK_BP_CurrentMapPagedMenuCondition_HPP

class UBP_CurrentMapPagedMenuCondition_C : public UBP_PagedMenuCondition_C
{
    FString MapName;                                                                  // 0x0028 (size: 0x10)

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x38

#endif
