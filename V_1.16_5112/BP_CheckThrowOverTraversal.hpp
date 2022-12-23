#ifndef UE4SS_SDK_BP_CheckThrowOverTraversal_HPP
#define UE4SS_SDK_BP_CheckThrowOverTraversal_HPP

class UBP_CheckThrowOverTraversal_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<TSoftObjectPtr<ABP_TraversalActor_C>> WantedTraversalObstacle;
    TSoftObjectPtr<ABP_AISpawner_C> WantedCharacterForTraversal;

    void BPE_OnOrderStarted(uint8 _orderID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_CheckThrowOverTraversal(int32 EntryPoint);
};

#endif
