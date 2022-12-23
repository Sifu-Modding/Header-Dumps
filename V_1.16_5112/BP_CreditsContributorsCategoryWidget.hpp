#ifndef UE4SS_SDK_BP_CreditsContributorsCategoryWidget_HPP
#define UE4SS_SDK_BP_CreditsContributorsCategoryWidget_HPP

class UBP_CreditsContributorsCategoryWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CatergoryNameText;
    class UVerticalBox* ContributorsContainer;

    void ExecuteUbergraph_BP_CreditsContributorsCategoryWidget(int32 EntryPoint);
};

#endif
