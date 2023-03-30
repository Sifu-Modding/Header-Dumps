#ifndef UE4SS_SDK_BP_ArenaHardpointsObjective_HPP
#define UE4SS_SDK_BP_ArenaHardpointsObjective_HPP

class UBP_ArenaHardpointsObjective_C : public UArenaHardpointsObjective
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    FBP_ArenaHardpointsObjective_COnPlayerReady OnPlayerReady;                        // 0x0310 (size: 0x10)
    void OnPlayerReady();

    void BPE_Init();
    void OnGiveInitialControlToPlayerBP();
    void BPE_OnTimerEnded();
    void BPE_OnPlayerPawnReady();
    void ExecuteUbergraph_BP_ArenaHardpointsObjective(int32 EntryPoint);
    void OnPlayerReady__DelegateSignature();
}; // Size: 0x320

#endif
