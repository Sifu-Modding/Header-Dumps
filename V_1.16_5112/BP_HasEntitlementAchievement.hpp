#ifndef UE4SS_SDK_BP_HasEntitlementAchievement_HPP
#define UE4SS_SDK_BP_HasEntitlementAchievement_HPP

class UBP_HasEntitlementAchievement_C : public UAchievementUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName NeededEntitlement;

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_UnlockAchievement_Debug();
    void ExecuteUbergraph_BP_HasEntitlementAchievement(int32 EntryPoint);
};

#endif
