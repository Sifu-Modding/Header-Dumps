#ifndef UE4SS_SDK_BP_Tuto_Task_HPP
#define UE4SS_SDK_BP_Tuto_Task_HPP

class UBP_Tuto_Task_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_33;
    class UOverlay* TaskBox;
    class UTextBlock* TextBlock_96;
    class UBP_HUD_Tuto_C* Master HUD;
    int32 WhichTaskAmI;
    bool ValueRequirement;

    FSlateColor TaskColor();
    ECheckBoxState GetCheckedState();
    FText GetText();
    void Construct();
    void Set HUD(class UBP_HUD_Tuto_C* HUD, int32 TaskValue);
    void ExecuteUbergraph_BP_Tuto_Task(int32 EntryPoint);
};

#endif
