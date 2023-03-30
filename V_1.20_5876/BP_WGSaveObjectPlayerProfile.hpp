#ifndef UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP
#define UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP

class UBP_WGSaveObjectPlayerProfile_C : public UWGSaveObjectPlayerProfile
{
    bool TutoFinished;                                                                // 0x04D8 (size: 0x1)
    TEnumAsByte<EnumSkillProgressionSelection> NewGameProgressionPref;                // 0x04D9 (size: 0x1)
    EGameDifficulty NewGameDifficultyPref;                                            // 0x04DA (size: 0x1)

    FString BPE_GetSubtitlesInfoForSaveFile();
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile();
}; // Size: 0x4DB

#endif
