#ifndef UE4SS_SDK_BP_AISpawner_HPP
#define UE4SS_SDK_BP_AISpawner_HPP

class ABP_AISpawner_C : public AAISpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    FBP_AISpawner_CRespawnFinished RespawnFinished;                                   // 0x0538 (size: 0x10)
    void RespawnFinished(class AActor* AIRespawned);
    FDataTableRowHandle Accessory;                                                    // 0x0548 (size: 0x10)
    FString Persistant PositionBaker Name;                                            // 0x0558 (size: 0x10)
    FGameplayTag PickableDetectiveTag;                                                // 0x0568 (size: 0x8)
    FText OnPickedDetectiveActorText;                                                 // 0x0570 (size: 0x18)
    FTransform TempSafeTransform;                                                     // 0x0590 (size: 0x30)
    int32 ChargesToAddWhenKilled;                                                     // 0x05C0 (size: 0x4)
    int32 DeathCounterDecreaseWhenKilled;                                             // 0x05C4 (size: 0x4)
    bool DeathCounterResetWhenKilled;                                                 // 0x05C8 (size: 0x1)
    bool IsPooled;                                                                    // 0x05C9 (size: 0x1)
    bool tempDecrementAllowed;                                                        // 0x05CA (size: 0x1)

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
}; // Size: 0x5CB

#endif
