#ifndef UE4SS_SDK_BP_CreditContributorWidget_HPP
#define UE4SS_SDK_BP_CreditContributorWidget_HPP

class UBP_CreditContributorWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* FirstName;
    class UTextBlock* LastName;
    class UImage* Line;

    void Construct();
    void ExecuteUbergraph_BP_CreditContributorWidget(int32 EntryPoint);
};

#endif
