#ifndef UE4SS_SDK_BP_EnvironmentalInteractionComponent_HPP
#define UE4SS_SDK_BP_EnvironmentalInteractionComponent_HPP

class UBP_EnvironmentalInteractionComponent_C : public UGenericEnvironmentalInteractionComponent
{

    void FilterAnims(TArray<FTakedownAnim>& Array, class AActor* Target, class AActor* Instigator, TArray<FAnimSyncContainer>& Result1);
    bool BPE_CanTakeDown(class AFightingCharacter* _Instigator, class AFightingCharacter* _takenDown);
};

#endif
