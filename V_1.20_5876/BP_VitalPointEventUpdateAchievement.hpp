#ifndef UE4SS_SDK_BP_VitalPointEventUpdateAchievement_HPP
#define UE4SS_SDK_BP_VitalPointEventUpdateAchievement_HPP

class UBP_VitalPointEventUpdateAchievement_C : public UVitalPointEvents
{

    void IsRunLegit(bool& bRunLegit);
    void BPE_OnWillExecute(const class UVitalPointData* _vitalPoint, class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, bool& _bOutShouldDismiss);
}; // Size: 0x28

#endif
