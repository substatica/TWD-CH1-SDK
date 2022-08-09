#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIMotionHistoryEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIMotionHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FrameTime;
    
    FSDIMotionHistoryEntry();
};

