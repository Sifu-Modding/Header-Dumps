#ifndef UE4SS_SDK_BPFL_ArenaMenuHelpers_HPP
#define UE4SS_SDK_BPFL_ArenaMenuHelpers_HPP

class UBPFL_ArenaMenuHelpers_C : public UBlueprintFunctionLibrary
{

    void ToggleArenaCustomMode(class UObject* bpp____WorldContext__pf);
    void SetupArenaStars(TArray<class UCheckBox*>& bpp__Stars__pf, int32 bpp__StarCount__pf, class UObject* bpp____WorldContext__pf);
    void SetupArenaScoreThresholds(class UBaseArenaObjective* bpp__ArenaObjective__pf, TArray<class UTextBlock*>& bpp__TextArray__pf, class UObject* bpp____WorldContext__pf);
    void GetObjectiveData(class UBaseArenaObjective* bpp__Objective__pf, class UObject* bpp____WorldContext__pf, FBP_ObjectiveTypes_Struct& bpp__ReturnxValue__pfT);
    FText GetFormattedArenaScoreText(class UBaseArenaObjective* bpp__Objective__pf, int32 bpp__Score__pf, bool bpp__bForThreshold__pf, class UObject* bpp____WorldContext__pf);
    void GetChallengeObjectiveLenght(class UArenaChallengeDescription* bpp__ChallengeDescription__pf, class UObject* bpp____WorldContext__pf, int32& bpp__LenghtNb__pf, FText& bpp__LenghtUnit__pf);
}; // Size: 0x28

#endif
