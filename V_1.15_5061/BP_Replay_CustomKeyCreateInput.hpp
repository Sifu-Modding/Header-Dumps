#ifndef UE4SS_SDK_BP_Replay_CustomKeyCreateInput_HPP
#define UE4SS_SDK_BP_Replay_CustomKeyCreateInput_HPP

class UBP_Replay_CustomKeyCreateInput_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BlendDescription;
    class UImage* BlendImage;
    class UTextBlock* BlendText;
    class UBP_Btn_InputTip_C* BtnBack;
    class UTextBlock* DotTxt;
    class UTextBlock* InputText;
    class UVerticalBox* VerticalBox_0;
    FText Txt_BlendType;
    FText Txt_BlendDescription;
    class UTexture2D* Img_BlendType;
    bool ShowDescription;

    void SetFocusMode(bool Focus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Replay_CustomKeyCreateInput(int32 EntryPoint);
};

#endif
