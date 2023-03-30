#ifndef UE4SS_SDK_BP_SwapSkylight_Volume_01_HPP
#define UE4SS_SDK_BP_SwapSkylight_Volume_01_HPP

class ABP_SwapSkylight_Volume_01_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02C8 (size: 0x8)
    bool Adjust Skylight;                                                             // 0x02D0 (size: 0x1)
    FLinearColor New Skylight Color;                                                  // 0x02D4 (size: 0x10)
    float New Skylight Intensity;                                                     // 0x02E4 (size: 0x4)
    class ABP_Swapable_Skylight_C* SkyLight;                                          // 0x02E8 (size: 0x8)
    bool EnableDebugView;                                                             // 0x02F0 (size: 0x1)
    bool Adjust Fog;                                                                  // 0x02F1 (size: 0x1)
    FLinearColor New Fog Color;                                                       // 0x02F4 (size: 0x10)
    float New Fog Density;                                                            // 0x0304 (size: 0x4)
    float New Fog Height Fall Off;                                                    // 0x0308 (size: 0x4)
    bool Adjust Volumetric Fog;                                                       // 0x030C (size: 0x1)
    float New Fog Scattering Distribution;                                            // 0x0310 (size: 0x4)
    FColor New Fog Albedo;                                                            // 0x0314 (size: 0x4)
    float New Fog Cuttoff Distance;                                                   // 0x0318 (size: 0x4)
    float New Fog Extinction Scale;                                                   // 0x031C (size: 0x4)
    FColor New Fog Emissive;                                                          // 0x0320 (size: 0x4)
    float New Fog Max Opacity;                                                        // 0x0324 (size: 0x4)

    void UserConstructionScript();
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void CopyFromSkylight();
    void SwapSkylight(FLinearColor New Skylight Color, float New Skylight Intensity, FLinearColor New Fog Color, float New Fog Density, float New Fog Max Opacity, float New Fog Height Fall Off, float New Fog Cuttoff Distance, float New Fog Scattering Distribution, FColor New Fog Albedo, FColor New Fog Emissive, float New Fog Extinction Scale, bool b_AdjustSkylight, bool b_AdjustFog, bool b_Adjust Volumetric Fog);
    void TriggerSwap();
    void ExecuteUbergraph_BP_SwapSkylight_Volume_01(int32 EntryPoint);
}; // Size: 0x328

#endif
