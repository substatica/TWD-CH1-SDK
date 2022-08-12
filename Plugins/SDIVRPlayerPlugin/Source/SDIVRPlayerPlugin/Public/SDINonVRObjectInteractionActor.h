#pragma once
#include "CoreMinimal.h"
#include "SDITimestampInputButton.h"
#include "SDIExportActor.h"
#include "RVector.h"
#include "SDICameraSettings.h"
#include "RFloat.h"
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

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDINonVRObjectInteractionActor : public ASDIExportActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MovementRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachmentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector MovementClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputMovementRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat ActorBoundsClampForPosition;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInteractiveActor> CurrentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform CachedActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIAttachmentInfo CachedActorAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDICachedRigidBodyState CachedActorRigidBodyState;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventorySlot> CachedActorInventorySlot;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> CachedActorInventoryOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedActorSimulatingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedActorCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedActorInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedActorTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInteracting;
    
public:
    ASDINonVRObjectInteractionActor();
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool StartInteraction(ASDIInteractiveActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowInteractionUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintCallable)
    void InputMoveUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotateYawAtRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotateYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotateRollAtRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotateRoll(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotatePitchAtRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRotatePitch(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputCancelReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputCancelPressed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideInteractionUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCameraManager* GetPlayerCameraManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITimestampInputButton GetInputCancelButton() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetGripTransform(ASDIHeldActor* HeldActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInteractiveActor* GetCurrentActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCameraActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCamera() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndInteraction(ASDIInteractiveActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginInteraction(ASDIInteractiveActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustRotation(FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    void AdjustPosition(FVector Offset);
    
};

