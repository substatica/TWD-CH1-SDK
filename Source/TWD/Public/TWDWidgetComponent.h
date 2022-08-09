#pragma once
#include "CoreMinimal.h"
#include "SDICoreWidgetComponent.h"
#include "Engine/EngineTypes.h"
#include "TWDWidgetComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDWidgetComponent : public USDICoreWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseLightingChannelOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLightingChannels LightingChannelOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseStereoLayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStereoLayerIgnoreDepth;
    
    UPROPERTY(EditAnywhere)
    uint32 StereoLayerPriority;
    
    UPROPERTY(Transient)
    uint32 StereoLayerID;
    
    UPROPERTY(Transient)
    bool bWorldSpace;
    
public:
    UTWDWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseStereoLayer(bool _bUseStereoLayer);
    
};

