#ifndef UE4SS_SDK_BP_SequenceInterface_HPP
#define UE4SS_SDK_BP_SequenceInterface_HPP

class IBP_SequenceInterface_C : public IInterface
{

    void SetKillerActor(class AActor* bpp__Actor__pf);
    void GetKillerActor(class AActor*& bpp__Actor__pf);
};

#endif
