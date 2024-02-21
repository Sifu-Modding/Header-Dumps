#ifndef UE4SS_SDK_BP_ArenaHardpointsObjective_V3_HPP
#define UE4SS_SDK_BP_ArenaHardpointsObjective_V3_HPP

class UBP_ArenaHardpointsObjective_V3_C : public UBP_ArenaHardpointsObjective_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void BPE_SetObjectiveAlmostCompleted();
    void BPE_Shutdown();
    void ExecuteUbergraph_BP_ArenaHardpointsObjective_V3(int32 EntryPoint);
}; // Size: 0x328

#endif
