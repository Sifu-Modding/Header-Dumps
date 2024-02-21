#ifndef UE4SS_SDK_BP_NotifyLibrary_HPP
#define UE4SS_SDK_BP_NotifyLibrary_HPP

class UBP_NotifyLibrary_C : public UBlueprintFunctionLibrary
{

    void BPF Get Bone Name(class USkeletalMeshComponent* InMeshComp, TArray<uint8>& InExtraInfo, FName InDefaultBoneName, class UObject* __WorldContext, FName& OutBoneName, bool& OutIsMirrored);
}; // Size: 0x28

#endif
