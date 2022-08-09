#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SDIRenderSettingOverrides.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRenderSettingOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideVisibilitySettings;
    
    UPROPERTY(EditAnywhere)
    bool bOwnerNoSee;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyOwnerSee;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideShadowSettings;
    
    UPROPERTY(EditAnywhere)
    bool bCastShadow;
    
    UPROPERTY(EditAnywhere)
    bool bCastDynamicShadow;
    
    UPROPERTY(EditAnywhere)
    bool bCastHiddenShadow;
    
    UPROPERTY(EditAnywhere)
    bool bCastShadowAsTwoSided;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTranslucencySettings;
    
    UPROPERTY(EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDecalSettings;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCustomDepthSettings;
    
    UPROPERTY(EditAnywhere)
    bool bRenderInMainPass;
    
    UPROPERTY(EditAnywhere)
    bool bRenderCustomDepth;
    
    UPROPERTY(EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    FSDIRenderSettingOverrides();
};

