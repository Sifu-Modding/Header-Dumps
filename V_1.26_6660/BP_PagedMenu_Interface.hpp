#ifndef UE4SS_SDK_BP_PagedMenu_Interface_HPP
#define UE4SS_SDK_BP_PagedMenu_Interface_HPP

class IBP_PagedMenu_Interface_C : public IInterface
{

    void GetCurrentLevelName(FString& bpp__LevelName__pf);
    void GetCurrentGameMode(class AGameModeBase*& bpp__GameMode__pf);
}; // Size: 0x28

#endif
