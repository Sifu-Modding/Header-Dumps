#ifndef UE4SS_SDK_Sean_BurstToP3PhaseTransition_HPP
#define UE4SS_SDK_Sean_BurstToP3PhaseTransition_HPP

class USean_BurstToP3PhaseTransition_C : public UAIPhaseTransitionPhaseDuration
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Sean_Base_C* Sean;

    void BPE_OnParentPhaseEnded(class UAIFightingComponent* _aiComponent);
    void ExecuteUbergraph_Sean_BurstToP3PhaseTransition(int32 EntryPoint);
};

#endif
