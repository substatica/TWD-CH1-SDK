#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDInteractiveActor.h"
#include "EHandleType.h"
#include "SDIGripInfo.h"
#include "SDIHingedActorHandle.generated.h"

class UPrimitiveComponent;
class ASDIPlayerHand;
class UArrowComponent;
class UActorComponent;
class ASDISlidingInteractiveActor;
class ASDIHingedInteractiveActor;
class AActor;

UCLASS(Blueprintable)
class TWD_API ASDIHingedActorHandle : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* GrippedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RotationDetectionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandleType HandleType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationToOpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAllowedIfUnlocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAllowedIfLocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLengthReleaseFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLengthReleaseFactorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> GripPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> GripPointInitialWorldLocations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHideHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* CurrentGrippedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

