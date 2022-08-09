#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "OnFinishedTrackSignatureDelegate.h"
#include "TWDSplineMovementComponent.generated.h"

class ATWDSplineTrackBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDSplineMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedTrackSignature OnFinishedTrack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDSplineTrackBase* SplineTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredSpeed;
    
public:
    UTWDSplineMovementComponent();
    UFUNCTION(BlueprintCallable)
    void UseDefaultSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetDistance(float NewDistance, bool bTriggerEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceleration(float NewAcceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingAlongSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDSplineTrackBase* GetSplineTrack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTrack(ATWDSplineTrackBase* NewTrack, bool bMaintainDistance);
    
};

