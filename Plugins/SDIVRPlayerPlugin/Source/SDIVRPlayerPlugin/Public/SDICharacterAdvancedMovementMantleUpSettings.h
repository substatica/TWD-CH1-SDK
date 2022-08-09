#pragma once
#include "CoreMinimal.h"
#include "SDICharacterAdvancedMovementMantleUpSettings.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDICharacterAdvancedMovementMantleUpSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequireBothHands;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForwardDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VerticalClearance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Velocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableAutoMantle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoMantleMinVerticalHandDistance;
    
    FSDICharacterAdvancedMovementMantleUpSettings();
};

