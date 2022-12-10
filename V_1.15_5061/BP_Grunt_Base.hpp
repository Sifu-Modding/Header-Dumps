#ifndef UE4SS_SDK_BP_Grunt_Base_HPP
#define UE4SS_SDK_BP_Grunt_Base_HPP

class ABP_Grunt_Base_C : public ABP_AICharacter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<FName, int32> PhaseNameToFxIndex;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grunt_Base(int32 EntryPoint);
};

#endif
