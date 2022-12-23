#ifndef UE4SS_SDK_MovieRenderPipelineSettings_HPP
#define UE4SS_SDK_MovieRenderPipelineSettings_HPP

class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
    FSoftClassPath BurnInClass;
    bool bCompositeOntoFinalImage;
    class UTextureRenderTarget2D* RenderTarget;
    class UMoviePipelineBurnInWidget* BurnInWidgetInstance;

};

class UMoviePipelineBurnInWidget : public UUserWidget
{

    void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
};

class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
    TMap<FString, float> ConsoleVariables;
    TArray<FString> StartConsoleCommands;
    TArray<FString> EndConsoleCommands;

};

class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
    class UTextureRenderTarget2D* RenderTarget;

};

#endif
