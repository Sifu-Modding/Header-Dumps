#ifndef UE4SS_SDK_Amb_MultiPos_Blueprint_HPP
#define UE4SS_SDK_Amb_MultiPos_Blueprint_HPP

class AAmb_MultiPos_Blueprint_C : public AAkAmbientSound
{
    TArray<FTransform> MultiPosPositions;
    AkMultiPositionType MultiPositionType;

    void SetMultiPosition();
    void UserConstructionScript();
};

#endif
