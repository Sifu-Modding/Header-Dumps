#ifndef UE4SS_SDK_BP_CeilingFan_HPP
#define UE4SS_SDK_BP_CeilingFan_HPP

class ABP_CeilingFan_C : public AActor
{
    class UStaticMeshComponent* SM_WuguanFanCeiling_01_A_1;                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* SM_WuguanFanCeilingBase_01_A_1;                       // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    bool Rotating?;                                                                   // 0x02C8 (size: 0x1)
    float Speed;                                                                      // 0x02CC (size: 0x4)
    float Emissive Intensity;                                                         // 0x02D0 (size: 0x4)
    class UMaterialInstance* Bottom_Material;                                         // 0x02D8 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2E0

#endif
