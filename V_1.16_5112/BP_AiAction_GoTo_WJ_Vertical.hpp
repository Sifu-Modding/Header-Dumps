#ifndef UE4SS_SDK_BP_AiAction_GoTo_WJ_Vertical_HPP
#define UE4SS_SDK_BP_AiAction_GoTo_WJ_Vertical_HPP

class UBP_AiAction_GoTo_WJ_Vertical_C : public UBP_AiAction_Attack_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* StartPoint Actor;
    FName WallJumpActor BBKeyName;
    TSubclassOf<class UComboAIConditionFindActorsEnvQuery> Find WJ Condition;
    class AActor* WJ Actor;
    bool Has Reached Jump Point;
    bool Display Debug Infos;
    class AActor* Debug Actor;
    FName WallJumpLocation BBKeyName;
    FVector WJ Location;
    float Min Distance from Goal to  ReEvaluate;

    void Get Attack Class(TSubclassOf<class UAIActionWallJumpAttack>& NewParam);
    void Register To Found WJ Actor();
    void UnRegister To Found WJ Actor();
    bool Compute WJ Jump Point(const class AActor* _wallJumpActor, FVector WallJumpLocation, FVector& _outLocation);
    void Get WJ Actor(class AActor*& WJ Actor);
    FString BPE_GetName();
    void BPE_OnNamedEvent(FName _eventName);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void BPE_OnFinished(bool _bSucceeded);
    void ON Found WJ Actors(const TArray<FComboAIConditionFindActorsEnvQueryResult>& Results);
    void ExecuteUbergraph_BP_AiAction_GoTo_WJ_Vertical(int32 EntryPoint);
};

#endif
