#ifndef UE4SS_SDK_BP_NeonCorridor_PointLight_01_A_1_HPP
#define UE4SS_SDK_BP_NeonCorridor_PointLight_01_A_1_HPP

class ABP_NeonCorridor_PointLight_01_A_1_C : public APointLight
{
    class UStaticMeshComponent* StaticMesh;
    FColor ColorLight;
    float FlickLightSequence;
    class UMaterial* MaterialEmissive;
    float BaseIntensity;

    void UserConstructionScript();
};

#endif
