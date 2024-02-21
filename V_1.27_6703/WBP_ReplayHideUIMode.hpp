#ifndef UE4SS_SDK_WBP_ReplayHideUIMode_HPP
#define UE4SS_SDK_WBP_ReplayHideUIMode_HPP

class UWBP_ReplayHideUIMode_C : public UWBP_UIReplayModeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    bool bRestoreScreenMessages;                                                      // 0x0398 (size: 0x1)

    void BPE_OnEnterMode();
    void BPE_OnLeaveMode();
    void ExecuteUbergraph_WBP_ReplayHideUIMode(int32 EntryPoint);
}; // Size: 0x399

#endif
