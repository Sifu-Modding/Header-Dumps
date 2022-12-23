#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialHint_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialHint_HPP

class UNEW_BP_Widget_TutorialHint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HintApparition;
    class UBorder* HintBorder;
    class UHorizontalBox* HintBox;
    class UTextBlock* Tips;
    FText TipText;

    void ScaleWidget();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_NEW_BP_Widget_TutorialHint(int32 EntryPoint);
};

#endif
