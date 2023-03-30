#ifndef UE4SS_SDK_BP_AiAction_BambooAttack_HPP
#define UE4SS_SDK_BP_AiAction_BambooAttack_HPP

class UBP_AiAction_BambooAttack_C : public UBP_AiAction_Attack_C
{

    void SelectBambooToSpawn(TSubclassOf<class ASCActor>& Bamboo);
    void Spawn Bamboo Cluster(class AActor* Owner, const FTransform& _transform, TSubclassOf<class AActor> Bamboo Cluster Class, class ABP_SliceBamboo_C*& NewParam);
    void Spawn Bamboo(class AActor* Owner, const FTransform& _transform, class ABP_SliceBamboo_C*& NewParam);
    void Spawn Bamboo Relative To Character(FVector Location, bool Relatove To Target, class ABP_SliceBamboo_C*& NewParam);
    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
}; // Size: 0x161

#endif
