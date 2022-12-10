#ifndef UE4SS_SDK_BP_Menu_Option_InfoPanel_HPP
#define UE4SS_SDK_BP_Menu_Option_InfoPanel_HPP

class UBP_Menu_Option_InfoPanel_C : public UUserWidget
{
    class URichTextBlock* DescriptionText;
    class UAsyncImage* Illustration;
    class USizeBox* VideoBox;

    void SetIsBlack(bool IsBlack);
};

#endif
