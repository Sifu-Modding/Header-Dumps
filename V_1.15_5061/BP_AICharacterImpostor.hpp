#ifndef UE4SS_SDK_BP_AICharacterImpostor_HPP
#define UE4SS_SDK_BP_AICharacterImpostor_HPP

class ABP_AICharacterImpostor_C : public ABaseCharacterImpostor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Ak;
    class UTextureRenderTarget2D* TextureMask;
    FName TextureMaskName;
    float ChannelUV;
    FName ChannelUVName;
    TArray<class UMaterialInterface*> MaterialsArray;

    void SetupMaterialParameters(class USCDynamicTextureMask* InputPin);
    void BPE_MimicCharacter(class ASCCharacter* _characterToMimic);
    void ExecuteUbergraph_BP_AICharacterImpostor(int32 EntryPoint);
};

#endif
