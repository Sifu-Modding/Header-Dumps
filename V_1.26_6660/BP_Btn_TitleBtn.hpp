#ifndef UE4SS_SDK_BP_Btn_TitleBtn_HPP
#define UE4SS_SDK_BP_Btn_TitleBtn_HPP

class UBP_Btn_TitleBtn_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBP_Btn_Title_C* MenuTitle;                                                 // 0x0828 (size: 0x8)
    FText TxtTitle;                                                                   // 0x0830 (size: 0x18)
    FText TxtOrnament;                                                                // 0x0848 (size: 0x18)
    bool Black;                                                                       // 0x0860 (size: 0x1)
    bool Caps;                                                                        // 0x0861 (size: 0x1)
    InputAction Input Action;                                                         // 0x0862 (size: 0x1)
    int32 Size;                                                                       // 0x0864 (size: 0x4)

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_BP_Btn_TitleBtn(int32 EntryPoint);
}; // Size: 0x868

#endif
