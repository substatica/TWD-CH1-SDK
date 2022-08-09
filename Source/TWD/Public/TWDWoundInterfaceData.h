#pragma once
#include "CoreMinimal.h"
#include "TWDWoundEllipsoid.h"
#include "TWDWoundInterfaceData.generated.h"

USTRUCT(BlueprintType)
struct FTWDWoundInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDWoundEllipsoid> WoundEllipsoids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWounds;
    
    TWD_API FTWDWoundInterfaceData();
};

