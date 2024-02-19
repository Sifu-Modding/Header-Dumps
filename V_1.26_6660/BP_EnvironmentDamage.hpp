#ifndef UE4SS_SDK_BP_EnvironmentDamage_HPP
#define UE4SS_SDK_BP_EnvironmentDamage_HPP

class UBP_EnvironmentDamage_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    FHitRequest HitRequest;                                                           // 0x0040 (size: 0x450)
    FHitBox Hit Request Hit Box;                                                      // 0x0490 (size: 0x298)
    FHitResult Hit Result;                                                            // 0x0728 (size: 0x8C)
    TArray<uint8> OrderIDs;                                                           // 0x07B8 (size: 0x10)
    TArray<EOrderType> OrderToFilerForMultiDamage;                                    // 0x07C8 (size: 0x10)
    bool bIsDamageBlocked;                                                            // 0x07D8 (size: 0x1)

    void CanTakeDamage(bool& Result);
    void OnEndingOrder(uint8 _ID, class UOrderComponent* _OrderComponent);
    void CanInflictMultiDamage(class UOrderComponent* OrderComponent, bool& CanInflictDamage);
    void CostlyDamage(class AFightingCharacter* Victim, class AActor* Intigator);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void OnThrowableBroke();
    void ExecuteUbergraph_BP_EnvironmentDamage(int32 EntryPoint);
}; // Size: 0x7D9

#endif
