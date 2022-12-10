#ifndef UE4SS_SDK_DebugThrowableTarget_HPP
#define UE4SS_SDK_DebugThrowableTarget_HPP

class UDebugThrowableTarget_C : public UUserWidget
{
    class UTextBlock* Distance;
    class UTextBlock* TextValidTarget;
    FColor ValidColor;
    FColor InvalidColor;

    void SetTextAndColor(FLinearColor NewColor, FString newText);
    void UpdateDistance(FText newText);
};

#endif
