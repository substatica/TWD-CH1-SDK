#pragma once
#include "CoreMinimal.h"
#include "TWDWoundEllipsoid.h"
#include "TWDWoundInterfaceData.generated.h"

USTRUCT(BlueprintType)
struct FTWDWoundInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FTWDWoundEllipsoid> WoundEllipsoids;
    
    UPROPERTY(Transient)
    int32 NumberOfWounds;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxWounds;
    
    TWD_API FTWDWoundInterfaceData();
};

