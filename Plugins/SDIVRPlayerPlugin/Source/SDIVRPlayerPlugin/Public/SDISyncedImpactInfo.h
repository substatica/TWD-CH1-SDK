#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncedImpactInfo.generated.h"

USTRUCT(BlueprintType)
struct FSDISyncedImpactInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString HitSurfaceName;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FRotator Orientation;
    
    UPROPERTY()
    int32 IssuerId;
    
    UPROPERTY()
    float Magnitude;
    
    SDIVRPLAYERPLUGIN_API FSDISyncedImpactInfo();
};

