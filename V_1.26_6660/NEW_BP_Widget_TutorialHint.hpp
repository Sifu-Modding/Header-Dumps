#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialHint_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialHint_HPP

class UNEW_BP_Widget_TutorialHint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* HintApparition;                                           // 0x0318 (size: 0x8)
    class UBorder* HintBorder;                                                        // 0x0320 (size: 0x8)
    class UHorizontalBox* HintBox;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* Tips;                                                           // 0x0330 (size: 0x8)
    FText TipText;                                                                    // 0x0338 (size: 0x18)

    void ScaleWidget();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_NEW_BP_Widget_TutorialHint(int32 EntryPoint);
}; // Size: 0x350

#endif
