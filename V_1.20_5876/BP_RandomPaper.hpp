#ifndef UE4SS_SDK_BP_RandomPaper_HPP
#define UE4SS_SDK_BP_RandomPaper_HPP

class ABP_RandomPaper_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TArray<class UStaticMesh*> MeshArray;                                             // 0x02B8 (size: 0x10)
    float X_length;                                                                   // 0x02C8 (size: 0x4)
    float Y_Length;                                                                   // 0x02CC (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x02D0 (size: 0x8)
    float Scale_min;                                                                  // 0x02D8 (size: 0x4)
    float Scale_max;                                                                  // 0x02DC (size: 0x4)
    int32 NumberOfElements;                                                           // 0x02E0 (size: 0x4)
    float Z_length;                                                                   // 0x02E4 (size: 0x4)
    float RotateX;                                                                    // 0x02E8 (size: 0x4)
    float Rotate_Y;                                                                   // 0x02EC (size: 0x4)
    float Rotate_Z;                                                                   // 0x02F0 (size: 0x4)
    class UMaterialInterface* MaterialOveride;                                        // 0x02F8 (size: 0x8)
    bool OverideMaterial;                                                             // 0x0300 (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> SetMovable;                                 // 0x0301 (size: 0x1)
    float Hue;                                                                        // 0x0304 (size: 0x4)
    float Lightness;                                                                  // 0x0308 (size: 0x4)
    float Satuartion;                                                                 // 0x030C (size: 0x4)
    bool CastShadows;                                                                 // 0x0310 (size: 0x1)
    bool RecieveDecals;                                                               // 0x0311 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x312

#endif
