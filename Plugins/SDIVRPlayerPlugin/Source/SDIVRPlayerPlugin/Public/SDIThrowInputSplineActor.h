#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "SDIPlayerHandMove.h"
#include "SDIThrowInputSplineActor.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIThrowInputSplineActor : public ASDIInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bArcRequiresHold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bArcThrowOnRelease;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bArcAllowThrowBehind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bArcUseThrowMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPlayerHandMove ArcThrowMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArcThrowMoveYawAngleDeltaDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMinArcVelocityUpdateArc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinArcVelocityResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinArcVelocityMaxDistanceError;
    
public:
    ASDIThrowInputSplineActor();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateThrowInputSpline(float DeltaSeconds);
    
};

