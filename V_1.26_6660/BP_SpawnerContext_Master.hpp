#ifndef UE4SS_SDK_BP_SpawnerContext_Master_HPP
#define UE4SS_SDK_BP_SpawnerContext_Master_HPP

class ABP_SpawnerContext_Master_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    bool UseFadeCam;                                                                  // 0x0348 (size: 0x1)
    float Hue;                                                                        // 0x034C (size: 0x4)
    float Lightness;                                                                  // 0x0350 (size: 0x4)
    float Saturation;                                                                 // 0x0354 (size: 0x4)

    void DisableCameraFade();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpawnerContext_Master(int32 EntryPoint);
}; // Size: 0x358

#endif
