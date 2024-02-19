#ifndef UE4SS_SDK_BP_Btn_Remapping_Simple_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Simple_HPP

class UBP_Btn_Remapping_Simple_C : public UBP_Btn_Remapping_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0828 (size: 0x8)
    class UBP_InputAction_C* BP_Btn_Combinable_InputAction;                           // 0x0830 (size: 0x8)
    class UBP_Btn_Remapping_Container_C* BP_Btn_Remapping_Container;                  // 0x0838 (size: 0x8)
    class UTextBlock* ChoiceTitle;                                                    // 0x0840 (size: 0x8)
    FBP_Btn_Remapping_Simple_COnValueChanged OnValueChanged;                          // 0x0848 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Remapping_Simple_COnReceivedFocus OnReceivedFocus;                        // 0x0858 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_Remapping_Simple_COnLostFocus OnLostFocus;                                // 0x0868 (size: 0x10)
    void OnLostFocus();
    class UTexture2D* SelectionBackgroundTexture;                                     // 0x0878 (size: 0x8)
    FBP_Btn_Remapping_Simple_COnClicked OnClicked;                                    // 0x0880 (size: 0x10)
    void OnClicked();
    FBP_Btn_Remapping_Simple_CScalabilityChanged ScalabilityChanged;                  // 0x0890 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    FText Title;                                                                      // 0x08A0 (size: 0x18)
    class UInputMappingWidgetData* Model;                                             // 0x08B8 (size: 0x8)
    FMappingID ID;                                                                    // 0x08C0 (size: 0x58)
    InputAction CustomPreviewAction;                                                  // 0x0918 (size: 0x1)
    bool InvertMouseVertical;                                                         // 0x0919 (size: 0x1)
    bool IsChild;                                                                     // 0x091A (size: 0x1)
    bool IsBlack;                                                                     // 0x091B (size: 0x1)

    void SetIsBlack(bool Black);
    void GetTitle(FText& Title);
    void GetID(FMappingID& ID);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void BPE_OnDataUpdated();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Remapping_Simple(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
}; // Size: 0x91C

#endif
