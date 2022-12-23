#ifndef UE4SS_SDK_BP_Btn_Remapping_Container_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Container_HPP

class UBP_Btn_Remapping_Container_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* BrushError;
    class UImage* BrushOver;
    class UHorizontalBox* HorizontalBox;
    class UImage* ImgCustom;
    class UImage* ImgLink;
    class UNamedSlot* InputSlot;
    class UImage* Line;
    class USizeBox* LineBox;
    class USizeBox* SizeBox_Choice;
    class UNamedSlot* TitleSlot;
    class UImage* UnboundIcon;
    class UWidgetSwitcher* UnboundSwitcher;
    class UTextBlock* UnboundText;
    FBP_Btn_Remapping_Container_COnValueChanged OnValueChanged;
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Remapping_Container_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_Remapping_Container_COnLostFocus OnLostFocus;
    void OnLostFocus();
    class UTexture2D* SelectionBackgroundTexture;
    FBP_Btn_Remapping_Container_COnClicked OnClicked;
    void OnClicked();
    FBP_Btn_Remapping_Container_CScalabilityChanged ScalabilityChanged;
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    class UInputMappingWidgetData* Model;
    FMappingID ID;

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_BP_Btn_Remapping_Container(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
};

#endif
