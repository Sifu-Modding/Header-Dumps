#ifndef UE4SS_SDK_BP_Btn_Remapping_Simple_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Simple_HPP

class UBP_Btn_Remapping_Simple_C : public UBP_Btn_Remapping_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_InputAction_C* BP_Btn_Combinable_InputAction;
    class UBP_Btn_Remapping_Container_C* BP_Btn_Remapping_Container;
    class UTextBlock* ChoiceTitle;
    FBP_Btn_Remapping_Simple_COnValueChanged OnValueChanged;
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Remapping_Simple_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_Remapping_Simple_COnLostFocus OnLostFocus;
    void OnLostFocus();
    class UTexture2D* SelectionBackgroundTexture;
    FBP_Btn_Remapping_Simple_COnClicked OnClicked;
    void OnClicked();
    FBP_Btn_Remapping_Simple_CScalabilityChanged ScalabilityChanged;
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    FText Title;
    class UInputMappingWidgetData* Model;
    FMappingID ID;
    InputAction CustomPreviewAction;
    bool InvertMouseVertical;
    bool IsChild;
    bool IsBlack;

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
};

#endif
