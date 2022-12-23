#ifndef UE4SS_SDK_WudePalace_MAP_HPP
#define UE4SS_SDK_WudePalace_MAP_HPP

class AWudePalace_MAP_C : public AThePlainesLDLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_FightingPlayer_C* Player;
    class AModeManager_C* ModeManager;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_WudePalace_MAP(int32 EntryPoint);
};

#endif
