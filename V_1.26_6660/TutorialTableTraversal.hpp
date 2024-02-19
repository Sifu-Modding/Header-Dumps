#ifndef UE4SS_SDK_TutorialTableTraversal_HPP
#define UE4SS_SDK_TutorialTableTraversal_HPP

class ATutorialTableTraversal_C : public AStaticMeshActor
{
    class UTraversalComponent* Traversal;                                             // 0x02C0 (size: 0x8)
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;       // 0x02C8 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;           // 0x02D0 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x02D8 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x02E0 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x02E8 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x02F0 (size: 0x8)
    class UBoxComponent* TakeDownBox;                                                 // 0x02F8 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x300

#endif
