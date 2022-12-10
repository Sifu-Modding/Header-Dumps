#ifndef UE4SS_SDK_UESVON_HPP
#define UE4SS_SDK_UESVON_HPP

#include "UESVON_enums.hpp"

class UAITask_SVONMoveTo : public UAITask
{
    FAITask_SVONMoveToOnRequestFailed OnRequestFailed;
    void GenericGameplayTaskDelegate();
    FAITask_SVONMoveToOnMoveFinished OnMoveFinished;
    void SVONMoveTaskCompletedSignature(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    FAIMoveRequest MoveRequest;

    class UAITask_SVONMoveTo* SVONAIMoveTo(class AAIController* Controller, FVector GoalLocation, bool aUseAsyncPathfinding, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, bool bLockAILogic, bool bUseContinuosGoalTracking);
};

class UBTTask_SVONMoveTo : public UBTTask_BlackboardBase
{
    float AcceptableRadius;
    float ObservedBlackboardValueTolerance;
    uint8 bObserveBlackboardValue;
    uint8 bTrackMovingGoal;
    uint8 bReachTestIncludesAgentRadius;
    uint8 bReachTestIncludesGoalRadius;
    bool bUseAsyncPathfinding;

};

class USVONNavigationComponent : public UActorComponent
{
    bool DebugPrintCurrentPosition;
    bool DebugPrintMortonCodes;
    bool DebugDrawOpenNodes;
    bool UseUnitCost;
    float UnitCost;
    float EstimateWeight;
    float NodeSizeCompensation;
    ESVONPathCostType PathCostType;

};

class ASVONVolume : public AVolume
{
    bool myShowMortonCodes;
    bool myShowNeighbourLinks;
    bool myShowParentChildLinks;
    int32 myVoxelPower;
    TEnumAsByte<ECollisionChannel> myCollisionChannel;
    TEnumAsByte<EObjectTypeQuery> myObjectTypes;
    float myClearance;
    ESVOGenerationStrategy myGenerationStrategy;
    uint8 myNumLayers;
    int32 myNumBytes;
    class USVONVolumeRenderingComponent* RenderingComp;

};

class USVONVolumeRenderingComponent : public UPrimitiveComponent
{
};

#endif
