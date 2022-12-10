#ifndef UE4SS_SDK_BP_SiteLight_Industrial_A_1_HPP
#define UE4SS_SDK_BP_SiteLight_Industrial_A_1_HPP

class ABP_SiteLight_Industrial_A_1_C : public AActor
{
    class UPointLightComponent* PL_Static_Far_LightBulb;
    class UPointLightComponent* PL_Static_LightBulb;
    class UStaticMeshComponent* SM_CeilingLight;
    class USceneComponent* SharedRoot;
    float Emissive Intensity;
    FLinearColor Emissive Color;

    void UserConstructionScript();
};

#endif
