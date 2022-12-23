#ifndef UE4SS_SDK_ModeManager_HPP
#define UE4SS_SDK_ModeManager_HPP

class AModeManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    int32 TotalWaves;
    int32 CurrentWave;
    class UWave_C* WaveTitle;
    class ABP_FightingPlayer_C* Player;
    class AModActor_C* ModActor;
    class UModeUI_C* ModeUI;
    TArray<class ABP_AISpawner_C*> AI Spawners;
    TArray<class AEnemySpawner_C*> Enemy Spawners;
    int32 amountOfEnemies;
    int32 CurrentEnemies;
    TArray<class ABossSpawner_C*> Boss Spawners;
    Fwave wave;
    TArray<FEnemyClass> Grunts;

    void GetRandomItemByHideout(TArray<FEnemyClass>& Array, TEnumAsByte<Hideouts::Type> Hideout, FEnemyClass& Enemy);
    void GetEnemyClass(FWaveEnemy Enemy, TSubclassOf<class ABP_AICharacter_Base_C>& Class);
    void SetModeUI();
    void AddDataTableToMAP(class UDataTable* Table, TArray<FEnemyClass>& Array);
    void CalculateTotalEnemies();
    void ShowBossModels();
    void PlayLevelSequence();
    void DisablePlayerInput(bool Disabled);
    void ResetPlayerPosition();
    void SpawnEnemies();
    void BindButtonsToEvent();
    void PrintMessageToLog(FString Message);
    void ShowWave();
    void ReceiveBeginPlay();
    void ButtonPressed();
    void StartWave();
    void OnEnemyDown(class AAISpawner* Spawner);
    void ExecuteUbergraph_ModeManager(int32 EntryPoint);
};

#endif
