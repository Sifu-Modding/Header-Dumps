#ifndef UE4SS_SDK_BP_PrefixRoleNameHandler_HPP
#define UE4SS_SDK_BP_PrefixRoleNameHandler_HPP

class UBP_PrefixRoleNameHandler_C : public UNameHandler
{
    FString Prefix;

    FString BPE_GetNameFromIndex(int32 _iIndex);
    int32 BPE_GetIndexFromName(const FString& _inName);
};

#endif
