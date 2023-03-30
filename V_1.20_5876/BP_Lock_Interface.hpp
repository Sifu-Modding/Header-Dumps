#ifndef UE4SS_SDK_BP_Lock_Interface_HPP
#define UE4SS_SDK_BP_Lock_Interface_HPP

class IBP_Lock_Interface_C : public IInterface
{

    void ResetLockOffset();
    void SetLockOffset(FVector Offset);
}; // Size: 0x28

#endif
