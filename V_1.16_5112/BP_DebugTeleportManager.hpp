#ifndef UE4SS_SDK_BP_DebugTeleportManager_HPP
#define UE4SS_SDK_BP_DebugTeleportManager_HPP

class ABP_DebugTeleportManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> DestinationActors;
    FBP_DebugTeleportManager_CED_TeleportLaunched ED_TeleportLaunched;
    void ED_TeleportLaunched(int32 ID);

    void TeleportLaunched(int32 ID);
    void ExecuteUbergraph_BP_DebugTeleportManager(int32 EntryPoint);
    void ED_TeleportLaunched__DelegateSignature(int32 ID);
};

#endif
