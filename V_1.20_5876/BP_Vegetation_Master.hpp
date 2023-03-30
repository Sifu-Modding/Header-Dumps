#ifndef UE4SS_SDK_BP_Vegetation_Master_HPP
#define UE4SS_SDK_BP_Vegetation_Master_HPP

class ABP_Vegetation_Master_C : public ASCStaticMeshPrimInstActor
{
    bool Cast Statics Shadows;                                                        // 0x02C0 (size: 0x1)
    bool bFadeCam;                                                                    // 0x02C1 (size: 0x1)
    bool bEnableWind;                                                                 // 0x02C2 (size: 0x1)
    TArray<class UStaticMeshComponent*> Meshes;                                       // 0x02C8 (size: 0x10)
    float Hue;                                                                        // 0x02D8 (size: 0x4)
    float Lightness;                                                                  // 0x02DC (size: 0x4)
    float Saturation;                                                                 // 0x02E0 (size: 0x4)
    float WindDesactivate;                                                            // 0x02E4 (size: 0x4)
    float RainDesactivate;                                                            // 0x02E8 (size: 0x4)
    FColor ColorBottom;                                                               // 0x02EC (size: 0x4)

    void SetupMeshesArray();
    void SetupCustomPrimitiveData();
    void UserConstructionScript();
}; // Size: 0x2F0

#endif
