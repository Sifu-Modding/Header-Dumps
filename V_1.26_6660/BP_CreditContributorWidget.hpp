#ifndef UE4SS_SDK_BP_CreditContributorWidget_HPP
#define UE4SS_SDK_BP_CreditContributorWidget_HPP

class UBP_CreditContributorWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UTextBlock* FirstName;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* LastName;                                                       // 0x0320 (size: 0x8)
    class UImage* Line;                                                               // 0x0328 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BP_CreditContributorWidget(int32 EntryPoint);
}; // Size: 0x330

#endif
