#ifndef UE4SS_SDK_BP_ArenaHardpointsObjective_HPP
#define UE4SS_SDK_BP_ArenaHardpointsObjective_HPP

class UBP_ArenaHardpointsObjective_C : public UArenaHardpointsObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_ArenaHardpointsObjective_COnPlayerReady OnPlayerReady;
    void OnPlayerReady();

    void BPE_Init();
    void OnGiveInitialControlToPlayerBP();
    void BPE_OnTimerEnded();
    void BPE_OnPlayerPawnReady();
    void ExecuteUbergraph_BP_ArenaHardpointsObjective(int32 EntryPoint);
    void OnPlayerReady__DelegateSignature();
};

#endif
