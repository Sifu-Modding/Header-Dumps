#ifndef UE4SS_SDK_BP_Menu_Option_InfoPanel_HPP
#define UE4SS_SDK_BP_Menu_Option_InfoPanel_HPP

class UBP_Menu_Option_InfoPanel_C : public UUserWidget
{
    class URichTextBlock* DescriptionText;                                            // 0x0268 (size: 0x8)
    class UAsyncImage* Illustration;                                                  // 0x0270 (size: 0x8)
    class USizeBox* VideoBox;                                                         // 0x0278 (size: 0x8)

    void SetIsBlack(bool IsBlack);
}; // Size: 0x280

#endif
