#ifndef UE4SS_SDK_BP_Btn_InputTip_ConsoleOverride_HPP
#define UE4SS_SDK_BP_Btn_InputTip_ConsoleOverride_HPP

class UBP_Btn_InputTip_ConsoleOverride_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBorder* BkgBorder;                                                         // 0x0318 (size: 0x8)
    class UCanvasPanel* Canvas;                                                       // 0x0320 (size: 0x8)
    class UImage* ConsoleInputImg;                                                    // 0x0328 (size: 0x8)
    class UWidgetSwitcher* ConsoleInputSwitcher;                                      // 0x0330 (size: 0x8)
    class UBP_InputAction_C* InputAction;                                             // 0x0338 (size: 0x8)
    class UWidgetSwitcher* Switcher;                                                  // 0x0340 (size: 0x8)
    class UHorizontalBox* Tip_MenuAction;                                             // 0x0348 (size: 0x8)
    class UImage* TipImage;                                                           // 0x0350 (size: 0x8)
    class UTextBlock* TipText;                                                        // 0x0358 (size: 0x8)
    class USizeBox* WidthOverrideBox;                                                 // 0x0360 (size: 0x8)
    FText Text;                                                                       // 0x0368 (size: 0x18)
    InputAction Action;                                                               // 0x0380 (size: 0x1)
    InputContext InputContext;                                                        // 0x0381 (size: 0x1)
    EControllerIconAxisTypes AxisType;                                                // 0x0382 (size: 0x1)
    FBP_Btn_InputTip_ConsoleOverride_COnVisibilityChange OnVisibilityChange;          // 0x0388 (size: 0x10)
    void OnVisibilityChange(ESlateVisibility bVisibility);
    bool Black;                                                                       // 0x0398 (size: 0x1)
    bool Primary;                                                                     // 0x0399 (size: 0x1)
    bool Display Hold;                                                                // 0x039A (size: 0x1)
    bool IconRight;                                                                   // 0x039B (size: 0x1)
    bool UseImage;                                                                    // 0x039C (size: 0x1)
    bool WidthOverride;                                                               // 0x039D (size: 0x1)
    class UTexture2D* Image;                                                          // 0x03A0 (size: 0x8)
    TArray<class UWidget*> Tip Menu Action Children;                                  // 0x03A8 (size: 0x10)
    class UTexture2D* PS_TextureOverride;                                             // 0x03B8 (size: 0x8)
    class UTexture2D* XB_TextureOverride;                                             // 0x03C0 (size: 0x8)

    void RefreshConsoleInputTexture();
    void SetWidthOverride(bool LocalWidth);
    void SetAction(InputAction Action);
    void SetHoldVisibility(bool Visible);
    void SetAxisType(EControllerIconAxisTypes AxisType);
    void SetMapping(InputContext Context);
    void SetAlignment(bool Right alignement);
    void SetPrimary(bool LocalPrimary);
    void SetBlack(bool IsBlack);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Btn_InputTip_InputAction_K2Node_ComponentBoundEvent_0_OnFirstKeyValidityChanged__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_InputTip_ConsoleOverride(int32 EntryPoint);
    void OnVisibilityChange__DelegateSignature(ESlateVisibility bVisibility);
}; // Size: 0x3C8

#endif
