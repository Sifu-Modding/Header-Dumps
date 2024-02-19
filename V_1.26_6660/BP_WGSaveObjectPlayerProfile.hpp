#ifndef UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP
#define UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP

class UBP_WGSaveObjectPlayerProfile_C : public UWGSaveObjectPlayerProfile
{
    bool TutoFinished;                                                                // 0x0550 (size: 0x1)
    TEnumAsByte<EnumSkillProgressionSelection> NewGameProgressionPref;                // 0x0551 (size: 0x1)
    EGameDifficulty NewGameDifficultyPref;                                            // 0x0552 (size: 0x1)

    void IsRandomizerInModifiersOnly(bool& Result);
    FString BPE_GetSubtitlesInfoForSaveFile();
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile();
}; // Size: 0x553

#endif
