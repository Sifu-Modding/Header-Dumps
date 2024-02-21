#ifndef UE4SS_SDK_WBP_HUD_Replay_AutoSave_HPP
#define UE4SS_SDK_WBP_HUD_Replay_AutoSave_HPP

class UWBP_HUD_Replay_AutoSave_C : public UBP_HUD_AutoSave_C
{
    float CurrentTimeDisplayed;                                                       // 0x03E0 (size: 0x4)
    bool K2Node_Event__bSaveInProgress;                                               // 0x03E4 (size: 0x1)
    ESaveResult K2Node_Event__eSaveResult;                                            // 0x03E5 (size: 0x1)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x03E8 (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x0420 (size: 0x4)

    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
}; // Size: 0x428

#endif
