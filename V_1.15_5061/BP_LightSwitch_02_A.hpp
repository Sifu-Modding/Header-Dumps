#ifndef UE4SS_SDK_BP_LightSwitch_02_A_HPP
#define UE4SS_SDK_BP_LightSwitch_02_A_HPP

class ABP_LightSwitch_02_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_FloodLight_05_B_1;
    class UStaticMeshComponent* SM_FloodLight_05_A_1;
    class UStaticMeshComponent* SM_Lantern_04_A_1;
    class USceneComponent* DefaultSceneRoot;
    bool LightOff;
    float LightIntensityNightClub;
    float LightTemperatureNightClub;
    float VolumetricFogNightClub;
    class UMaterialInstance* MaterialLightOn;
    class UMaterialInstance* MaterialLightOff;
    float VolumetricFogOff;
    float LightIntensityOff;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void TurnOffLight();
    void TurnOnLight();
    void ExecuteUbergraph_BP_LightSwitch_02_A(int32 EntryPoint);
};

#endif
