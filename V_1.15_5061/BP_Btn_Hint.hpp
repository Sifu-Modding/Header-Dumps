#ifndef UE4SS_SDK_BP_Btn_Hint_HPP
#define UE4SS_SDK_BP_Btn_Hint_HPP

class UBP_Btn_Hint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SwapAnim;
    class UWidgetAnimation* FadeAnim;
    class UBP_Btn_Hold_C* BP_Btn_Hold;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UTextBlock* HintText;
    class UTextBlock* InfosText;
    class UWidgetSwitcher* InputSwitcher;
    class UScaleBox* ScaleText;
    class USizeBox* TipSizeBox;
    class UImage* ValidationStroke;
    FText Hint;
    FText Info;
    FMappingID Mapping ID;
    bool AnimateHold;

    void UpdateWidthFromLanguage(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void LaunchSwapAnim();
    void ScaleWidget();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Hint(int32 EntryPoint);
};

#endif
