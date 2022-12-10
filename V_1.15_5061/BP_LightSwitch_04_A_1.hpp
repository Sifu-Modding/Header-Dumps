#ifndef UE4SS_SDK_BP_LightSwitch_04_A_1_HPP
#define UE4SS_SDK_BP_LightSwitch_04_A_1_HPP

class ABP_LightSwitch_04_A_1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USceneComponent* DefaultSceneRoot;
    FLinearColor LightColor_Village;
    FLinearColor LightColor_NightClub;
    bool StartVillage;
    bool LightOff;
    float LightIntensity;

    void UserConstructionScript();
    void SwitchVillage();
    void SwitchNightclub();
    void TurnOffLight();
    void TurnOnLight();
    void ExecuteUbergraph_BP_LightSwitch_04_A_1(int32 EntryPoint);
};

#endif
