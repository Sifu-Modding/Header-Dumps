#ifndef UE4SS_SDK_BP_Swapable_Skylight_HPP
#define UE4SS_SDK_BP_Swapable_Skylight_HPP

class ABP_Swapable_Skylight_C : public ASkyLight
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UBillboardComponent* Sprite1;                                               // 0x02C8 (size: 0x8)
    FLinearColor Timeline_0_NewTrack_0_A91027D14306FDC9D3E9A6B5CAF587FD;              // 0x02D0 (size: 0x10)
    float Timeline_0_timeskylight_A91027D14306FDC9D3E9A6B5CAF587FD;                   // 0x02E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A91027D14306FDC9D3E9A6B5CAF587FD; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)
    float Previous Skylight intensity;                                                // 0x02F0 (size: 0x4)
    FLinearColor Previous Skylight Color;                                             // 0x02F4 (size: 0x10)
    FLinearColor New Skylight Color;                                                  // 0x0304 (size: 0x10)
    float New Skylight Intensity;                                                     // 0x0314 (size: 0x4)
    float Previous Fog Density;                                                       // 0x0318 (size: 0x4)
    FLinearColor Previous Fog Color;                                                  // 0x031C (size: 0x10)
    float New Fog Density;                                                            // 0x032C (size: 0x4)
    FLinearColor New Fog Color;                                                       // 0x0330 (size: 0x10)
    class AExponentialHeightFog* Fog;                                                 // 0x0340 (size: 0x8)
    bool Adjust Skylight;                                                             // 0x0348 (size: 0x1)
    bool B Adjust Volumetric Fog;                                                     // 0x0349 (size: 0x1)
    bool Adjust Fog;                                                                  // 0x034A (size: 0x1)
    float Previous Fog Height Falloff;                                                // 0x034C (size: 0x4)
    FColor Previous Fog Albedo;                                                       // 0x0350 (size: 0x4)
    float Previous Scattering Distribution;                                           // 0x0354 (size: 0x4)
    float Previous Extinction Scale;                                                  // 0x0358 (size: 0x4)
    float New Fog Height Fall Off;                                                    // 0x035C (size: 0x4)
    float New Fog Scattering Distribution;                                            // 0x0360 (size: 0x4)
    FColor New Fog Albedo;                                                            // 0x0364 (size: 0x4)
    float New Fog Extinction Scale;                                                   // 0x0368 (size: 0x4)
    float Previous Fog Cutoff Distance;                                               // 0x036C (size: 0x4)
    float New Fog Cutoff Distance;                                                    // 0x0370 (size: 0x4)
    FColor New Fog Emissive;                                                          // 0x0374 (size: 0x4)
    FColor Previous Fog Emissive;                                                     // 0x0378 (size: 0x4)
    float New Fog Max Opacity;                                                        // 0x037C (size: 0x4)
    float Previous Fog Max Opacity;                                                   // 0x0380 (size: 0x4)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void SwapSkylight(FLinearColor New Skylight Color, float New Skylight Intensity, FLinearColor New Fog Color, float New Fog Density, float New Fog Max Opacity, float New Fog Height Fall Off, float New Fog Cuttoff Distance, float New Fog Scattering Distribution, FColor New Fog Albedo, FColor New Fog Emissive, float New Fog Extinction Scale, bool b_AdjustSkylight, bool b_AdjustFog, bool b_Adjust Volumetric Fog);
    void CopyFromSkylight();
    void ExecuteUbergraph_BP_Swapable_Skylight(int32 EntryPoint);
}; // Size: 0x384

#endif
