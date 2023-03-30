#ifndef UE4SS_SDK_BP_InTrainingPagedMenuCondition_HPP
#define UE4SS_SDK_BP_InTrainingPagedMenuCondition_HPP

class UBP_InTrainingPagedMenuCondition_C : public UBP_PagedMenuCondition_C
{

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x28

#endif
