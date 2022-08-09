#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveActor.h"
#include "SDIGripInfo.h"
#include "UObject/NoExportTypes.h"
#include "EHandleType.h"
#include "SDIHingedActorHandle.generated.h"

class UPrimitiveComponent;
class UArrowComponent;
class ASDIPlayerHand;
class UActorComponent;
class ASDISlidingInteractiveActor;
class ASDIHingedInteractiveActor;
class AActor;

UCLASS()
class TWD_API ASDIHingedActorHandle : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UPrimitiveComponent* GrippedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UArrowComponent* RotationDetectionArrow;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EHandleType HandleType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float RotationToOpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float RotationAllowedIfUnlocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float RotationAllowedIfLocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ArmLengthReleaseFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ArmLengthReleaseFactorTime;
    
    UPROPERTY(Export, Transient)
    TArray<UActorComponent*> GripPoints;
    
    UPROPERTY(Transient)
    TArray<FVector> GripPointInitialWorldLocations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceHideHighlight;
    
    UPROPERTY(Export, Transient)
    UActorComponent* CurrentGrippedComponent;
    
    UPROPERTY(Transient)
    FSDIGripInfo CurrentGrippedInfo;
    
    ASDIHingedActorHandle();
    UFUNCTION(BlueprintCallable)
    void SetDoorLocked(bool bNewLock);
    
    UFUNCTION(BlueprintCallable)
    bool IsDoorLocked();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoorClosed();
    
    UFUNCTION(BlueprintCallable)
    ASDISlidingInteractiveActor* GetSlidingActor();
    
    UFUNCTION(BlueprintCallable)
    ASDIHingedInteractiveActor* GetHingedActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetDoor();
    
};

