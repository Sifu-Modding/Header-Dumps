#ifndef UE4SS_SDK_BP_DrugLab_Cluster_Storage_01_A_1_HPP
#define UE4SS_SDK_BP_DrugLab_Cluster_Storage_01_A_1_HPP

class ABP_DrugLab_Cluster_Storage_01_A_1_C : public AActor
{
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalImpactComponent;
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;
    class USplineComponent* Spline1;
    class UBoxComponent* TakedownTrigger;
    class UStaticMeshComponent* SM_Storage_01_B_3;
    class UStaticMeshComponent* SM_Storage_01_B_2;
    class UStaticMeshComponent* SM_Storage_01_B_1;
    class UStaticMeshComponent* SM_Storage_01_A_1;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
};

#endif
