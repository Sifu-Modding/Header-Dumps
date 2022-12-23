#ifndef UE4SS_SDK_ParryFromDownSyncedService_HPP
#define UE4SS_SDK_ParryFromDownSyncedService_HPP

class UParryFromDownSyncedService_C : public UParryToHitActionOrderService
{

    void BPE_OnParryFailed(FBPOrderServiceInstance _description);
};

#endif
