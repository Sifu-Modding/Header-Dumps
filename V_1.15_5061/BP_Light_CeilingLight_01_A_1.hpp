#ifndef UE4SS_SDK_BP_Light_CeilingLight_01_A_1_HPP
#define UE4SS_SDK_BP_Light_CeilingLight_01_A_1_HPP

class ABP_Light_CeilingLight_01_A_1_C : public AActor
{
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight_FOG;
    class UStaticMeshComponent* SM_NightClub_CeilingLight_01_A_1;
    class USceneComponent* DefaultSceneRoot;
    float Emissive Intensity;

    void UserConstructionScript();
};

#endif
