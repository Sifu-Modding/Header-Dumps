#ifndef UE4SS_SDK_BP_Btn_InputTip_Hold_HPP
#define UE4SS_SDK_BP_Btn_InputTip_Hold_HPP

class UBP_Btn_InputTip_Hold_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBorder* BkgBorder;                                                         // 0x0318 (size: 0x8)
    class UCanvasPanel* Canvas;                                                       // 0x0320 (size: 0x8)
    class UBP_Btn_Hold_C* InputTip_Hold;                                              // 0x0328 (size: 0x8)
    class UWidgetSwitcher* Switcher;                                                  // 0x0330 (size: 0x8)
    class UHorizontalBox* Tip_MenuAction;                                             // 0x0338 (size: 0x8)
    class UImage* TipImage;                                                           // 0x0340 (size: 0x8)
    class UTextBlock* TipText;                                                        // 0x0348 (size: 0x8)
    class USizeBox* WidthOverrideBox;                                                 // 0x0350 (size: 0x8)
    FText Text;                                                                       // 0x0358 (size: 0x18)
    EControllerIconAxisTypes AxisType;                                                // 0x0370 (size: 0x1)
    FBP_Btn_InputTip_Hold_COnVisibilityChange OnVisibilityChange;                     // 0x0378 (size: 0x10)
    void OnVisibilityChange(ESlateVisibility bVisibility);
    bool Black;                                                                       // 0x0388 (size: 0x1)
    bool Primary;                                                                     // 0x0389 (size: 0x1)
    bool Display Hold;                                                                // 0x038A (size: 0x1)
    bool IconRight;                                                                   // 0x038B (size: 0x1)
    bool UseImage;                                                                    // 0x038C (size: 0x1)
    bool WidthOverride;                                                               // 0x038D (size: 0x1)
    class UTexture2D* Image;                                                          // 0x0390 (size: 0x8)
    TArray<class UWidget*> Tip Menu Action Children;                                  // 0x0398 (size: 0x10)
    FMappingID Mapping ID;                                                            // 0x03A8 (size: 0x58)

    void SetWidthOverride(bool LocalWidth);
    void SetAction();
    void SetHoldVisibility(bool Visible);
    void SetAxisType(EControllerIconAxisTypes AxisType);
    void SetMapping();
    void SetAlignment(bool Right alignement);
    void SetPrimary(bool LocalPrimary);
    void SetBlack(bool IsBlack);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Btn_InputTip_Hold_BP_Btn_SkipHold_K2Node_ComponentBoundEvent_2_OnKeyValidityChanged__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_Btn_InputTip_Hold(int32 EntryPoint);
    void OnVisibilityChange__DelegateSignature(ESlateVisibility bVisibility);
}; // Size: 0x400

#endif
