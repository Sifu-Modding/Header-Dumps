#ifndef UE4SS_SDK_BP_Library_Widget_HPP
#define UE4SS_SDK_BP_Library_Widget_HPP

class UBP_Library_Widget_C : public UBlueprintFunctionLibrary
{

    void UpdateWidgetPositionWithOutOfScreen(class UWidget* bpp__Widget__pf, FVector bpp__Location__pf, FVector bpp__3dxOffset__pfT, FVector2D bpp__2dxOffset__pfT, FVector2D bpp__EllipticRadius__pf, class UObject* bpp____WorldContext__pf, bool& bpp__OnEllipse__pf, float& bpp__Angle__pf);
    void SetWidgetPositionFrom3D(class UWidget* bpp__Widget__pf, FVector bpp__Location__pf, FVector bpp__3dxOffset__pfT, FVector2D bpp__2dxOffset__pfT, class UObject* bpp____WorldContext__pf, bool& bpp__2DProjSuccess__pf);
    void SetEllipticPosition(FVector2D bpp__Radius__pf, float bpp__Angle__pf, class UWidget* bpp__Widget__pf, class UObject* bpp____WorldContext__pf);
    void ScaleTextFix(class UWidget* bpp__Target__pf, class UWidget* bpp__text__pf, class UObject* bpp____WorldContext__pf);
    void ScaleText(class UTextBlock* bpp__Target__pf, int32 bpp__Default__pf, float bpp__Scale__pf, class UObject* bpp____WorldContext__pf);
    void ScaleRichText(class URichTextBlock* bpp__Target__pf, int32 bpp__Default__pf, float bpp__Scale__pf, class UObject* bpp____WorldContext__pf);
    void MixColorChannel(float bpp__ColorA__pf, float bpp__ColorB__pf, float bpp__Multiplier__pf, class UObject* bpp____WorldContext__pf, float& bpp__BlendedChannel__pf);
    void GetWidgetRatio(FGeometry bpp__WidgetSize__pf, class UObject* bpp____WorldContext__pf, FVector2D& bpp__WidgetRatio__pf);
    void FormatScheduleDate(FDateTime bpp__Date__pf, class UObject* bpp____WorldContext__pf, FText& bpp__Result__pf);
}; // Size: 0x28

#endif
