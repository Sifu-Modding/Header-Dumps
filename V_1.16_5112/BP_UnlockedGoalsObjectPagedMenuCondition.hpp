#ifndef UE4SS_SDK_BP_UnlockedGoalsObjectPagedMenuCondition_HPP
#define UE4SS_SDK_BP_UnlockedGoalsObjectPagedMenuCondition_HPP

class UBP_UnlockedGoalsObjectPagedMenuCondition_C : public UBP_Hideout0MapPagedMenuCondition_C
{
    FGameplayTag ObjectTag;

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
};

#endif
