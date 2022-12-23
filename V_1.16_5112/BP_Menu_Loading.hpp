#ifndef UE4SS_SDK_BP_Menu_Loading_HPP
#define UE4SS_SDK_BP_Menu_Loading_HPP

class UBP_Menu_Loading_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_loading;
    class ULoading_Checkpoint_Background_C* Loading_Checkpoint_Background;
    class UTextBlock* Ornement;
    class UThrobber* Throbber_102;
    class UMaterialInstanceDynamic* DynamicBackgroundMatInst;
    float InFadeInTextTotalTime;
    bool NeedFadeInOnLoadingText;
    float FadeInTextTime;

    void UpdateVisibilityLoading(float DeltaTime, bool& Visibility);
    ESlateVisibility OrnementDisplay();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_Menu_Loading(int32 EntryPoint);
};

#endif
