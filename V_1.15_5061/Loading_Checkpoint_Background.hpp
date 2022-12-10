#ifndef UE4SS_SDK_Loading_Checkpoint_Background_HPP
#define UE4SS_SDK_Loading_Checkpoint_Background_HPP

class ULoading_Checkpoint_Background_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BlackBackground;
    class UImage* SmokeBackground;
    class UMaterialInstanceDynamic* DynamicBackgroundMatInst;
    float BackgroundFadeDuration;
    float TotalTime;
    class UThePlainesGameInstance* CachedGameInstance;

    void UpdateVisual();
    ESlateVisibility OrnementDisplay();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_Loading_Checkpoint_Background(int32 EntryPoint);
};

#endif
