#ifndef UE4SS_SDK_BP_TraversalAnimRequest_HPP
#define UE4SS_SDK_BP_TraversalAnimRequest_HPP

class UBP_TraversalAnimRequest_C : public UTraversalAnimRequest
{
    FTraversalAnimContainer MidHeightV0NorthLong;
    FTraversalAnimContainer MidHeightV0NorthFence;
    FTraversalAnimContainer MidHeightV0NorthShort;
    FTraversalAnimContainer MidHeightV0EastShort;
    FTraversalAnimContainer MidHeightV0WestShort;
    FTraversalAnimContainer MidHeightV2NorthMedium;
    FTraversalAnimContainer MidHeightV0SouthFence;
    FTraversalAnimContainer MidHeightV2NorthLong;
    FTraversalAnimContainer MidHeightV3NorthLong;
    FTraversalAnimContainer MidHeightV2NorthFence;
    FTraversalAnimContainer MidHeightV3NorthMedium;
    FTraversalAnimContainer MidHeightV3NorthFence;
    float shortDepth;
    float LongDepth;
    FTraversalAnimContainer MidHeightV0EastLong;
    FTraversalAnimContainer MidHeightV0EastFence;
    FTraversalAnimContainer MidHeightV0WestLong;
    FTraversalAnimContainer MidHeightV0WestFence;
    FTraversalAnimContainer MidHeightV0SouthShort;
    FTraversalAnimContainer MidHeightV0SouthLong;
    FTraversalAnimContainer MidHeightV0NorthLong_Attack;
    FTraversalAnimContainer MidHeightV0NorthLong_Attack_Down;
    FTraversalAnimContainer ClimbLowHeightV0;
    float ClimbHeightLow;
    float ClimbHeightHigh;
    float HeightLow;
    float HeightHigh;
    FTraversalAnimContainer ClimbHighHeightV0;
    FTraversalAnimContainer MidHeightV0SouthShort_Evasion;
    FTraversalAnimContainer MidHeightV0NorthShort_Attack;
    FTraversalAnimContainer PushlTraversalSouth;
    FTraversalAnimContainer ClimbLowHeightV0_WithFence;
    FTraversalAnimContainer ClimbHighHeightV0_WithFence;
    FTraversalAnimContainer DropDownMidHeightV0;
    FTraversalAnimContainer DropDownHighHeightV0;
    FTraversalAnimContainer DropDownLowHeightV0;
    FPushTraversalAnimContainer PushCloseFallNorth;
    FPushTraversalAnimContainer PushCloseFallSouth;
    FPushTraversalAnimContainer PushCloseFallEast;
    FPushTraversalAnimContainer PushCloseFallWest;
    float ClimbWithFenceHeightLow;
    float ClimbWithFenceHeightHigh;
    FTraversalAnimContainer ClimbMidHeightV0;
    float HeightMid;
    float ClimbHeightMid;
    float ClimbWithFenceHeightMid;

    void BPE_GetCustomTraversalLandingAnimation(class AActor* _requester, const FTraversalInfo& _request, const float _fFallHeight, const FAnimContainer& _defaultLandAnimContainer, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FAnimContainer& _outLandAnimContainer);
    void Setup(FTraversalInfo Request, TEnumAsByte<BP_EnumTraversalHeight>& HeightEnum, TEnumAsByte<BP_EnumTraversalLength>& LengthEnum);
    void BPE_GetTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FTraversalAnimContainer& _outResult);
};

#endif
