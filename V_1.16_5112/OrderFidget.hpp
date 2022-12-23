#ifndef UE4SS_SDK_OrderFidget_HPP
#define UE4SS_SDK_OrderFidget_HPP

class UOrderFidget_C : public UOrderFidgetDB
{

    void BPE_OnOrderStarted(uint8 _uiOrderId, class UOrderComponent* _component);
};

#endif
