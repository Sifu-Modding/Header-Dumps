#ifndef UE4SS_SDK_EnemySpawner_HPP
#define UE4SS_SDK_EnemySpawner_HPP

class AEnemySpawner_C : public AActor
{
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;
    class ABP_AISpawner_C* AISpawner;

    void GetClass(FWaveEnemy Enemy);
    void RotateTowardsPlayerPoint();
    void SpawnEnemy(TSubclassOf<class ABP_AICharacter_Base_C> Enemy Class);
};

#endif
