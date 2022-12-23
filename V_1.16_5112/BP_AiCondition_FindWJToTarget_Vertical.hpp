#ifndef UE4SS_SDK_BP_AiCondition_FindWJToTarget_Vertical_HPP
#define UE4SS_SDK_BP_AiCondition_FindWJToTarget_Vertical_HPP

class UBP_AiCondition_FindWJToTarget_Vertical_C : public UAIWallJumpFindActorToTargetCondition
{
    float WallJump_Goto_Distance_Max;
    float Angle Max Between MC-WJ-AI;

    FString BPE_GetLog();
    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
};

#endif
