#ifndef UE4SS_SDK_ThunderIndoorTrigger_Sifu_P1_HPP
#define UE4SS_SDK_ThunderIndoorTrigger_Sifu_P1_HPP

class AThunderIndoorTrigger_Sifu_P1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight_BounceLight;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USpotLightComponent* SpotLight3_Thunder;
    class USpotLightComponent* SpotLight2_Thunder;
    class USpotLightComponent* SpotLight1_Thunder;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_1CE194FB4D988184FD059E9D88BD9D64;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1CE194FB4D988184FD059E9D88BD9D64;
    class UTimelineComponent* Timeline_0;
    FPostProcessSettings IndoorPPSettings;
    FPostProcessSettings SavePPSettings;
    bool DisableBoxTrigger;
    float Intensity Max Thunder;
    float Intensity Max Bounce;
    FVector Min Max Delay Thunder;
    bool Debug Mode;
    FLinearColor SpotLight Colors;
    bool Activate;

    void Init(FPostProcessSettings Settings);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void CE_LaunchThunder();
    void CooldownLoop();
    void CE_ToggleThunderLoop(bool bActivate);
    void ExecuteUbergraph_ThunderIndoorTrigger_Sifu_P1(int32 EntryPoint);
};

#endif
