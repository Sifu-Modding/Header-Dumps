#ifndef UE4SS_SDK_BP_Tuto_Task_HPP
#define UE4SS_SDK_BP_Tuto_Task_HPP

class UBP_Tuto_Task_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBorder* Border_33;                                                         // 0x0270 (size: 0x8)
    class UOverlay* TaskBox;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_96;                                                   // 0x0280 (size: 0x8)
    class UBP_HUD_Tuto_C* Master HUD;                                                 // 0x0288 (size: 0x8)
    int32 WhichTaskAmI;                                                               // 0x0290 (size: 0x4)
    bool ValueRequirement;                                                            // 0x0294 (size: 0x1)

    FSlateColor TaskColor();
    ECheckBoxState GetCheckedState();
    FText GetText();
    void Construct();
    void Set HUD(class UBP_HUD_Tuto_C* HUD, int32 TaskValue);
    void ExecuteUbergraph_BP_Tuto_Task(int32 EntryPoint);
}; // Size: 0x295

#endif
