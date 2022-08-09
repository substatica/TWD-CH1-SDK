#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "SDICollisionSettingOverrides.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDICollisionSettingOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideCollisionSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateOverlapEvents;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance BodyInstance;
    
    FSDICollisionSettingOverrides();
};

