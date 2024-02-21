#ifndef UE4SS_SDK_Loading_Checkpoint_Background_HPP
#define UE4SS_SDK_Loading_Checkpoint_Background_HPP

class ULoading_Checkpoint_Background_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UImage* BlackBackground;                                                    // 0x0318 (size: 0x8)
    class UImage* SmokeBackground;                                                    // 0x0320 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicBackgroundMatInst;                         // 0x0328 (size: 0x8)
    float BackgroundFadeDuration;                                                     // 0x0330 (size: 0x4)
    float TotalTime;                                                                  // 0x0334 (size: 0x4)
    class UThePlainesGameInstance* CachedGameInstance;                                // 0x0338 (size: 0x8)

    void UpdateVisual();
    ESlateVisibility OrnementDisplay();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_Loading_Checkpoint_Background(int32 EntryPoint);
}; // Size: 0x340

#endif
