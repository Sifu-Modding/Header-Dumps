#ifndef UE4SS_SDK_BP_ReplayHUD_HPP
#define UE4SS_SDK_BP_ReplayHUD_HPP

class ABP_ReplayHUD_C : public AReplayHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float IconPadding;
    float IconSize;

    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BP_ReplayHUD(int32 EntryPoint);
};

#endif
