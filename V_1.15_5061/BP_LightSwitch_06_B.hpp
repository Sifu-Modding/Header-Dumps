#ifndef UE4SS_SDK_BP_LightSwitch_06_B_HPP
#define UE4SS_SDK_BP_LightSwitch_06_B_HPP

class ABP_LightSwitch_06_B_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_FloodLight_05_B_1;
    class UStaticMeshComponent* SM_FloodLight_05_A_1;
    class UStaticMeshComponent* SM_Lantern_04_A_1;
    class USceneComponent* DefaultSceneRoot;
    FLinearColor LightColor;
    bool StartVillage;
    float LightIntensity;
    float LightTemperature;
    float LightBulbEmissiveIntensity;
    float LightLanternEmissiveIntensity;

    void UserConstructionScript();
    void SwitchVillage();
    void SwitchNightclub();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LightSwitch_06_B(int32 EntryPoint);
};

#endif
