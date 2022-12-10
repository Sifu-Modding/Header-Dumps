#ifndef UE4SS_SDK_BP_ModularBuilding_V2_HPP
#define UE4SS_SDK_BP_ModularBuilding_V2_HPP

class ABP_ModularBuilding_V2_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;
    int32 NumberOfLength;
    int32 NumberOfFloor;
    TArray<class UStaticMesh*> Modules;
    class UStaticMesh* ModuleExtremities;
    class UStaticMesh* ModuleReference;
    TArray<class UStaticMeshComponent*> ModulesArray;
    float HueValue;
    float IntensityValue;
    float SaturationValue;
    int32 NumberOfDepth;
    bool UseDepth;
    bool SpecificExtermities;
    int32 ActualFloor;
    bool JunkFacade;
    int32 JunksElementsNumber;
    TArray<class UStaticMesh*> JunkMeshs;
    float JunkHeightOffset;
    int32 RoofElementsNumber;
    TArray<class UStaticMesh*> RoofMeshs;
    bool JunkRoof;
    float RoofElementMaxOffset;
    float RoofHeightOffsetMax;
    FStruc_ProceduralFloors ProceduralFloor;
    float OffsetMaxModule;
    TArray<class UStaticMeshComponent*> ModulesArrayDepth;
    float DepthOffsetX;
    float DepthOffsetY;
    bool UseSpecificDepthModule;
    class UStaticMesh* ModuleDepthSpecific;
    float OffsetDepthMaxModule;
    class UMaterialInstance* IDMaterial_0;
    class UMaterialInstance* IDMaterial_1;
    class UMaterialInstance* IDMaterial_2;
    FRandomStream RandomStream;

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
};

#endif
