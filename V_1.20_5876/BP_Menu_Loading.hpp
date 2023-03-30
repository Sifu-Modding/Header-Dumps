#ifndef UE4SS_SDK_BP_Menu_Loading_HPP
#define UE4SS_SDK_BP_Menu_Loading_HPP

class UBP_Menu_Loading_C : public UMenuLoading
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UHorizontalBox* HorizontalBox_GamerTag;                                     // 0x0318 (size: 0x8)
    class UHorizontalBox* HorizontalBox_loading;                                      // 0x0320 (size: 0x8)
    class ULoading_Checkpoint_Background_C* Loading_Checkpoint_Background;            // 0x0328 (size: 0x8)
    class UTextBlock* Ornement;                                                       // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_101;                                                  // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_GamerTag;                                             // 0x0340 (size: 0x8)
    class UThrobber* Throbber_102;                                                    // 0x0348 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicBackgroundMatInst;                         // 0x0350 (size: 0x8)
    float InFadeInTextTotalTime;                                                      // 0x0358 (size: 0x4)
    bool NeedFadeInOnLoadingText;                                                     // 0x035C (size: 0x1)
    float FadeInTextTime;                                                             // 0x0360 (size: 0x4)
    FString playerGamerTag;                                                           // 0x0368 (size: 0x10)
    bool GamerTagDisplayed;                                                           // 0x0378 (size: 0x1)
    float TimerBeforeShowingText;                                                     // 0x037C (size: 0x4)

    void UpdateVisibilityGamerTag();
    void UpdateVisibilityLoading(float DeltaTime);
    ESlateVisibility OrnementDisplay();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_Reinit();
    void ExecuteUbergraph_BP_Menu_Loading(int32 EntryPoint);
}; // Size: 0x380

#endif
