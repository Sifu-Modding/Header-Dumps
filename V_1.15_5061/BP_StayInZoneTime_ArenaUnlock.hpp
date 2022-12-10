#ifndef UE4SS_SDK_BP_StayInZoneTime_ArenaUnlock_HPP
#define UE4SS_SDK_BP_StayInZoneTime_ArenaUnlock_HPP

class UBP_StayInZoneTime_ArenaUnlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<ASCPlayerVolume> triggerToStayIn;
    TSoftObjectPtr<ABP_TraversalActor_C> mytraversal;

    void BPE_OnFirstConditionActive();
    void OnEnterTrigger(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnExitTrigger(class AActor* OverlappedActor, class AActor* OtherActor);
    void BPE_OnTimerEnded();
    void ExecuteUbergraph_BP_StayInZoneTime_ArenaUnlock(int32 EntryPoint);
};

#endif
