#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInteractiveActor.h"
#include "Engine/EngineTypes.h"
#include "SDIMovementTargetActor_OnMovementHighlightChangedDelegate.h"
#include "SDIMovementTargetActor_OnMovementStartedDelegate.h"
#include "SDIMovementTargetActor_OnMovementStoppedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIMovementTargetActor.generated.h"

class ASDICharacter;
class USplineComponent;
class UBoxComponent;
class UArrowComponent;
class UPrimitiveComponent;
class ASDIMovementTargetActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIMovementTargetActor : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* LocationSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* Facing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToDesiredFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToGround;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMovementTargetActor_OnMovementHighlightChanged OnMovementHighlightChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMovementTargetActor_OnMovementStarted OnMovementStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMovementTargetActor_OnMovementStopped OnMovementStoppedDelegate;
    
    ASDIMovementTargetActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMovementHighlightTransform(ASDICharacter* Character, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeleportSetVisibility(ASDICharacter* Character, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementStopped(ASDICharacter* Character, bool bCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementStarted(ASDICharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementHighlightChanged(ASDICharacter* Character, bool bHighlighted, UPrimitiveComponent* HighlightedComponent, UPrimitiveComponent* PrevHighlightedComponent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMovementTargetsInRadius(const FVector& Location, float Radius, TArray<ASDIMovementTargetActor*>& MovementTargetArray, TSubclassOf<ASDIMovementTargetActor> FilterClass, bool bExact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMovementTargetFromHitResult(const FHitResult& Hit, const FTransform& CurrentTransform) const;
    
};

