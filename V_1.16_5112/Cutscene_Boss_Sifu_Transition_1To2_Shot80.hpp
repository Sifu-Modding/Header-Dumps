#ifndef UE4SS_SDK_Cutscene_Boss_Sifu_Transition_1To2_Shot80_HPP
#define UE4SS_SDK_Cutscene_Boss_Sifu_Transition_1To2_Shot80_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Rain_SifuBossRoom_P2_C* BP_Rain_SifuBossRoom_P2);
    void BP_Rain_SifuBossRoom_P2_Event_0(class ABP_Rain_SifuBossRoom_P2_C* BP_Rain_SifuBossRoom_P2);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
