#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
};

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;
    TSoftObjectPtr<UMaterialInterface> Material;

};

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;
    bool bDisableMultisampleEffects;
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;
    bool bAddDefaultLayer;
    TArray<FActorLayer> StencilLayers;
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;
    class UMaterialInterface* StencilLayerMaterial;
    TArray<class UTextureRenderTarget2D*> TileRenderTargets;

};

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
};

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;
    bool bMultilayer;

};

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
};

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
};

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
};

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormat;

};

#endif
