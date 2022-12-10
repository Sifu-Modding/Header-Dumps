#ifndef UE4SS_SDK_BP_LightSwitch_01_A_1_HPP
#define UE4SS_SDK_BP_LightSwitch_01_A_1_HPP

class ABP_LightSwitch_01_A_1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCVideoPointLightComponent* SCVideoPointLight;
    class UStaticMeshComponent* SM_CeilingLight_Industrial_A_1;
    class UStaticMeshComponent* SM_Lantern_04_A_1;
    class USceneComponent* DefaultSceneRoot;
    FLinearColor LightColor_Village;
    FLinearColor LightColor_NightClub;
    bool StartVillage;
    float Delay;

    void UserConstructionScript();
    void SwitchVillage();
    void SwitchNightclub();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LightSwitch_01_A_1(int32 EntryPoint);
};

#endif
