#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> Material;                                      // 0x0008 (size: 0x28)

}; // Size: 0x30

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;                                                   // 0x00C8 (size: 0x1)
    bool bDisableMultisampleEffects;                                                  // 0x00C9 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x00D0 (size: 0x10)
    bool bAddDefaultLayer;                                                            // 0x00E0 (size: 0x1)
    TArray<FActorLayer> StencilLayers;                                                // 0x00E8 (size: 0x10)
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;                     // 0x00F8 (size: 0x10)
    class UMaterialInterface* StencilLayerMaterial;                                   // 0x0108 (size: 0x8)
    TArray<class UTextureRenderTarget2D*> TileRenderTargets;                          // 0x0110 (size: 0x10)

}; // Size: 0x160

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x160

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x160

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x160

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x160

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x160

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
}; // Size: 0xC8

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;                                                // 0x0068 (size: 0x1)
    bool bMultilayer;                                                                 // 0x0069 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormat;                                                           // 0x0048 (size: 0x10)

}; // Size: 0x70

#endif
