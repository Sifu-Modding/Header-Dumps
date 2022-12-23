#ifndef UE4SS_SDK_WBP_ReplayHideUIMode_HPP
#define UE4SS_SDK_WBP_ReplayHideUIMode_HPP

class UWBP_ReplayHideUIMode_C : public UWBP_UIReplayModeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bRestoreScreenMessages;

    void BPE_OnEnterMode();
    void BPE_OnLeaveMode();
    void ExecuteUbergraph_WBP_ReplayHideUIMode(int32 EntryPoint);
};

#endif
