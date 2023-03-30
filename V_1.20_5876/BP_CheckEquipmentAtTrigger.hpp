#ifndef UE4SS_SDK_BP_CheckEquipmentAtTrigger_HPP
#define UE4SS_SDK_BP_CheckEquipmentAtTrigger_HPP

class UBP_CheckEquipmentAtTrigger_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TSoftObjectPtr<ATriggerBox> TriggertoCheck;                                       // 0x01F0 (size: 0x28)
    TSoftObjectPtr<ABaseWeapon> EquipmentWanted;                                      // 0x0218 (size: 0x28)

    void OnActorBeginOverlap_Event(class AActor* OverlappedActor, class AActor* OtherActor);
    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_CheckEquipmentAtTrigger(int32 EntryPoint);
}; // Size: 0x240

#endif
