#ifndef UE4SS_SDK_BP_CurrentMapPagedMenuCondition_HPP
#define UE4SS_SDK_BP_CurrentMapPagedMenuCondition_HPP

class UBP_CurrentMapPagedMenuCondition_C : public UBP_PagedMenuCondition_C
{
    FString MapName;

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
};

#endif
