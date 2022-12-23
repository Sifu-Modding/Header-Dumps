#ifndef UE4SS_SDK_OrderFallOnSlope_HPP
#define UE4SS_SDK_OrderFallOnSlope_HPP

class UOrderFallOnSlope_C : public UOrderFallOnSlopeDB
{
    class USurfacesData_C* SoundSurfacesDataAsset;

    void BPE_BodyRollLoopMaterialSwitch(class UObject* _owner, uint8 _uiOrderId, const class UPhysicalMaterial* _floorMaterial);
    void BPE_StopBodyRollLoop(class UObject* _owner, uint8 _uiOrderId);
    void BPE_StartBodyRollLoop(class UObject* _owner, uint8 _uiOrderId, const class UPhysicalMaterial* _floorMaterial, bool _bInitialTrace);
};

#endif
