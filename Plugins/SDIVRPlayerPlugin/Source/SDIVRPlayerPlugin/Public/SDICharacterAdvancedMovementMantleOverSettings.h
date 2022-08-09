#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "SDICharacterAdvancedMovementMantleOverSettings.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDICharacterAdvancedMovementMantleOverSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequireBothHands;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForwardDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VerticalClearance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HorizontalClearance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Velocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdjustEyeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat EyeHeightOffsetRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableAutoMantle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoMantleMinVerticalHandDistance;
    
    FSDICharacterAdvancedMovementMantleOverSettings();
};

