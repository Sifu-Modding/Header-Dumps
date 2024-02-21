#ifndef UE4SS_SDK_LevelSelectDB_HPP
#define UE4SS_SDK_LevelSelectDB_HPP

class ULevelSelectDB_C : public UObject
{
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_1080p;            // 0x0028 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_2160p;            // 0x0038 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_4K2K;             // 0x0048 (size: 0x10)

}; // Size: 0x58

#endif
