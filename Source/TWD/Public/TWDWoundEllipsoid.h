#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWoundType.h"
#include "TWDWoundEllipsoid.generated.h"

USTRUCT(BlueprintType)
struct FTWDWoundEllipsoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidCenter;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidUp;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidRight;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidForward;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidCenterWorld;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidUpWorld;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidRightWorld;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EllipsoidForwardWorld;
    
    UPROPERTY(BlueprintReadWrite)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D SplashRatio;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SplashSize;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxDent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Tile;
    
    UPROPERTY(BlueprintReadWrite)
    EWoundType WoundType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bProtected;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShowLimb;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDoSever;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WoundID;
    
    UPROPERTY(BlueprintReadOnly)
    float WoundTimestamp;
    
    TWD_API FTWDWoundEllipsoid();
};

