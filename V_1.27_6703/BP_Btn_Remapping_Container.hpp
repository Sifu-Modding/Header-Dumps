#ifndef UE4SS_SDK_BP_Btn_Remapping_Container_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Container_HPP

class UBP_Btn_Remapping_Container_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UImage* BrushError;                                                         // 0x0830 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0838 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0840 (size: 0x8)
    class UImage* ImgCustom;                                                          // 0x0848 (size: 0x8)
    class UImage* ImgLink;                                                            // 0x0850 (size: 0x8)
    class UNamedSlot* InputSlot;                                                      // 0x0858 (size: 0x8)
    class UImage* Line;                                                               // 0x0860 (size: 0x8)
    class USizeBox* LineBox;                                                          // 0x0868 (size: 0x8)
    class USizeBox* SizeBox_Choice;                                                   // 0x0870 (size: 0x8)
    class UNamedSlot* TitleSlot;                                                      // 0x0878 (size: 0x8)
    class UImage* UnboundIcon;                                                        // 0x0880 (size: 0x8)
    class UWidgetSwitcher* UnboundSwitcher;                                           // 0x0888 (size: 0x8)
    class UTextBlock* UnboundText;                                                    // 0x0890 (size: 0x8)
    FBP_Btn_Remapping_Container_COnValueChanged OnValueChanged;                       // 0x0898 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Remapping_Container_COnReceivedFocus OnReceivedFocus;                     // 0x08A8 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_Remapping_Container_COnLostFocus OnLostFocus;                             // 0x08B8 (size: 0x10)
    void OnLostFocus();
    class UTexture2D* SelectionBackgroundTexture;                                     // 0x08C8 (size: 0x8)
    FBP_Btn_Remapping_Container_COnClicked OnClicked;                                 // 0x08D0 (size: 0x10)
    void OnClicked();
    FBP_Btn_Remapping_Container_CScalabilityChanged ScalabilityChanged;               // 0x08E0 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    class UInputMappingWidgetData* Model;                                             // 0x08F0 (size: 0x8)
    FMappingID ID;                                                                    // 0x08F8 (size: 0x58)

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
}; // Size: 0x950

#endif
