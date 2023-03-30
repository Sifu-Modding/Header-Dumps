#ifndef UE4SS_SDK_WBP_AvailabilityInputsReplayBase_HPP
#define UE4SS_SDK_WBP_AvailabilityInputsReplayBase_HPP

class UWBP_AvailabilityInputsReplayBase_C : public UWBP_AvailabilityInputsBase_C
{

    void GetReplayController(class AReplayController*& ReplayController);
    void ForceInputAvailabilityRefresh();
    void GetSelectedOrHoveredKey(bool& HasKeySelected, bool& HasHoveredKey, EReplayKeyCutType& Cut Type, class UReplayKey*& Key);
    void GetIsBoundaryKey(class UReplayKey* ReplayKey, bool& IsBoundaryKey);
    void GetTimelineModel(class UReplayTimelineModel*& TimelineModel);
    void GetMainWidget(class UReplayMainUserWidget*& MainWidget);
}; // Size: 0x331

#endif
