#ifndef UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP
#define UE4SS_SDK_BP_WGSaveObjectPlayerProfile_HPP

class UBP_WGSaveObjectPlayerProfile_C : public UWGSaveObjectPlayerProfile
{
    bool TutoFinished;
    TEnumAsByte<EnumSkillProgressionSelection> NewGameProgressionPref;
    EGameDifficulty NewGameDifficultyPref;

    FString BPE_GetSubtitlesInfoForSaveFile();
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile();
};

#endif
