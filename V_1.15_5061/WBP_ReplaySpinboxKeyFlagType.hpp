#ifndef UE4SS_SDK_WBP_ReplaySpinboxKeyFlagType_HPP
#define UE4SS_SDK_WBP_ReplaySpinboxKeyFlagType_HPP

class UWBP_ReplaySpinboxKeyFlagType_C : public UWBP_SpinBoxFlags_C
{
    int32 ReplayKeyTypeFlag;

    void GetFlag(int32& Flag);
};

#endif
