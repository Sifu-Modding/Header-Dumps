#ifndef UE4SS_SDK_BP_TraversalAnimRequest_HPP
#define UE4SS_SDK_BP_TraversalAnimRequest_HPP

class UBP_TraversalAnimRequest_C : public UTraversalAnimRequest
{
    FTraversalAnimContainer MidHeightV0NorthLong;                                     // 0x0028 (size: 0x80)
    FTraversalAnimContainer MidHeightV0NorthFence;                                    // 0x00A8 (size: 0x80)
    FTraversalAnimContainer MidHeightV0NorthShort;                                    // 0x0128 (size: 0x80)
    FTraversalAnimContainer MidHeightV0EastShort;                                     // 0x01A8 (size: 0x80)
    FTraversalAnimContainer MidHeightV0WestShort;                                     // 0x0228 (size: 0x80)
    FTraversalAnimContainer MidHeightV2NorthMedium;                                   // 0x02A8 (size: 0x80)
    FTraversalAnimContainer MidHeightV0SouthFence;                                    // 0x0328 (size: 0x80)
    FTraversalAnimContainer MidHeightV2NorthLong;                                     // 0x03A8 (size: 0x80)
    FTraversalAnimContainer MidHeightV3NorthLong;                                     // 0x0428 (size: 0x80)
    FTraversalAnimContainer MidHeightV2NorthFence;                                    // 0x04A8 (size: 0x80)
    FTraversalAnimContainer MidHeightV3NorthMedium;                                   // 0x0528 (size: 0x80)
    FTraversalAnimContainer MidHeightV3NorthFence;                                    // 0x05A8 (size: 0x80)
    float shortDepth;                                                                 // 0x0628 (size: 0x4)
    float LongDepth;                                                                  // 0x062C (size: 0x4)
    FTraversalAnimContainer MidHeightV0EastLong;                                      // 0x0630 (size: 0x80)
    FTraversalAnimContainer MidHeightV0EastFence;                                     // 0x06B0 (size: 0x80)
    FTraversalAnimContainer MidHeightV0WestLong;                                      // 0x0730 (size: 0x80)
    FTraversalAnimContainer MidHeightV0WestFence;                                     // 0x07B0 (size: 0x80)
    FTraversalAnimContainer MidHeightV0SouthShort;                                    // 0x0830 (size: 0x80)
    FTraversalAnimContainer MidHeightV0SouthLong;                                     // 0x08B0 (size: 0x80)
    FTraversalAnimContainer MidHeightV0NorthLong_Attack;                              // 0x0930 (size: 0x80)
    FTraversalAnimContainer MidHeightV0NorthLong_Attack_Down;                         // 0x09B0 (size: 0x80)
    FTraversalAnimContainer ClimbLowHeightV0;                                         // 0x0A30 (size: 0x80)
    float ClimbHeightLow;                                                             // 0x0AB0 (size: 0x4)
    float ClimbHeightHigh;                                                            // 0x0AB4 (size: 0x4)
    float HeightLow;                                                                  // 0x0AB8 (size: 0x4)
    float HeightHigh;                                                                 // 0x0ABC (size: 0x4)
    FTraversalAnimContainer ClimbHighHeightV0;                                        // 0x0AC0 (size: 0x80)
    FTraversalAnimContainer MidHeightV0SouthShort_Evasion;                            // 0x0B40 (size: 0x80)
    FTraversalAnimContainer MidHeightV0NorthShort_Attack;                             // 0x0BC0 (size: 0x80)
    FTraversalAnimContainer PushlTraversalSouth;                                      // 0x0C40 (size: 0x80)
    FTraversalAnimContainer ClimbLowHeightV0_WithFence;                               // 0x0CC0 (size: 0x80)
    FTraversalAnimContainer ClimbHighHeightV0_WithFence;                              // 0x0D40 (size: 0x80)
    FTraversalAnimContainer DropDownMidHeightV0;                                      // 0x0DC0 (size: 0x80)
    FTraversalAnimContainer DropDownHighHeightV0;                                     // 0x0E40 (size: 0x80)
    FTraversalAnimContainer DropDownLowHeightV0;                                      // 0x0EC0 (size: 0x80)
    FPushTraversalAnimContainer PushCloseFallNorth;                                   // 0x0F40 (size: 0x98)
    FPushTraversalAnimContainer PushCloseFallSouth;                                   // 0x0FD8 (size: 0x98)
    FPushTraversalAnimContainer PushCloseFallEast;                                    // 0x1070 (size: 0x98)
    FPushTraversalAnimContainer PushCloseFallWest;                                    // 0x1108 (size: 0x98)
    float ClimbWithFenceHeightLow;                                                    // 0x11A0 (size: 0x4)
    float ClimbWithFenceHeightHigh;                                                   // 0x11A4 (size: 0x4)
    FTraversalAnimContainer ClimbMidHeightV0;                                         // 0x11A8 (size: 0x80)
    float HeightMid;                                                                  // 0x1228 (size: 0x4)
    float ClimbHeightMid;                                                             // 0x122C (size: 0x4)
    float ClimbWithFenceHeightMid;                                                    // 0x1230 (size: 0x4)

    void BPE_GetCustomTraversalLandingAnimation(class AActor* _requester, const FTraversalInfo& _request, const float _fFallHeight, const FAnimContainer& _defaultLandAnimContainer, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FAnimContainer& _outLandAnimContainer);
    void Setup(FTraversalInfo Request, TEnumAsByte<BP_EnumTraversalHeight>& HeightEnum, TEnumAsByte<BP_EnumTraversalLength>& LengthEnum);
    void BPE_GetTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FTraversalAnimContainer& _outResult);
}; // Size: 0x1234

#endif
