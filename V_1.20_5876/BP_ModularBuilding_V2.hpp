#ifndef UE4SS_SDK_BP_ModularBuilding_V2_HPP
#define UE4SS_SDK_BP_ModularBuilding_V2_HPP

class ABP_ModularBuilding_V2_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    int32 NumberOfLength;                                                             // 0x02B8 (size: 0x4)
    int32 NumberOfFloor;                                                              // 0x02BC (size: 0x4)
    TArray<class UStaticMesh*> Modules;                                               // 0x02C0 (size: 0x10)
    class UStaticMesh* ModuleExtremities;                                             // 0x02D0 (size: 0x8)
    class UStaticMesh* ModuleReference;                                               // 0x02D8 (size: 0x8)
    TArray<class UStaticMeshComponent*> ModulesArray;                                 // 0x02E0 (size: 0x10)
    float HueValue;                                                                   // 0x02F0 (size: 0x4)
    float IntensityValue;                                                             // 0x02F4 (size: 0x4)
    float SaturationValue;                                                            // 0x02F8 (size: 0x4)
    int32 NumberOfDepth;                                                              // 0x02FC (size: 0x4)
    bool UseDepth;                                                                    // 0x0300 (size: 0x1)
    bool SpecificExtermities;                                                         // 0x0301 (size: 0x1)
    int32 ActualFloor;                                                                // 0x0304 (size: 0x4)
    bool JunkFacade;                                                                  // 0x0308 (size: 0x1)
    int32 JunksElementsNumber;                                                        // 0x030C (size: 0x4)
    TArray<class UStaticMesh*> JunkMeshs;                                             // 0x0310 (size: 0x10)
    float JunkHeightOffset;                                                           // 0x0320 (size: 0x4)
    int32 RoofElementsNumber;                                                         // 0x0324 (size: 0x4)
    TArray<class UStaticMesh*> RoofMeshs;                                             // 0x0328 (size: 0x10)
    bool JunkRoof;                                                                    // 0x0338 (size: 0x1)
    float RoofElementMaxOffset;                                                       // 0x033C (size: 0x4)
    float RoofHeightOffsetMax;                                                        // 0x0340 (size: 0x4)
    FStruc_ProceduralFloors ProceduralFloor;                                          // 0x0348 (size: 0xC0)
    float OffsetMaxModule;                                                            // 0x0408 (size: 0x4)
    TArray<class UStaticMeshComponent*> ModulesArrayDepth;                            // 0x0410 (size: 0x10)
    float DepthOffsetX;                                                               // 0x0420 (size: 0x4)
    float DepthOffsetY;                                                               // 0x0424 (size: 0x4)
    bool UseSpecificDepthModule;                                                      // 0x0428 (size: 0x1)
    class UStaticMesh* ModuleDepthSpecific;                                           // 0x0430 (size: 0x8)
    float OffsetDepthMaxModule;                                                       // 0x0438 (size: 0x4)
    class UMaterialInstance* IDMaterial_0;                                            // 0x0440 (size: 0x8)
    class UMaterialInstance* IDMaterial_1;                                            // 0x0448 (size: 0x8)
    class UMaterialInstance* IDMaterial_2;                                            // 0x0450 (size: 0x8)
    FRandomStream RandomStream;                                                       // 0x0458 (size: 0x8)

    void Add and Init Junk(const FTransform RelativeTransform, TArray<class UStaticMesh*>& RandomMeshArray);
    class UStaticMeshComponent* AddAndInitStaticMeshComponent(const FTransform RelativeTransform);
    FTransform ComputeDepthModuleTransform(int32 DepthIndex, int32 LengthIndex, float YScale);
    void AddJunkFaçadeDepth();
    void SetModule(TArray<class UStaticMeshComponent*>& ComponentArray, class UStaticMesh* SpecificMesh);
    void SetDepth(int32 Index);
    void AddRoofJunk();
    void AddJunkFaçade();
    void SetLastColumn();
    void SetFirstColumn();
    void GetBoundingBoxLength(float& X, float& Y, float& Z);
    void Init Module(class UStaticMeshComponent* Component, class UStaticMesh* MeshModule);
    void SetModule_old();
    void UserConstructionScript();
}; // Size: 0x460

#endif
