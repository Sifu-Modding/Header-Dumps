#ifndef UE4SS_SDK_WBP_ReplayDotUIMode_HPP
#define UE4SS_SDK_WBP_ReplayDotUIMode_HPP

class UWBP_ReplayDotUIMode_C : public UWBP_UIReplayModeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x0398 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x03A0 (size: 0x8)
    class UOverlay* HUDGuides;                                                        // 0x03A8 (size: 0x8)
    class UImage* Image_112;                                                          // 0x03B0 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x03B8 (size: 0x8)
    class UImage* TopRight;                                                           // 0x03C0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_ReplayDotUIMode(int32 EntryPoint);
}; // Size: 0x3C8

#endif
