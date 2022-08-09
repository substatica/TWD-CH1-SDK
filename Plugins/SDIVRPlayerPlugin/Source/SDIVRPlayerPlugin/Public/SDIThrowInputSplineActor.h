#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "SDIPlayerHandMove.h"
#include "SDIThrowInputSplineActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIThrowInputSplineActor : public ASDIInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcRequiresHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcThrowOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcAllowThrowBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcUseThrowMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove ArcThrowMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcThrowMoveYawAngleDeltaDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinArcVelocityUpdateArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinArcVelocityResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinArcVelocityMaxDistanceError;
    
public:
    ASDIThrowInputSplineActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateThrowInputSpline(float DeltaSeconds);
    
};

