#ifndef UE4SS_SDK_BP_AiCondition_FindWJToTarget_Vertical_HPP
#define UE4SS_SDK_BP_AiCondition_FindWJToTarget_Vertical_HPP

class UBP_AiCondition_FindWJToTarget_Vertical_C : public UAIWallJumpFindActorToTargetCondition
{
    float WallJump_Goto_Distance_Max;                                                 // 0x0128 (size: 0x4)
    float Angle Max Between MC-WJ-AI;                                                 // 0x012C (size: 0x4)

    FString BPE_GetLog();
    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
}; // Size: 0x130

#endif
