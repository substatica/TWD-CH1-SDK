#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "OnFinishedTrackSignatureDelegate.h"
#include "TWDSplineMovementComponent.generated.h"

class ATWDSplineTrackBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDSplineMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFinishedTrackSignature OnFinishedTrack;
    
protected:
    UPROPERTY(EditAnywhere)
    ATWDSplineTrackBase* SplineTrack;
    
    UPROPERTY(EditAnywhere)
    float DefaultSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Acceleration;
    
private:
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    float CurrentSpeed;
    
    UPROPERTY()
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
    
    UFUNCTION(BlueprintPure)
    bool IsMovingAlongSpline() const;
    
    UFUNCTION(BlueprintPure)
    ATWDSplineTrackBase* GetSplineTrack() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTrack(ATWDSplineTrackBase* NewTrack, bool bMaintainDistance);
    
};

