#ifndef UE4SS_SDK_BP_MenuDifficulty_Widget_HPP
#define UE4SS_SDK_BP_MenuDifficulty_Widget_HPP

class UBP_MenuDifficulty_Widget_C : public USCUserWidget
{
    class UImage* DifficultyIcon;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x0318 (size: 0x8)

    void SetBlack(bool IsBlack);
    void SetDifficulty(EGameDifficulty difficulty);
}; // Size: 0x320

#endif
