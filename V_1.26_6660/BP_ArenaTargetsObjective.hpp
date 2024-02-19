#ifndef UE4SS_SDK_BP_ArenaTargetsObjective_HPP
#define UE4SS_SDK_BP_ArenaTargetsObjective_HPP

class UBP_ArenaTargetsObjective_C : public UArenaTargetsObjective
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    FBP_ArenaTargetsObjective_COnCounterIncremented OnCounterIncremented;             // 0x02F0 (size: 0x10)
    void OnCounterIncremented(class UBP_ArenaTargetsObjective_C* Objective);
    FBP_ArenaTargetsObjective_COnTargetDown OnTargetDown;                             // 0x0300 (size: 0x10)
    void OnTargetDown(class AAISpawner* TargetDown);
    bool PlayerPawnReady;                                                             // 0x0310 (size: 0x1)
    FBP_ArenaTargetsObjective_COnPlayerPawnReady OnPlayerPawnReady;                   // 0x0318 (size: 0x10)
    void OnPlayerPawnReady();

    void BPE_OnTargetDown(class AAISpawner* _AISpawner);
    void BPE_OnPlayerPawnReady();
    void BPE_SetObjectiveAlmostCompleted();
    void BPE_Shutdown();
    void ExecuteUbergraph_BP_ArenaTargetsObjective(int32 EntryPoint);
    void OnPlayerPawnReady__DelegateSignature();
    void OnTargetDown__DelegateSignature(class AAISpawner* TargetDown);
    void OnCounterIncremented__DelegateSignature(class UBP_ArenaTargetsObjective_C* Objective);
}; // Size: 0x328

#endif
