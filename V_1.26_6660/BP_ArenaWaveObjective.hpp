#ifndef UE4SS_SDK_BP_ArenaWaveObjective_HPP
#define UE4SS_SDK_BP_ArenaWaveObjective_HPP

class UBP_ArenaWaveObjective_C : public UArenaWaveObjective
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void BPE_SetObjectiveAlmostCompleted();
    void BPE_Shutdown();
    void ExecuteUbergraph_BP_ArenaWaveObjective(int32 EntryPoint);
}; // Size: 0x298

#endif
