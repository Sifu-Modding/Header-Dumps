#ifndef UE4SS_SDK_BP_HUD_ArenaStars_HPP
#define UE4SS_SDK_BP_HUD_ArenaStars_HPP

class UBP_HUD_ArenaStars_C : public UUserWidget
{
    class UCheckBox* Star1;
    class UCheckBox* Star2;
    class UCheckBox* Star3;
    TArray<class UCheckBox*> Stars;
    class UAkAudioEvent* Temp_object_Variable;
    class UAkAudioEvent* Temp_object_Variable_1;
    bool Temp_bool_Variable;
    ECheckBoxState Temp_byte_Variable;
    ECheckBoxState Temp_byte_Variable_1;
    int32 Temp_int_Array_Index_Variable;
    int32 Temp_int_Loop_Counter_Variable;
    class UWidget* CallFunc_Array_Get_Item;
    class UCheckBox* K2Node_DynamicCast_AsCheck_Box;
    bool K2Node_DynamicCast_bSuccess;
    bool Temp_bool_Variable_1;
    int32 K2Node_CustomEvent__newCount;
    int32 K2Node_CustomEvent__oldCount;
    class UAkAudioEvent* K2Node_Select_Default;
    ECheckBoxState K2Node_Select_Default_1;
    FBP_HUD_ArenaStars_CTemp_delegate_Variable Temp_delegate_Variable;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;

    void Setup();
    void OnStarsCountChanged(int32 bpp___newCount__pf, int32 bpp___oldCount__pf);
    void Construct();
    void OnStarsCountChanged__DelegateSignature(int32 bpp___newCount__pf, int32 bpp___oldCount__pf);
};

#endif
