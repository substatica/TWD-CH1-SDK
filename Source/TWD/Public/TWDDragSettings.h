#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDDragSettings.generated.h"

USTRUCT(BlueprintType)
struct FTWDDragSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchSpringStiffnessConstant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchSpringDampeningRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YawSpringStiffnessConstant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YawSpringDampeningRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveForwardPitchVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveRightYawVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Limit;
    
    TWD_API FTWDDragSettings();
};

