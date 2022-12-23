#ifndef UE4SS_SDK_BP_TableTraversal_HPP
#define UE4SS_SDK_BP_TableTraversal_HPP

class ABP_TableTraversal_C : public AStaticMeshActor
{
    class UTraversalComponent* Traversal;
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;
    class USplineComponent* Spline4;
    class USplineComponent* Spline3;
    class USplineComponent* Spline2;
    class USplineComponent* Spline1;
    class UBoxComponent* TakeDownBox;

    void UserConstructionScript();
};

#endif
