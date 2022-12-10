#ifndef UE4SS_SDK_BP_AISpawner_HPP
#define UE4SS_SDK_BP_AISpawner_HPP

class ABP_AISpawner_C : public AAISpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_AISpawner_CRespawnFinished RespawnFinished;
    void RespawnFinished(class AActor* AIRespawned);
    FDataTableRowHandle Accessory;
    FString Persistant PositionBaker Name;
    FGameplayTag PickableDetectiveTag;
    FText OnPickedDetectiveActorText;
    FTransform TempSafeTransform;
    int32 ChargesToAddWhenKilled;
    int32 DeathCounterDecreaseWhenKilled;
    bool DeathCounterResetWhenKilled;
    bool IsPooled;
    bool tempDecrementAllowed;

    void Handle Death Bonuses();
    void ComputeDetectiveActorTransform(class ACharacter* InCharacter, FTransform& OutTransform);
    void OnBehaviorChanged(EGlobalBehaviors NewBehavior, const bool FromDialog);
    void SpawnDetectiveActor(class AActor* InActor, uint8 InOrderIdToRemove, FTransform& InTransform);
    void BPE_OnRespawnFinished(class AActor* _ActorAIRespawned);
    void SetupPositionBakerActorForDynamicTextureMask(class AActor* Spawned Actor);
    void BPE_OnIADown(class AActor* _ActorAI);
    void OnHittedOrderEnding(uint8 _ID, class UOrderComponent* _OrderComponent);
    void BPE_OnGeneratePoolActors(class ASCPoolableActorsContainer* _container);
    void ExecuteUbergraph_BP_AISpawner(int32 EntryPoint);
    void RespawnFinished__DelegateSignature(class AActor* AIRespawned);
};

#endif
