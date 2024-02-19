#ifndef UE4SS_SDK_BP_PushObjectAnimRequest_HPP
#define UE4SS_SDK_BP_PushObjectAnimRequest_HPP

class UBP_PushObjectAnimRequest_C : public UPushObjectAnimRequest
{

    class UAnimSequence* BPE_GetPushAnimation(const class AActor* _Instigator, const FVector& _vTargetDir, const class APushableActor* _pushable, bool& _bOutMirror);
}; // Size: 0x28

#endif
