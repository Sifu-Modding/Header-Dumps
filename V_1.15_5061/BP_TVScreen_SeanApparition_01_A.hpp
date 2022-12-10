#ifndef UE4SS_SDK_BP_TVScreen_SeanApparition_01_A_HPP
#define UE4SS_SDK_BP_TVScreen_SeanApparition_01_A_HPP

class ABP_TVScreen_SeanApparition_01_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCVideoSpotLightComponent* LGT_Spot_VideoLight_01;
    class USCVideoRectLightComponent* LGT_Rect_VideoLight_01;
    class UStaticMeshComponent* SM_NightClub_TV_01_A_1;
    class USceneComponent* DefaultSceneRoot;
    class UMediaPlayer* MediaPlayer;
    class UMediaSource* Media Source;
    class UMediaPlayer* SeanApparition_MediaPlayer;
    class UMediaSource* SeanApparition_Media Source;

    void SeanApparition();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TVScreen_SeanApparition_01_A(int32 EntryPoint);
};

#endif
