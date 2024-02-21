#ifndef UE4SS_SDK_BP_CreditsContributorsCategoryWidget_HPP
#define UE4SS_SDK_BP_CreditsContributorsCategoryWidget_HPP

class UBP_CreditsContributorsCategoryWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UTextBlock* CatergoryNameText;                                              // 0x0318 (size: 0x8)
    class UVerticalBox* ContributorsContainer;                                        // 0x0320 (size: 0x8)

    void ExecuteUbergraph_BP_CreditsContributorsCategoryWidget(int32 EntryPoint);
}; // Size: 0x328

#endif
