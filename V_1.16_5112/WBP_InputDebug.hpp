#ifndef UE4SS_SDK_WBP_InputDebug_HPP
#define UE4SS_SDK_WBP_InputDebug_HPP

class UWBP_InputDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_71;
    class UImage* Circle;
    class UWidgetSwitcher* WidgetSwitcher_50;
    FSlateColor Color_Inactive;
    FSlateColor Color_Active;
    bool IsCircle;

    void SetActive(bool Active);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_InputDebug(int32 EntryPoint);
};

#endif
