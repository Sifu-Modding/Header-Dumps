#ifndef UE4SS_SDK_BP_AiAction_SpawnBamboo_Then_WallJump_HPP
#define UE4SS_SDK_BP_AiAction_SpawnBamboo_Then_WallJump_HPP

class UBP_AiAction_SpawnBamboo_Then_WallJump_C : public UBP_AiAction_BambooAttack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    FVector Bamboo Spawn Offset;                                                      // 0x0170 (size: 0xC)
    TSubclassOf<class UAIActionWallJumpAttack> Wall Jump Attack;                      // 0x0180 (size: 0x8)

    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_SpawnBamboo_Then_WallJump(int32 EntryPoint);
}; // Size: 0x188

#endif
