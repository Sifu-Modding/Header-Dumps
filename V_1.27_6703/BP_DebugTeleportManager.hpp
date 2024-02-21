#ifndef UE4SS_SDK_BP_DebugTeleportManager_HPP
#define UE4SS_SDK_BP_DebugTeleportManager_HPP

class ABP_DebugTeleportManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    TArray<class AActor*> DestinationActors;                                          // 0x02C0 (size: 0x10)
    FBP_DebugTeleportManager_CED_TeleportLaunched ED_TeleportLaunched;                // 0x02D0 (size: 0x10)
    void ED_TeleportLaunched(int32 ID);

    void TeleportLaunched(int32 ID);
    void ExecuteUbergraph_BP_DebugTeleportManager(int32 EntryPoint);
    void ED_TeleportLaunched__DelegateSignature(int32 ID);
}; // Size: 0x2E0

#endif
