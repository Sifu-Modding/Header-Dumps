#ifndef UE4SS_SDK_BP_MainFloor_FakeLiightingAnimation_HPP
#define UE4SS_SDK_BP_MainFloor_FakeLiightingAnimation_HPP

class ABP_MainFloor_FakeLiightingAnimation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Light_Scenario_3___Chaotic_F4B11BA44E61E885183818B4D6630331;
    float Timeline_0_Light_Scenario_2_F4B11BA44E61E885183818B4D6630331;
    float Timeline_0_Light_Scenario_1_F4B11BA44E61E885183818B4D6630331;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F4B11BA44E61E885183818B4D6630331;
    class UTimelineComponent* Timeline_0;
    FLinearColor Color;
    TArray<FActorArrayArray> LightGrps;
    TArray<float> FlickLightsFloatAnimation;
    float MinIntensity;
    float MaxIntensity;
    TArray<FName> FlickLightsMPCNames;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void CE Loop Curve Animation();
    void ExecuteUbergraph_BP_MainFloor_FakeLiightingAnimation(int32 EntryPoint);
};

#endif
