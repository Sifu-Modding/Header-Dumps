#ifndef UE4SS_SDK_WBP_UIReplayModeBase_HPP
#define UE4SS_SDK_WBP_UIReplayModeBase_HPP

class UWBP_UIReplayModeBase_C : public UReplayUIModeUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAvailabilityLayerCache OnEnterModePushAvailabilityLayer_Photomode;
    FAvailabilityLayerCache OnEnterModePushAvailabilityLayer_ReplayEditor;

    void OnLeaveMode(FAvailabilityLayerCache& AL);
    void OnEnterMode(FAvailabilityLayerCache& AL);
    void GetMenu(class UReplayMenuWidget*& Menu);
    void GetBaseReplayController(class ABaseReplayController*& BaseReplayController);
    void BPE_OnEnterMode();
    void BPE_OnLeaveMode();
    void ExecuteUbergraph_WBP_UIReplayModeBase(int32 EntryPoint);
};

#endif
