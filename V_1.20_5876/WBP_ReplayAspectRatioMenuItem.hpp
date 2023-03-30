#ifndef UE4SS_SDK_WBP_ReplayAspectRatioMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayAspectRatioMenuItem_HPP

class UWBP_ReplayAspectRatioMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    TEnumAsByte<ReplayCameraAspectRatio> AspectRatioPropertyValue;                    // 0x0588 (size: 0x1)
    TMap<TEnumAsByte<ReplayCameraAspectRatio>, FCameraFilmbackSettings> CameraProfiles; // 0x0590 (size: 0x50)

    void UpdateAspectRatio(class UReplayCineCameraComponent* CineCamera);
    void ExecuteUbergraph_WBP_ReplayAspectRatioMenuItem(int32 EntryPoint);
}; // Size: 0x5E0

#endif
