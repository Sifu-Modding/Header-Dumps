#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : public AActor
{
    class UStaticMeshComponent* SkySphereMesh;                                        // 0x02B0 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* Sky material;                                     // 0x02C0 (size: 0x8)
    bool Refresh material;                                                            // 0x02C8 (size: 0x1)
    class ADirectionalLight* Directional light actor;                                 // 0x02D0 (size: 0x8)
    bool Colors determined by sun position;                                           // 0x02D8 (size: 0x1)
    float Sun height;                                                                 // 0x02DC (size: 0x4)
    float Sun brightness;                                                             // 0x02E0 (size: 0x4)
    float Horizon falloff;                                                            // 0x02E4 (size: 0x4)
    FLinearColor Zenith Color;                                                        // 0x02E8 (size: 0x10)
    FLinearColor Horizon color;                                                       // 0x02F8 (size: 0x10)
    FLinearColor Cloud color;                                                         // 0x0308 (size: 0x10)
    FLinearColor Overall color;                                                       // 0x0318 (size: 0x10)
    float Cloud speed;                                                                // 0x0328 (size: 0x4)
    float Cloud opacity;                                                              // 0x032C (size: 0x4)
    float Stars brightness;                                                           // 0x0330 (size: 0x4)
    class UCurveLinearColor* Horizon color curve;                                     // 0x0338 (size: 0x8)
    class UCurveLinearColor* Zenith color curve;                                      // 0x0340 (size: 0x8)
    class UCurveLinearColor* Cloud color curve;                                       // 0x0348 (size: 0x8)

    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript();
}; // Size: 0x350

#endif
