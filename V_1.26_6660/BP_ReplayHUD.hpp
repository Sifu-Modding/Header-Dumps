#ifndef UE4SS_SDK_BP_ReplayHUD_HPP
#define UE4SS_SDK_BP_ReplayHUD_HPP

class ABP_ReplayHUD_C : public AReplayHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0468 (size: 0x8)
    float IconPadding;                                                                // 0x0470 (size: 0x4)
    float IconSize;                                                                   // 0x0474 (size: 0x4)

    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BP_ReplayHUD(int32 EntryPoint);
}; // Size: 0x478

#endif
