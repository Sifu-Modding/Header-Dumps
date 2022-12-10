#ifndef UE4SS_SDK_BP_Light_GlowingGlass_A_HPP
#define UE4SS_SDK_BP_Light_GlowingGlass_A_HPP

class ABP_Light_GlowingGlass_A_C : public AActor
{
    class UStaticMeshComponent* SM_FakeVolumetric_Sphere_01_A_1;
    class UStaticMeshComponent* SM_Glass;
    class UPointLightComponent* PL_Static_Far;
    class UPointLightComponent* PL_Static_Close;
    class USceneComponent* SharedRoot;
    class USceneComponent* DefaultSceneRoot;
    bool Fake Volumetric Visibility;
    float Fake Volumetric Intensity;
    FLinearColor Fake Volumetric Color;

    void UserConstructionScript();
};

#endif
