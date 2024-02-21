#ifndef UE4SS_SDK_BP_Grunt_Base_HPP
#define UE4SS_SDK_BP_Grunt_Base_HPP

class ABP_Grunt_Base_C : public ABP_AICharacter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1FF0 (size: 0x8)
    TMap<FName, int32> PhaseNameToFxIndex;                                            // 0x1FF8 (size: 0x50)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grunt_Base(int32 EntryPoint);
}; // Size: 0x2048

#endif
