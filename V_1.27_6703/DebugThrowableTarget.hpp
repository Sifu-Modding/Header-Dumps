#ifndef UE4SS_SDK_DebugThrowableTarget_HPP
#define UE4SS_SDK_DebugThrowableTarget_HPP

class UDebugThrowableTarget_C : public UUserWidget
{
    class UTextBlock* Distance;                                                       // 0x0268 (size: 0x8)
    class UTextBlock* TextValidTarget;                                                // 0x0270 (size: 0x8)
    FColor ValidColor;                                                                // 0x0278 (size: 0x4)
    FColor InvalidColor;                                                              // 0x027C (size: 0x4)

    void SetTextAndColor(FLinearColor NewColor, FString newText);
    void UpdateDistance(FText newText);
}; // Size: 0x280

#endif
