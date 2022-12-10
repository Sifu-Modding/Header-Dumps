#ifndef UE4SS_SDK_BP_Arena_Challenge_Recap_HPP
#define UE4SS_SDK_BP_Arena_Challenge_Recap_HPP

class UBP_Arena_Challenge_Recap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_ActiveModifierBox_C* BP_ActiveModifierBox;
    class UTextBlock* Challenge_description;
    class UTextBlock* Challenge_Title;
    class UTextBlock* TextBlock_ChallengeDifficulty;
    class UVerticalBox* VerticalBox_Title;
    bool ShowTitleSection;

    void SetupScreen(class UArenaChallengeDescription* CurrentChallenge);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_Arena_Challenge_Recap(int32 EntryPoint);
};

#endif
