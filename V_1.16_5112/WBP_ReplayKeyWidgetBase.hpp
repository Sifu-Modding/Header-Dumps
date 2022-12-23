#ifndef UE4SS_SDK_WBP_ReplayKeyWidgetBase_HPP
#define UE4SS_SDK_WBP_ReplayKeyWidgetBase_HPP

class UWBP_ReplayKeyWidgetBase_C : public UReplayKeyWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FLinearColor KeySelectedColor;
    FLinearColor KeyHoveredColor;

    void BPE_OnSelectionUpdate(class UReplayKey* _key, bool _bIsSelected);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BPE_OnHoveringStateUpdate(class UReplayKey* _key, bool _bIsHovered);
    void ExecuteUbergraph_WBP_ReplayKeyWidgetBase(int32 EntryPoint);
};

#endif
