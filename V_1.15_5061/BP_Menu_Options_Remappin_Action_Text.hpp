#ifndef UE4SS_SDK_BP_Menu_Options_Remappin_Action_Text_HPP
#define UE4SS_SDK_BP_Menu_Options_Remappin_Action_Text_HPP

class UBP_Menu_Options_Remappin_Action_Text_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextBlock* ActionRichText;
    class USizeBox* ActionSizeBox;
    class UScaleBox* AltScale;
    bool DisplayHold;
    bool RightAlign;
    bool IsLarge;
    bool IsAlt;
    FText ActionText;
    TEnumAsByte<BP_RemappingActionTypes> ActionType;
    bool IsBlack;

    void SetIsBlack(bool IsBlack);
    void UpdateLayout();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BPE_OnDataUpdated();
    void ExecuteUbergraph_BP_Menu_Options_Remappin_Action_Text(int32 EntryPoint);
};

#endif
