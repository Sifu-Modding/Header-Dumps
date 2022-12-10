#ifndef UE4SS_SDK_BP_MenuRequesterInterface_HPP
#define UE4SS_SDK_BP_MenuRequesterInterface_HPP

class IBP_MenuRequesterInterface_C : public IInterface
{

    void SetMenuRequests(const TArray<FMenuRequestStructure>& bpp__InRequestList__pf__const, bool bpp__bOpenMenu__pf__const);
    void GetMenuRequests(bool bpp__bConsume__pf, TArray<FMenuRequestStructure>& bpp__OutList__pf);
};

#endif
