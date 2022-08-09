#pragma once
#include "CoreMinimal.h"
#include "SDICoreWidgetComponent.h"
#include "Engine/EngineTypes.h"
#include "TWDWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDWidgetComponent : public USDICoreWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLightingChannelOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannelOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStereoLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStereoLayerIgnoreDepth;
    
    UPROPERTY(EditAnywhere)
    uint32 StereoLayerPriority;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 StereoLayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWorldSpace;
    
public:
    UTWDWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseStereoLayer(bool _bUseStereoLayer);
    
};

