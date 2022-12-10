#ifndef UE4SS_SDK_BP_Btn_InputTip_ConsoleOverride_HPP
#define UE4SS_SDK_BP_Btn_InputTip_ConsoleOverride_HPP

class UBP_Btn_InputTip_ConsoleOverride_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BkgBorder;
    class UCanvasPanel* Canvas;
    class UImage* ConsoleInputImg;
    class UWidgetSwitcher* ConsoleInputSwitcher;
    class UBP_InputAction_C* InputAction;
    class UWidgetSwitcher* Switcher;
    class UHorizontalBox* Tip_MenuAction;
    class UImage* TipImage;
    class UTextBlock* TipText;
    class USizeBox* WidthOverrideBox;
    FText Text;
    InputAction Action;
    InputContext InputContext;
    EControllerIconAxisTypes AxisType;
    FBP_Btn_InputTip_ConsoleOverride_COnVisibilityChange OnVisibilityChange;
    void OnVisibilityChange(ESlateVisibility bVisibility);
    bool Black;
    bool Primary;
    bool Display Hold;
    bool IconRight;
    bool UseImage;
    bool WidthOverride;
    class UTexture2D* Image;
    TArray<class UWidget*> Tip Menu Action Children;
    class UTexture2D* PS_TextureOverride;
    class UTexture2D* XB_TextureOverride;

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
};

#endif
