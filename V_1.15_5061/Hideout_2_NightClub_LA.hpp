#ifndef UE4SS_SDK_Hideout_2_NightClub_LA_HPP
#define UE4SS_SDK_Hideout_2_NightClub_LA_HPP

class AHideout_2_NightClub_LA_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Hideout_2_NightClub_LA(int32 EntryPoint);
};

#endif
