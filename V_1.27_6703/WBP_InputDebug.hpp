#ifndef UE4SS_SDK_WBP_InputDebug_HPP
#define UE4SS_SDK_WBP_InputDebug_HPP

class UWBP_InputDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBorder* Border_71;                                                         // 0x0270 (size: 0x8)
    class UImage* Circle;                                                             // 0x0278 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_50;                                         // 0x0280 (size: 0x8)
    FSlateColor Color_Inactive;                                                       // 0x0288 (size: 0x28)
    FSlateColor Color_Active;                                                         // 0x02B0 (size: 0x28)
    bool IsCircle;                                                                    // 0x02D8 (size: 0x1)

    void SetActive(bool Active);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_InputDebug(int32 EntryPoint);
}; // Size: 0x2D9

#endif
