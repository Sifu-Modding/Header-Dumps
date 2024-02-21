#ifndef UE4SS_SDK_BP_LifestealFoes_HPP
#define UE4SS_SDK_BP_LifestealFoes_HPP

class UBP_LifestealFoes_C : public ULifestealFoesCheatData
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    FLifeStealFoesStruct DefaultConfig;                                               // 0x0048 (size: 0x14)
    FLifeStealFoesStruct HardDifficultyConfig;                                        // 0x005C (size: 0x14)
    float fLifeMaxTresholdOnBoss;                                                     // 0x0070 (size: 0x4)
    float fHealthRecoverOnBoss;                                                       // 0x0074 (size: 0x4)
    float fStructureRecoverOnBoss;                                                    // 0x0078 (size: 0x4)
    float fHealthRecoverOnChipDamage;                                                 // 0x007C (size: 0x4)
    float fStructureRecoverOnChipDamage;                                              // 0x0080 (size: 0x4)

    void ComputeLifesteal(class AFightingCharacter* FightingChar, FLifeStealFoesStruct LifeStealParams);
    void HealInstigator(class UCharacterHealthComponent* InputPin, float RecoveryPercentage);
    void IncreaseStructureGauge(class UDefenseComponent* DefenseComponent, float RecoveryPercentage);
    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
    void BPE_OnPlayerHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void ExecuteUbergraph_BP_LifestealFoes(int32 EntryPoint);
}; // Size: 0x84

#endif
