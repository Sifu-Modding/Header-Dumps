#ifndef UE4SS_SDK_Hideout_2_Main_HPP
#define UE4SS_SDK_Hideout_2_Main_HPP

class AHideout_2_Main_C : public AThePlainesLDLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SkylightNight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Hideout_2_Main(int32 EntryPoint);
};

#endif
