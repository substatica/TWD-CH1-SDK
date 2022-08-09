#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "SDIExportActor.h"
#include "SDITimestampInputButton.h"
#include "RVector.h"
#include "SDICameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "SDICachedRigidBodyState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDINonVRObjectInteractionActor.generated.h"

class USceneComponent;
class ASDIInteractiveActor;
class ASDIInventorySlot;
class AActor;
class ASDIPlayerController;
class APlayerCameraManager;
class APawn;
class ASDIHeldActor;
class UCameraComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDINonVRObjectInteractionActor : public ASDIExportActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSDITimestampInputButton InputCancelButton;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MovementRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* AttachmentRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRVector MovementClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputMovementRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputRotationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputRotationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDICameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat ActorBoundsClampForPosition;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInteractiveActor> CurrentActor;
    
    UPROPERTY(Transient)
    FTransform CachedActorTransform;
    
    UPROPERTY(Transient)
    FSDIAttachmentInfo CachedActorAttachment;
    
    UPROPERTY(Transient)
    FSDICachedRigidBodyState CachedActorRigidBodyState;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventorySlot> CachedActorInventorySlot;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CachedActorInventoryOwner;
    
    UPROPERTY(Transient)
    bool bCachedActorSimulatingPhysics;
    
    UPROPERTY(Transient)
    bool bCachedActorCollision;
    
    UPROPERTY(Transient)
    bool bCachedActorInsideInventory;
    
    UPROPERTY(Transient)
    bool bCachedActorTickEnabled;
    
    UPROPERTY(Transient)
    bool bIsInteracting;
    
public:
    ASDINonVRObjectInteractionActor();
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool StartInteraction(ASDIInteractiveActor* Actor);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void ShowInteractionUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetMovement();
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION()
    void InputMoveUp(float Value);
    
    UFUNCTION()
    void InputMoveRotateYawAtRate(float Value);
    
    UFUNCTION()
    void InputMoveRotateYaw(float Value);
    
    UFUNCTION()
    void InputMoveRotateRollAtRate(float Value);
    
    UFUNCTION()
    void InputMoveRotateRoll(float Value);
    
    UFUNCTION()
    void InputMoveRotatePitchAtRate(float Value);
    
    UFUNCTION()
    void InputMoveRotatePitch(float Value);
    
    UFUNCTION()
    void InputMoveRight(float Value);
    
    UFUNCTION()
    void InputMoveForward(float Value);
    
    UFUNCTION()
    void InputCancelReleased();
    
    UFUNCTION()
    void InputCancelPressed();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void HideInteractionUI();
    
public:
    UFUNCTION(BlueprintPure)
    ASDIPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    APlayerCameraManager* GetPlayerCameraManager() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    FSDITimestampInputButton GetInputCancelButton() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetGripTransform(ASDIHeldActor* HeldActor) const;
    
public:
    UFUNCTION(BlueprintPure)
    ASDIInteractiveActor* GetCurrentActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCameraActor() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCamera() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void EndInteraction(ASDIInteractiveActor* Actor);
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginInteraction(ASDIInteractiveActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustRotation(FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    void AdjustPosition(FVector Offset);
    
};

