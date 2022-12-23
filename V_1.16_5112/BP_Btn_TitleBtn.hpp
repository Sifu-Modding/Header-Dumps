#ifndef UE4SS_SDK_BP_Btn_TitleBtn_HPP
#define UE4SS_SDK_BP_Btn_TitleBtn_HPP

class UBP_Btn_TitleBtn_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Title_C* MenuTitle;
    FText TxtTitle;
    FText TxtOrnament;
    bool Black;
    bool Caps;
    InputAction Input Action;

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_BP_Btn_TitleBtn(int32 EntryPoint);
};

#endif
