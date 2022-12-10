#ifndef UE4SS_SDK_BP_ArenaWaveObjective_HPP
#define UE4SS_SDK_BP_ArenaWaveObjective_HPP

class UBP_ArenaWaveObjective_C : public UArenaWaveObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_ArenaWaveObjective(int32 EntryPoint);
};

#endif
