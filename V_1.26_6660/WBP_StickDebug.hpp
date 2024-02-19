#ifndef UE4SS_SDK_WBP_StickDebug_HPP
#define UE4SS_SDK_WBP_StickDebug_HPP

class UWBP_StickDebug_C : public UUserWidget
{
    class UImage* Image_41;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0270 (size: 0x8)
    float MaxAmplitude;                                                               // 0x0278 (size: 0x4)

    void SetStickPosition(FVector2D StickValue, bool InvertY);
}; // Size: 0x27C

#endif
