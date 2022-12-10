#ifndef UE4SS_SDK_BP_Light_Lantern_01_A_1_HPP
#define UE4SS_SDK_BP_Light_Lantern_01_A_1_HPP

class ABP_Light_Lantern_01_A_1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_FakeVolumetric_Sphere_01_A_1;
    class UParticleSystemComponent* P_Sparkles_01_A_1;
    class UPointLightComponent* PL_Movable;
    class UPointLightComponent* PL_Static;
    class UStaticMeshComponent* SM_NightClub_Lantern_02_A_1;
    class USceneComponent* DefaultSceneRoot;
    float PL_Static_Intensity;
    float PL_Static_SourceRadius;
    float PL_Static_AttenuationRadius;
    class UMaterialInstanceDynamic* LightFunctionMID;
    class UMaterialInstanceDynamic* LanternMID;
    float Light Function | Time Multiplier;
    float Light Function | Time Offset;
    bool Light Function | Invert Attenuation;
    float Lantern Swing | Swing Intensity;
    FLinearColor Fake Volumetric Color;
    float Fake Volumetric Intensity;
    bool Fake Volumetric Visibility;

    void SetupLightFunctionParameters();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Light_Lantern_01_A_1(int32 EntryPoint);
};

#endif
