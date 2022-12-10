#ifndef UE4SS_SDK_BP_ArenaTargetsObjective_HPP
#define UE4SS_SDK_BP_ArenaTargetsObjective_HPP

class UBP_ArenaTargetsObjective_C : public UArenaTargetsObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_ArenaTargetsObjective_COnCounterIncremented OnCounterIncremented;
    void OnCounterIncremented(class UBP_ArenaTargetsObjective_C* Objective);
    FBP_ArenaTargetsObjective_COnTargetDown OnTargetDown;
    void OnTargetDown(class AAISpawner* TargetDown);
    bool PlayerPawnReady;
    FBP_ArenaTargetsObjective_COnPlayerPawnReady OnPlayerPawnReady;
    void OnPlayerPawnReady();

    void BPE_OnTargetDown(class AAISpawner* _AISpawner);
    void BPE_OnPlayerPawnReady();
    void ExecuteUbergraph_BP_ArenaTargetsObjective(int32 EntryPoint);
    void OnPlayerPawnReady__DelegateSignature();
    void OnTargetDown__DelegateSignature(class AAISpawner* TargetDown);
    void OnCounterIncremented__DelegateSignature(class UBP_ArenaTargetsObjective_C* Objective);
};

#endif
