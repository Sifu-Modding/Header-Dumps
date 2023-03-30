#ifndef UE4SS_SDK_Amb_MultiPos_Blueprint_HPP
#define UE4SS_SDK_Amb_MultiPos_Blueprint_HPP

class AAmb_MultiPos_Blueprint_C : public AAmb_Master_Blueprint_C
{
    TArray<FTransform> MultiPosPositions;                                             // 0x02F0 (size: 0x10)
    AkMultiPositionType MultiPositionType;                                            // 0x0300 (size: 0x1)

    void PlayEvent(class UAkComponent* AkComponent);
    void SetMultiPosition();
    void UserConstructionScript();
}; // Size: 0x301

#endif
