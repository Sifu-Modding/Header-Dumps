#ifndef UE4SS_SDK_EnemySpawner_HPP
#define UE4SS_SDK_EnemySpawner_HPP

class AEnemySpawner_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class ABP_AISpawner_C* AISpawner;                                                 // 0x02C0 (size: 0x8)

    void GetClass(FFallbackStruct Enemy);
    void RotateTowardsPlayerPoint();
    void SpawnEnemy(TSubclassOf<class ABP_AICharacter_Base_C> Enemy Class);
}; // Size: 0x2C8

#endif
