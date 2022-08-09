#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInteractiveActor.h"
#include "SDIMovementTargetActor_OnMovementStoppedDelegate.h"
#include "SDIMovementTargetActor_OnMovementStartedDelegate.h"
#include "SDIMovementTargetActor_OnMovementHighlightChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIMovementTargetActor.generated.h"

class ASDICharacter;
class USplineComponent;
class UBoxComponent;
class UArrowComponent;
class UPrimitiveComponent;
class ASDIMovementTargetActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIMovementTargetActor : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* LocationSpline;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* Collision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* Facing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSnapToDesiredFacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSnapToGround;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDIMovementTargetActor_OnMovementHighlightChanged OnMovementHighlightChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDIMovementTargetActor_OnMovementStarted OnMovementStartedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDIMovementTargetActor_OnMovementStopped OnMovementStoppedDelegate;
    
    ASDIMovementTargetActor();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateMovementHighlightTransform(ASDICharacter* Character, const FTransform& Transform);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTeleportSetVisibility(ASDICharacter* Character, bool bVisible);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMovementStopped(ASDICharacter* Character, bool bCancelled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMovementStarted(ASDICharacter* Character);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMovementHighlightChanged(ASDICharacter* Character, bool bHighlighted, UPrimitiveComponent* HighlightedComponent, UPrimitiveComponent* PrevHighlightedComponent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMovementTargetsInRadius(const FVector& Location, float Radius, TArray<ASDIMovementTargetActor*>& MovementTargetArray, TSubclassOf<ASDIMovementTargetActor> FilterClass, bool bExact);
    
    UFUNCTION(BlueprintPure)
    FTransform GetMovementTargetFromHitResult(const FHitResult& Hit, const FTransform& CurrentTransform) const;
    
};

