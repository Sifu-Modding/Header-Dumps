#ifndef UE4SS_SDK_BP_HUD_ArenaContainer_HPP
#define UE4SS_SDK_BP_HUD_ArenaContainer_HPP

class UBP_HUD_ArenaContainer_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UBP_HUD_Arena_C* BP_HUD_Arena;                                              // 0x03A0 (size: 0x8)
    class UBP_HUD_ArenaObjective_C* BP_HUD_ArenaObjective;                            // 0x03A8 (size: 0x8)
    class UBP_HUD_HardpointBar_C* BP_HUD_HardpointBar;                                // 0x03B0 (size: 0x8)
    class UCanvasPanel* HUDSubContainer;                                              // 0x03B8 (size: 0x8)
    float HUDScaleValue;                                                              // 0x03C0 (size: 0x4)
    class UBP_HUD_EventDispatcher_C* EventDispatcher;                                 // 0x03C8 (size: 0x8)

    void GetHUDEventDispatcher(class UBP_HUD_EventDispatcher_C*& EventDispatcher);
    void GetHudScaleValue(float& Value);
    void OnPlayerGetInitialControl();
    void OnArenaObjectiveStart();
    void OnStartTimerElapsed();
    void OnHidden();
    void BPE_BindToDelegates(bool _bPawnOnly);
    void OnVisible();
    void ScaleHUD(bool SetDefault);
    void OnInitialized();
    void ExecuteUbergraph_BP_HUD_ArenaContainer(int32 EntryPoint);
}; // Size: 0x3D0

#endif
