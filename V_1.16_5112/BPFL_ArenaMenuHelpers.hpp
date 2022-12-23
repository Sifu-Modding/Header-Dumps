#ifndef UE4SS_SDK_BPFL_ArenaMenuHelpers_HPP
#define UE4SS_SDK_BPFL_ArenaMenuHelpers_HPP

class UBPFL_ArenaMenuHelpers_C : public UBlueprintFunctionLibrary
{

    void SetupArenaStars(TArray<class UCheckBox*>& bpp__Stars__pf, int32 bpp__StarCount__pf, class UObject* bpp____WorldContext__pf);
    void SetupArenaScoreThresholds(class UBaseArenaObjective* bpp__ArenaObjective__pf, TArray<class UTextBlock*>& bpp__TextArray__pf, class UObject* bpp____WorldContext__pf);
    FText GetFormattedArenaScoreText(class UBaseArenaObjective* bpp__Objective__pf, int32 bpp__Score__pf, class UObject* bpp____WorldContext__pf);
};

#endif
