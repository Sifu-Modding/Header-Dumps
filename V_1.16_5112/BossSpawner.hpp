#ifndef UE4SS_SDK_BossSpawner_HPP
#define UE4SS_SDK_BossSpawner_HPP

class ABossSpawner_C : public AActor
{
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;
    class ABP_AISpawner_C* AISpawner;
    class ABP_AICharacter_Boss_Base_C* BossModel;
    FWaveBoss Boss;

    void PlayAnimation();
    void SpawnModel(TSubclassOf<class ABP_AICharacter_Boss_Base_C> Boss);
    void SpawnBoss(TSubclassOf<class ABP_AICharacter_Boss_Base_C> Boss);
};

#endif
