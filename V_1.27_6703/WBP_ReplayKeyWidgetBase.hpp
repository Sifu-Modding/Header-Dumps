#ifndef UE4SS_SDK_WBP_ReplayKeyWidgetBase_HPP
#define UE4SS_SDK_WBP_ReplayKeyWidgetBase_HPP

class UWBP_ReplayKeyWidgetBase_C : public UReplayKeyWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0888 (size: 0x8)
    FLinearColor KeySelectedColor;                                                    // 0x0890 (size: 0x10)
    FLinearColor KeyHoveredColor;                                                     // 0x08A0 (size: 0x10)

    void BPE_OnSelectionUpdate(class UReplayKey* _key, bool _bIsSelected);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BPE_OnHoveringStateUpdate(class UReplayKey* _key, bool _bIsHovered);
    void ExecuteUbergraph_WBP_ReplayKeyWidgetBase(int32 EntryPoint);
}; // Size: 0x8B0

#endif
