#ifndef UE4SS_SDK_BP_CheckThrowOverTraversal_HPP
#define UE4SS_SDK_BP_CheckThrowOverTraversal_HPP

class UBP_CheckThrowOverTraversal_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TArray<TSoftObjectPtr<ABP_TraversalActor_C>> WantedTraversalObstacle;             // 0x01F0 (size: 0x10)
    TSoftObjectPtr<ABP_AISpawner_C> WantedCharacterForTraversal;                      // 0x0200 (size: 0x28)

    void BPE_OnOrderStarted(uint8 _orderID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_CheckThrowOverTraversal(int32 EntryPoint);
}; // Size: 0x228

#endif
