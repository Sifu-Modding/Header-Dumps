#ifndef UE4SS_SDK_BP_UnlockedGoalsObjectPagedMenuCondition_HPP
#define UE4SS_SDK_BP_UnlockedGoalsObjectPagedMenuCondition_HPP

class UBP_UnlockedGoalsObjectPagedMenuCondition_C : public UBP_Hideout0MapPagedMenuCondition_C
{
    FGameplayTag ObjectTag;                                                           // 0x0038 (size: 0x8)

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x40

#endif
