#ifndef UE4SS_SDK_BP_GameMode_PagedMenuCondition_HPP
#define UE4SS_SDK_BP_GameMode_PagedMenuCondition_HPP

class UBP_GameMode_PagedMenuCondition_C : public UBP_PagedMenuCondition_C
{
    TSoftClassPtr<AGameModeBase> GameModeToTest;                                      // 0x0028 (size: 0x28)

    void ShouldShowMenu(TScriptInterface<class IBP_PagedMenu_Interface_C> InPagedMenuInterface, class APlayerController* InOwningController, bool& OutShouldShow);
}; // Size: 0x50

#endif
