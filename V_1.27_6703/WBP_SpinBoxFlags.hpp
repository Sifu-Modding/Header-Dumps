#ifndef UE4SS_SDK_WBP_SpinBoxFlags_HPP
#define UE4SS_SDK_WBP_SpinBoxFlags_HPP

class UWBP_SpinBoxFlags_C : public UWBP_SpinBoxInt_C
{
    FText HasFlagText;                                                                // 0x0550 (size: 0x18)
    FText HasNotFlagText;                                                             // 0x0568 (size: 0x18)

    void GetFlag(int32& Flag);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void GetTextContent(FText& Content);
    void HasAllFlags(int32 Flags, bool& HasAllFlags);
    void HasAnyFlags(int32 Flags, bool& HasAnyFlags);
    void RemoveFlags(int32 Value);
    void AddFlags(int32 Value);
}; // Size: 0x580

#endif
