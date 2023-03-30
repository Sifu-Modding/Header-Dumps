#ifndef UE4SS_SDK_BP_LevelSelectNotebook3D_HPP
#define UE4SS_SDK_BP_LevelSelectNotebook3D_HPP

class ABP_LevelSelectNotebook3D_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* SM_WuguanNotebook_01_B_1;                             // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    TArray<class UStaticMesh*> MaskListSpare;                                         // 0x02C8 (size: 0x10)
    TArray<class UStaticMesh*> MaskList;                                              // 0x02D8 (size: 0x10)
    bool FajarKilled;                                                                 // 0x02E8 (size: 0x1)
    bool SeanKilled;                                                                  // 0x02E9 (size: 0x1)
    bool KurokiKilled;                                                                // 0x02EA (size: 0x1)
    bool FengJieKilled;                                                               // 0x02EB (size: 0x1)
    bool YangKilled;                                                                  // 0x02EC (size: 0x1)
    bool FajarSpared;                                                                 // 0x02ED (size: 0x1)
    bool SeanSpared;                                                                  // 0x02EE (size: 0x1)
    bool KurokiSpared;                                                                // 0x02EF (size: 0x1)
    bool FengJieSpared;                                                               // 0x02F0 (size: 0x1)
    bool YangSpared;                                                                  // 0x02F1 (size: 0x1)
    bool UseDebug;                                                                    // 0x02F2 (size: 0x1)
    TArray<TEnumAsByte<EBossTag>> eBossTags;                                          // 0x02F8 (size: 0x10)

    void SetupDebug();
    void SetupListAndWude();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnGiveInitialControlToPlayer_Event();
    void ExecuteUbergraph_BP_LevelSelectNotebook3D(int32 EntryPoint);
}; // Size: 0x308

#endif
