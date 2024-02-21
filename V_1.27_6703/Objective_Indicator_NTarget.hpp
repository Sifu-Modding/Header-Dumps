#ifndef UE4SS_SDK_Objective_Indicator_NTarget_HPP
#define UE4SS_SDK_Objective_Indicator_NTarget_HPP

class UObjective_Indicator_NTarget_C : public UHUDObjectiveIndicator
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UWidgetAnimation* Pulse;                                                    // 0x03E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_94;                                               // 0x03F0 (size: 0x8)
    class UOverlay* diamond;                                                          // 0x03F8 (size: 0x8)
    FTimerHandle RefreshPulseTimerHandle;                                             // 0x0400 (size: 0x8)

    void RefreshPulseState();
    void UpdateLocalScale(FVector2D Scale);
    void DisableIndicator();
    void EnableIndicator();
    void Construct();
    void Destruct();
    void OnInitialized();
    void BPE_OnShownStateChanged();
    void ExecuteUbergraph_Objective_Indicator_NTarget(int32 EntryPoint);
}; // Size: 0x408

#endif
