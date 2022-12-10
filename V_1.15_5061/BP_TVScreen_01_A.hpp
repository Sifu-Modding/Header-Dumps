#ifndef UE4SS_SDK_BP_TVScreen_01_A_HPP
#define UE4SS_SDK_BP_TVScreen_01_A_HPP

class ABP_TVScreen_01_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_NightClub_TV_01_A_1;
    class USceneComponent* DefaultSceneRoot;
    class UMediaPlayer* MediaPlayer;
    class UMediaSource* Media Source;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TVScreen_01_A(int32 EntryPoint);
};

#endif
