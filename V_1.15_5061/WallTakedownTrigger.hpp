#ifndef UE4SS_SDK_WallTakedownTrigger_HPP
#define UE4SS_SDK_WallTakedownTrigger_HPP

class AWallTakedownTrigger_C : public AActor
{
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;
    class USplineComponent* Spline;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    FVector BoxSize;

    void UserConstructionScript();
};

#endif
