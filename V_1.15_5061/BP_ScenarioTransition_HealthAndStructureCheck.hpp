#ifndef UE4SS_SDK_BP_ScenarioTransition_HealthAndStructureCheck_HPP
#define UE4SS_SDK_BP_ScenarioTransition_HealthAndStructureCheck_HPP

class UBP_ScenarioTransition_HealthAndStructureCheck_C : public UAIPhaseTransition
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AFightingCharacter* AIFightingCharacter;
    float MaxGuardGauge;
    bool StructureValidated;
    bool HealthValidated;
    TMap<class EGameDifficulty, class FSCMathExpressionFloat> DifficultyToHealthCheck;
    TMap<class EGameDifficulty, class FSCMathExpressionFloat> DifficultyToStructureCheck;

    FString BPE_GetLog();
    void CheckHealthCondition(bool& IsValid);
    void CheckStructureCondition(float GuardGauge, bool& IsValid);
    void OnConditionMet();
    void BPE_OnParentPhaseStarted(class UAIFightingComponent* _aiComponent);
    void OnGuardGaugeUpdated(float GuardGauge);
    void OnAIHit(const FHitDescription& HitDescription);
    void ExecuteUbergraph_BP_ScenarioTransition_HealthAndStructureCheck(int32 EntryPoint);
};

#endif
