#ifndef UE4SS_SDK_BP_Replay_CustomKeyCreateInput_HPP
#define UE4SS_SDK_BP_Replay_CustomKeyCreateInput_HPP

class UBP_Replay_CustomKeyCreateInput_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UTextBlock* BlendDescription;                                               // 0x0318 (size: 0x8)
    class UImage* BlendImage;                                                         // 0x0320 (size: 0x8)
    class UTextBlock* BlendText;                                                      // 0x0328 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBack;                                                // 0x0330 (size: 0x8)
    class UTextBlock* DotTxt;                                                         // 0x0338 (size: 0x8)
    class UTextBlock* InputText;                                                      // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0348 (size: 0x8)
    FText Txt_BlendType;                                                              // 0x0350 (size: 0x18)
    FText Txt_BlendDescription;                                                       // 0x0368 (size: 0x18)
    class UTexture2D* Img_BlendType;                                                  // 0x0380 (size: 0x8)
    bool ShowDescription;                                                             // 0x0388 (size: 0x1)

    void SetFocusMode(bool Focus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Replay_CustomKeyCreateInput(int32 EntryPoint);
}; // Size: 0x389

#endif
