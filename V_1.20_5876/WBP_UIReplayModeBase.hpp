#ifndef UE4SS_SDK_WBP_UIReplayModeBase_HPP
#define UE4SS_SDK_WBP_UIReplayModeBase_HPP

class UWBP_UIReplayModeBase_C : public UReplayUIModeUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    FAvailabilityLayerCache OnEnterModePushAvailabilityLayer_Photomode;               // 0x0340 (size: 0x28)
    FAvailabilityLayerCache OnEnterModePushAvailabilityLayer_ReplayEditor;            // 0x0368 (size: 0x28)

    void OnLeaveMode(FAvailabilityLayerCache& AL);
    void OnEnterMode(FAvailabilityLayerCache& AL);
    void GetMenu(class UReplayMenuWidget*& Menu);
    void GetBaseReplayController(class ABaseReplayController*& BaseReplayController);
    void BPE_OnEnterMode();
    void BPE_OnLeaveMode();
    void ExecuteUbergraph_WBP_UIReplayModeBase(int32 EntryPoint);
}; // Size: 0x390

#endif
