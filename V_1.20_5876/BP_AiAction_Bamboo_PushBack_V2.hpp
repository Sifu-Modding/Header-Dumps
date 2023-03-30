#ifndef UE4SS_SDK_BP_AiAction_Bamboo_PushBack_V2_HPP
#define UE4SS_SDK_BP_AiAction_Bamboo_PushBack_V2_HPP

class UBP_AiAction_Bamboo_PushBack_V2_C : public UBP_AiAction_StandardAttack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    float Bamboo Spawn Distance;                                                      // 0x0198 (size: 0x4)

    void SelectBambooToSpawn(TSubclassOf<class ASCActor>& Bamboo);
    void Spawn Bamboo(class AActor* Owner, const FTransform& _transform, class ABP_SliceBamboo_C*& NewParam);
    void On Hit Target(EGuardType GuardType);
    void ExecuteUbergraph_BP_AiAction_Bamboo_PushBack_V2(int32 EntryPoint);
}; // Size: 0x19C

#endif
