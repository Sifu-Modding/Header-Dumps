#ifndef UE4SS_SDK_BP_MenuDifficulty_Widget_HPP
#define UE4SS_SDK_BP_MenuDifficulty_Widget_HPP

class UBP_MenuDifficulty_Widget_C : public USCUserWidget
{
    class UImage* DifficultyIcon;
    class UTextBlock* DifficultyText;

    void SetBlack(bool IsBlack);
    void SetDifficulty(EGameDifficulty difficulty);
};

#endif
