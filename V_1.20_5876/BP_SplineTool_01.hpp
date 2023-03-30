#ifndef UE4SS_SDK_BP_SplineTool_01_HPP
#define UE4SS_SDK_BP_SplineTool_01_HPP

class ABP_SplineTool_01_C : public AActor
{
    class USceneComponent* Scene;                                                     // 0x02B0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02B8 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x02C0 (size: 0x8)
    FVector2D Width;                                                                  // 0x02C8 (size: 0x8)
    class UMaterialInstance* Material;                                                // 0x02D0 (size: 0x8)
    bool Cast Shadows;                                                                // 0x02D8 (size: 0x1)
    bool Is Complex;                                                                  // 0x02D9 (size: 0x1)
    bool Is Start Node;                                                               // 0x02DA (size: 0x1)
    class UStaticMesh* Start Mesh;                                                    // 0x02E0 (size: 0x8)
    bool Is End Node;                                                                 // 0x02E8 (size: 0x1)
    class UStaticMesh* Middle Mesh 01;                                                // 0x02F0 (size: 0x8)
    bool Is Variation;                                                                // 0x02F8 (size: 0x1)
    int32 FrequenceSpecificLoop;                                                      // 0x02FC (size: 0x4)
    class UStaticMesh* Middle Mesh 02;                                                // 0x0300 (size: 0x8)
    class UStaticMesh* End Mesh;                                                      // 0x0308 (size: 0x8)
    float AsFadeCam = 0;                                                              // 0x0310 (size: 0x4)
    float Hue;                                                                        // 0x0314 (size: 0x4)
    float Lightness;                                                                  // 0x0318 (size: 0x4)
    float Saturation;                                                                 // 0x031C (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x320

#endif
