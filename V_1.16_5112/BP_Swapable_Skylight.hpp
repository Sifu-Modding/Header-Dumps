#ifndef UE4SS_SDK_BP_Swapable_Skylight_HPP
#define UE4SS_SDK_BP_Swapable_Skylight_HPP

class ABP_Swapable_Skylight_C : public ASkyLight
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Sprite1;
    FLinearColor Timeline_0_NewTrack_0_A91027D14306FDC9D3E9A6B5CAF587FD;
    float Timeline_0_timeskylight_A91027D14306FDC9D3E9A6B5CAF587FD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A91027D14306FDC9D3E9A6B5CAF587FD;
    class UTimelineComponent* Timeline_0;
    float Previous Skylight intensity;
    FLinearColor Previous Skylight Color;
    FLinearColor New Skylight Color;
    float New Skylight Intensity;
    float Previous Fog Density;
    FLinearColor Previous Fog Color;
    float New Fog Density;
    FLinearColor New Fog Color;
    class AExponentialHeightFog* Fog;
    bool Adjust Skylight;
    bool B Adjust Volumetric Fog;
    bool Adjust Fog;
    float Previous Fog Height Falloff;
    FColor Previous Fog Albedo;
    float Previous Scattering Distribution;
    float Previous Extinction Scale;
    float New Fog Height Fall off;
    float New Fog Scattering Distribution;
    FColor New Fog Albedo;
    float new Fog Extinction Scale;
    float Previous Fog Cutoff Distance;
    float New Fog Cutoff Distance;
    FColor New Fog Emissive;
    FColor Previous Fog Emissive;
    float New Fog Max Opacity;
    float Previous Fog Max Opacity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void SwapSkylight(FLinearColor New Skylight Color, float New Skylight Intensity, FLinearColor New Fog Color, float New Fog Density, float New Fog Max Opacity, float New Fog Height Fall off, float New Fog Cuttoff Distance, float New Fog Scattering Distribution, FColor New Fog Albedo, FColor New Fog Emissive, float new Fog Extinction Scale, bool b_AdjustSkylight, bool b_AdjustFog, bool b_Adjust Volumetric Fog);
    void CopyFromSkylight();
    void ExecuteUbergraph_BP_Swapable_Skylight(int32 EntryPoint);
};

#endif
