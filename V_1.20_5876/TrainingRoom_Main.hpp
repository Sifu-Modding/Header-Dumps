#ifndef UE4SS_SDK_TrainingRoom_Main_HPP
#define UE4SS_SDK_TrainingRoom_Main_HPP

class ATrainingRoom_Main_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_TrainingRoom_Main(int32 EntryPoint);
}; // Size: 0x438

#endif
