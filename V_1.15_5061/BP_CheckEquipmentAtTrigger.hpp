#ifndef UE4SS_SDK_BP_CheckEquipmentAtTrigger_HPP
#define UE4SS_SDK_BP_CheckEquipmentAtTrigger_HPP

class UBP_CheckEquipmentAtTrigger_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<ATriggerBox> TriggertoCheck;
    TSoftObjectPtr<ABaseWeapon> EquipmentWanted;

    void OnActorBeginOverlap_Event(class AActor* OverlappedActor, class AActor* OtherActor);
    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_CheckEquipmentAtTrigger(int32 EntryPoint);
};

#endif
