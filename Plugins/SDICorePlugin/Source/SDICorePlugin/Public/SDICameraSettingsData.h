#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SDICameraSettingsData.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraSettingsData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
public:
    FSDICameraSettingsData();
};

