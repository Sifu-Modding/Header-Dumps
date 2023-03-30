#ifndef UE4SS_SDK_BP_Menu_Options_Remappin_Action_Text_HPP
#define UE4SS_SDK_BP_Menu_Options_Remappin_Action_Text_HPP

class UBP_Menu_Options_Remappin_Action_Text_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class URichTextBlock* ActionRichText;                                             // 0x0318 (size: 0x8)
    class USizeBox* ActionSizeBox;                                                    // 0x0320 (size: 0x8)
    class UScaleBox* AltScale;                                                        // 0x0328 (size: 0x8)
    bool DisplayHold;                                                                 // 0x0330 (size: 0x1)
    bool RightAlign;                                                                  // 0x0331 (size: 0x1)
    bool IsLarge;                                                                     // 0x0332 (size: 0x1)
    bool IsAlt;                                                                       // 0x0333 (size: 0x1)
    FText ActionText;                                                                 // 0x0338 (size: 0x18)
    TEnumAsByte<BP_RemappingActionTypes> ActionType;                                  // 0x0350 (size: 0x1)
    bool IsBlack;                                                                     // 0x0351 (size: 0x1)

    void SetIsBlack(bool IsBlack);
    void UpdateLayout();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BPE_OnDataUpdated();
    void ExecuteUbergraph_BP_Menu_Options_Remappin_Action_Text(int32 EntryPoint);
}; // Size: 0x352

#endif
