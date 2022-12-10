#ifndef UE4SS_SDK_BP_CubeLantern_01_A_HPP
#define UE4SS_SDK_BP_CubeLantern_01_A_HPP

class ABP_CubeLantern_01_A_C : public AActor
{
    class UPointLightComponent* PL_Static_Far;
    class UPointLightComponent* PL_Static_Close;
    class UStaticMeshComponent* SM_FakeVolumetric_Sphere_01_A_1;
    class UStaticMeshComponent* Lantern;
    class USceneComponent* SharedRoot;
    class USceneComponent* DefaultSceneRoot;
    bool Fake Volumetric Visibility;
    float PL StaticClose Intensity;
    float PL StaticClose SourceRadius;
    float PL StaticClose AttenuationRadius;
    float PL StaticFar Intensity;
    float PL StaticFarSourceRadius;
    float PL StaticFar AttenuationRadius;
    FLinearColor PL StaticClose Color;
    class UMaterialInstance* LanternMaterial;
    FLinearColor Fake Volumetric Color;
    float Fake Volumetric Intensity;

    void UserConstructionScript();
};

#endif
