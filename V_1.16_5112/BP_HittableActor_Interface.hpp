#ifndef UE4SS_SDK_BP_HittableActor_Interface_HPP
#define UE4SS_SDK_BP_HittableActor_Interface_HPP

class IBP_HittableActor_Interface_C : public IInterface
{

    void SetHitAnimHistory(const TArray<class UAnimSequence*>& bpp__NewAnimHistory__pf__const);
    void GetHitAnimHistory(TArray<class UAnimSequence*>& bpp__HitAnimHistory__pf);
};

#endif
