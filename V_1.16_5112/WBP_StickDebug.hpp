#ifndef UE4SS_SDK_WBP_StickDebug_HPP
#define UE4SS_SDK_WBP_StickDebug_HPP

class UWBP_StickDebug_C : public UUserWidget
{
    class UImage* Image_41;
    class UImage* Image_111;
    float MaxAmplitude;

    void SetStickPosition(FVector2D StickValue, bool InvertY);
};

#endif
