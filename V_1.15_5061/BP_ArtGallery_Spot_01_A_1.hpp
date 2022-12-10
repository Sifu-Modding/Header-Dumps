#ifndef UE4SS_SDK_BP_ArtGallery_Spot_01_A_1_HPP
#define UE4SS_SDK_BP_ArtGallery_Spot_01_A_1_HPP

class ABP_ArtGallery_Spot_01_A_1_C : public AActor
{
    class UStaticMeshComponent* SM_FakeVolumetric_Cone_01_A_1;
    class USpotLightComponent* Static Spotlight;
    class UStaticMeshComponent* SM_ExhibitionLightProjector_05_A_1;
    class UStaticMeshComponent* SM_ExhibitionLightProjector_06_A_1;
    class USceneComponent* DefaultSceneRoot;
    float Emissive Intensity;
    bool Cast Shadows;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    float Lightness (Material);
    bool Use Static Spotlight;
    bool Fake Volumetric Visibility;
    float Fake Volumetric Intensity;
    FLinearColor Fake Volumetric Color;

    void UserConstructionScript();
};

#endif
