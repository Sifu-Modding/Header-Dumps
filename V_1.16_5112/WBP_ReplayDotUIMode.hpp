#ifndef UE4SS_SDK_WBP_ReplayDotUIMode_HPP
#define UE4SS_SDK_WBP_ReplayDotUIMode_HPP

class UWBP_ReplayDotUIMode_C : public UWBP_UIReplayModeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BottomLeft;
    class UImage* BottomRight;
    class UOverlay* HUDGuides;
    class UImage* Image_112;
    class UImage* TopLeft;
    class UImage* TopRight;

    void Construct();
    void ExecuteUbergraph_WBP_ReplayDotUIMode(int32 EntryPoint);
};

#endif
