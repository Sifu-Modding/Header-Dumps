#ifndef UE4SS_SDK_Wuguan_Main_HPP
#define UE4SS_SDK_Wuguan_Main_HPP

class AWuguan_Main_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    int32 InterHideoutAmbiance;                                                       // 0x0438 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Wuguan_Main(int32 EntryPoint);
}; // Size: 0x43C

#endif
