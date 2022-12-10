#ifndef UE4SS_SDK_BP_CorridorFlickingLight_01_A_HPP
#define UE4SS_SDK_BP_CorridorFlickingLight_01_A_HPP

class ABP_CorridorFlickingLight_01_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float LightFlick_Timming_DoorLight_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_9_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_8_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_7_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_6_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_5_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_4_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_3_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_2_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_1_6DE14D184931ED2CBFD5E2B8408ED7F1;
    float LightFlick_Timming_Light_0_6DE14D184931ED2CBFD5E2B8408ED7F1;
    TEnumAsByte<ETimelineDirection::Type> LightFlick_Timming__Direction_6DE14D184931ED2CBFD5E2B8408ED7F1;
    class UTimelineComponent* LightFlick_Timming;
    TArray<FName> FlickLightsMPCNames;
    TArray<float> FlickLightsFloatAnimation;
    TArray<FActorArrayArray> LightGrps;
    class ALight* DoorLight;
    int32 Selected_Index;
    class UAkAudioEvent* Ak Event;
    TArray<FVector> Sound Group Position;
    bool Is On/Off;
    bool hideLight;
    bool IsSWAP;
    TArray<class AStaticMeshActor*> EmissivePlanes;
    float PlanesIntensity;
    float DoorLightIntensity;
    int32 NumberOfWaves;
    TArray<FColor> DoorColor;
    int32 ColorIndex;

    void UserConstructionScript();
    void LightFlick_Timming__FinishedFunc();
    void LightFlick_Timming__UpdateFunc();
    void LightFlick_Timming__NewTrack_0__EventFunc();
    void LightFlick_Timming__WaveLoop__EventFunc();
    void StartLightFlick_1();
    void StopLightflick_1();
    void CallLightSound(FString CueName);
    void NeonCorridor_Start();
    void Destroylight();
    void SWAP();
    void NoNeonCorridor();
    void ExecuteUbergraph_BP_CorridorFlickingLight_01_A(int32 EntryPoint);
};

#endif
