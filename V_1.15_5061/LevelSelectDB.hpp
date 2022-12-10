#ifndef UE4SS_SDK_LevelSelectDB_HPP
#define UE4SS_SDK_LevelSelectDB_HPP

class ULevelSelectDB_C : public UObject
{
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_1080p;
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_2160p;
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_4K2K;

};

#endif
