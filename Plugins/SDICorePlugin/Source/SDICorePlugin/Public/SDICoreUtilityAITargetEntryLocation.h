#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAITargetEntryLocation.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAITargetEntryLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Delta;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector NormDelta;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ViewAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Distance2D;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LOSTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LostLOSTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHadLOS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasLOS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasUpdated;
    
    FSDICoreUtilityAITargetEntryLocation();
};

