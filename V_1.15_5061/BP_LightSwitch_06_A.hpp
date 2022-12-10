#ifndef UE4SS_SDK_BP_LightSwitch_06_A_HPP
#define UE4SS_SDK_BP_LightSwitch_06_A_HPP

class ABP_LightSwitch_06_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_FloodLight_05_B_1;
    class UStaticMeshComponent* SM_FloodLight_05_A_1;
    class UStaticMeshComponent* SM_Lantern_04_A_1;
    class USceneComponent* DefaultSceneRoot;
    FLinearColor LightColor_Village;
    FLinearColor LightColor_NightClub;
    bool StartVillage;
    bool IsMeshSwitch?;
    bool LightOff;
    float LightIntensityFireVillage;
    float LightIntensityNightClub;
    float VolumetricFog;
    float LightTemperatureFireVillage;
    float LightTemperatureNightClub;
    float LightBulbEmissiveIntensity;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SwitchVillage();
    void SwitchNightclub();
    void ExecuteUbergraph_BP_LightSwitch_06_A(int32 EntryPoint);
};

#endif
