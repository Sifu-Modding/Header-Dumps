#ifndef UE4SS_SDK_WBP_ReplayAspectRatioMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayAspectRatioMenuItem_HPP

class UWBP_ReplayAspectRatioMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ReplayCameraAspectRatio> AspectRatioPropertyValue;
    TMap<TEnumAsByte<ReplayCameraAspectRatio>, FCameraFilmbackSettings> CameraProfiles;

    void UpdateAspectRatio(class UReplayCineCameraComponent* CineCamera);
    void ExecuteUbergraph_WBP_ReplayAspectRatioMenuItem(int32 EntryPoint);
};

#endif
