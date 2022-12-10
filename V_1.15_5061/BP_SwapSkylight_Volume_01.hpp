#ifndef UE4SS_SDK_BP_SwapSkylight_Volume_01_HPP
#define UE4SS_SDK_BP_SwapSkylight_Volume_01_HPP

class ABP_SwapSkylight_Volume_01_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    bool Adjust Skylight;
    FLinearColor New Skylight Color;
    float New Skylight Intensity;
    class ABP_Swapable_Skylight_C* SkyLight;
    bool EnableDebugView;
    bool Adjust Fog;
    FLinearColor New Fog Color;
    float New Fog Density;
    float New Fog Height Fall Off;
    bool Adjust Volumetric Fog;
    float New Fog Scattering Distribution;
    FColor New Fog Albedo;
    float New Fog Cuttoff Distance;
    float New Fog Extinction Scale;
    FColor New Fog Emissive;
    float New Fog Max Opacity;

    void UserConstructionScript();
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void CopyFromSkylight();
    void SwapSkylight(FLinearColor New Skylight Color, float New Skylight Intensity, FLinearColor New Fog Color, float New Fog Density, float New Fog Max Opacity, float New Fog Height Fall Off, float New Fog Cuttoff Distance, float New Fog Scattering Distribution, FColor New Fog Albedo, FColor New Fog Emissive, float New Fog Extinction Scale, bool b_AdjustSkylight, bool b_AdjustFog, bool b_Adjust Volumetric Fog);
    void TriggerSwap();
    void ExecuteUbergraph_BP_SwapSkylight_Volume_01(int32 EntryPoint);
};

#endif
