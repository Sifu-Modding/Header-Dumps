#ifndef UE4SS_SDK_BP_MultipleMenuRequestHandlerInterface_HPP
#define UE4SS_SDK_BP_MultipleMenuRequestHandlerInterface_HPP

class IBP_MultipleMenuRequestHandlerInterface_C : public IInterface
{

    void HandleMultipleMenuRequest(FString bpp__InArguments__pf__const, const TArray<FMenuRequestStructure>& bpp__InRequestList__pf__const);
};

#endif
