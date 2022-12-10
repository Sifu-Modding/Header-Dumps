#ifndef UE4SS_SDK_BP_Cigarette_Sean_HPP
#define UE4SS_SDK_BP_Cigarette_Sean_HPP

class ABP_Cigarette_Sean_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Cigarette_Sean(int32 EntryPoint);
};

#endif
