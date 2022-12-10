#ifndef UE4SS_SDK_OpenColorIO_HPP
#define UE4SS_SDK_OpenColorIO_HPP

struct FOpenColorIOColorSpace
{
    FString ColorSpaceName;
    int32 ColorSpaceIndex;
    FString FamilyName;

};

struct FOpenColorIOColorConversionSettings
{
    class UOpenColorIOConfiguration* ConfigurationSource;
    FOpenColorIOColorSpace SourceColorSpace;
    FOpenColorIOColorSpace DestinationColorSpace;

};

struct FOpenColorIODisplayConfiguration
{
    bool bIsEnabled;
    FOpenColorIOColorConversionSettings ColorConfiguration;

};

class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool ApplyColorSpaceTransform(const class UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
};

class UOpenColorIOColorTransform : public UObject
{
    class UOpenColorIOConfiguration* ConfigurationOwner;
    FString SourceColorSpace;
    FString DestinationColorSpace;

};

class UOpenColorIOConfiguration : public UObject
{
    FFilePath ConfigurationFile;
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    TArray<class UOpenColorIOColorTransform*> ColorTransforms;

};

class UOpenColorIODisplayExtensionWrapper : public UObject
{

    void SetSceneExtensionIsActiveFunctions(const TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    void SetSceneExtensionIsActiveFunction(const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    void RemoveSceneExtension();
    class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
};

#endif
