#ifndef UE4SS_SDK_BP_StaticBreakable_Traversal_HPP
#define UE4SS_SDK_BP_StaticBreakable_Traversal_HPP

class ABP_StaticBreakable_Traversal_C : public ABP_StaticBreakable_LD_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;
    class UBoxComponent* TakeDownBox;
    class USplineComponent* Spline1;
    class UTraversalComponent* Traversal;
    int32 UseCount;

    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    void UpdateIsDamageale();
    void UserConstructionScript();
    void OnDestructionFracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    void BndEvt__BP_StaticBreakable_Traversal_Traversal_K2Node_ComponentBoundEvent_0_TraversalUsageDelegate__DelegateSignature(class UTraversalComponent* _traversalComponent);
    void BndEvt__BP_StaticBreakable_Traversal_Traversal_K2Node_ComponentBoundEvent_1_TraversalUsageDelegate__DelegateSignature(class UTraversalComponent* _traversalComponent);
    void ExecuteUbergraph_BP_StaticBreakable_Traversal(int32 EntryPoint);
};

#endif
