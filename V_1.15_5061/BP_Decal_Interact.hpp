#ifndef UE4SS_SDK_BP_Decal_Interact_HPP
#define UE4SS_SDK_BP_Decal_Interact_HPP

class ABP_Decal_Interact_C : public AActor
{
    class UStaticMeshComponent* Collider;
    class USceneComponent* Scene;
    class USceneComponent* DefaultSceneRoot;
    class UBillboardComponent* Billboard;
    class UArrowComponent* Arrow;
    class UDecalComponent* Decal;
    FVector Decal Scale;

    void UserConstructionScript();
};

#endif
