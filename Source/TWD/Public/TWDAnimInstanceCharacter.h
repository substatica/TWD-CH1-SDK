#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "RRotator.h"
#include "SDIDoubleRubberBandVector.h"
#include "RVector.h"
#include "ETWDNonVRGrappleAnimState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIEnumTypeHandle.h"
#include "ECharacterBehavior.h"
#include "PlayAnimationResultCallbackDelegate.h"
#include "ETWDCharacterHitRegion.h"
#include "ETWDCharacterHitDirection.h"
#include "ECharacterPose.h"
#include "ECharacterGesture.h"
#include "ECharacterEmotion.h"
#include "TWDAnimInstanceCharacter.generated.h"

class USceneComponent;
class AActor;
class UDamageType;

UCLASS(NonTransient)
class TWD_API UTWDAnimInstanceCharacter : public USDIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsCrawlingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float LookAtAlpha;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* LookAtTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bForwardMeleeAttack;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator GrappleOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator GrappleOffsetRotSpring;
    
    UPROPERTY(EditAnywhere)
    FSDIDoubleRubberBandVector GrappleOffsetRubberBand;
    
    UPROPERTY(EditAnywhere)
    FRVector GrappleBlendSpaceExtent;
    
    UPROPERTY(EditAnywhere)
    float GrappleBlendSpaceSphericalWeight;
    
    UPROPERTY(EditAnywhere)
    FVector GrappleHandOffset;
    
    UPROPERTY(EditAnywhere)
    FRRotator GrappleHandRotationExtent;
    
    UPROPERTY(EditAnywhere)
    bool bDebugRenderGrappleBounds;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator GrappleAttackOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator GrappleAttackPushBackOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    FRVector GrappleAttackBlendSpaceExtent;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackBlendSpaceSphericalWeight;
    
    UPROPERTY(EditAnywhere)
    bool bGrappleAttackHandHMDIKOffsetInCharacterSpace;
    
    UPROPERTY(EditAnywhere)
    FVector GrappleAttackLeftHandHMDIKOffset;
    
    UPROPERTY(EditAnywhere)
    FVector GrappleAttackRightHandHMDIKOffset;
    
    UPROPERTY(EditAnywhere)
    FVector GrappleAttackHandArmWristIKOffset;
    
    UPROPERTY(EditAnywhere)
    FVector GrappleAttackHandArmElbowIKOffset;
    
    UPROPERTY(EditAnywhere)
    FName LeftHandGrappleSocket;
    
    UPROPERTY(EditAnywhere)
    FName RightHandGrappleSocket;
    
    UPROPERTY(EditAnywhere)
    bool bDebugRenderGrappleAttackBounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDNonVRGrappleAnimState NonVRGrappleAttackAnimState;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator BrainedOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator StabOffsetRotSpring;
    
    UPROPERTY(EditAnywhere)
    float StabOffsetRotVelocityDeg;
    
    UPROPERTY(EditAnywhere)
    FRVector BrainedBlendSpaceExtent;
    
    UPROPERTY(EditAnywhere)
    float BrainedBlendSpaceSphericalWeight;
    
    UPROPERTY(EditAnywhere)
    FVector BrainedBlendSpaceOffset;
    
    UPROPERTY(EditAnywhere)
    float BrainedPullDirectionTargetDecel;
    
    UPROPERTY(EditAnywhere)
    float BrainedPullDirectionVelocityDecel;
    
    UPROPERTY(EditAnywhere)
    FRRotator BrainedHandRotationExtent;
    
    UPROPERTY(EditAnywhere)
    bool bDebugRenderBrainedBounds;
    
    UPROPERTY(EditAnywhere)
    bool bAllowHeadHeldStateWhenStabbed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInGrappleState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleHandMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator GrappleOffsetRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrapplePercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGrappleAttacking;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGrappleIsHoldingArm;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleAttackLeftHandIKTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGrappleAttackLeftHandIKRotationValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator GrappleAttackLeftHandIKRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleAttackRightHandIKTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGrappleAttackRightHandIKRotationValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator GrappleAttackRightHandIKRotation;
    
    UPROPERTY(Transient)
    FRotator CurrentGrappleOffsetRot;
    
    UPROPERTY(Transient)
    FTransform LastGrappleHandTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInGrappleAttackState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInGrappleAttackPushBackState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleAttackOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleAttackBreakDirection;
    
    UPROPERTY(Transient)
    FTransform LastGrappleAttackTargetTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInBrainedState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInHeadHeldState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector BrainedOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator StabOffsetRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector BrainedStabDirection;
    
    UPROPERTY(Transient)
    FRotator CurrentStabOffsetRot;
    
    UPROPERTY(Transient)
    FQuat CurrentStabOffsetQuat;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasHeldStabWeapon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName CachedSnapshot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName CachedDeadSnapshot;
    
    UPROPERTY(Transient)
    float TimeWhenPhysicsOffBlendStops;
    
    UPROPERTY(EditAnywhere)
    float PhysicsOffBlendTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedDeadAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInStabState;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bRequestDeath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCanSeeTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bReadyToFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector TargetLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float IkHandGunTolerance;
    
    UPROPERTY(Transient)
    float AngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float AimOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FName AimOffsetPivotName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AimOffset;
    
    UPROPERTY(Transient)
    FQuat AimOffsetRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator IkHandGunRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECharacterBehavior CharacterBehavior;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsAggravate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsFlee;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsThreaten;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BlendInWeight;
    
    UPROPERTY(Transient)
    float BlendInTarget;
    
    UPROPERTY(EditAnywhere)
    float BlendInSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BlendOutWeight;
    
    UPROPERTY(Transient)
    float BlendOutTarget;
    
    UPROPERTY(EditAnywhere)
    float BlendOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BlendInOutWeightMax;
    
    UPROPERTY(EditAnywhere)
    FName StateMachineName[2];
    
    UPROPERTY(EditAnywhere)
    float StateElaspedTime;
    
    UPROPERTY(Transient)
    int32 StateMachineIndex[2];
    
    UTWDAnimInstanceCharacter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAnimationAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartInventoryExchange(bool bTake);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionSpeed(float newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetInAir(bool inAir);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadLookAtTargetComponent(USceneComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadLookAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadLookAtAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetGrappleAttackBreakDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetForwardMeleeAttack(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendOutWeight(float BlendWeight, float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendInWeight(float BlendWeight, float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationAction(FSDIEnumTypeHandle EnumTypeHandle, const FPlayAnimationResultCallback& PlayAnimationResultCallback, bool& RequestResult, float& AnimLength);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponClassChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPersonalSpacePushback();
    
    UFUNCTION(BlueprintCallable)
    void OnKnockBack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInventoryReceive(bool bLoop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInventoryGive(bool bLoop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitReaction(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* Instigator, TSubclassOf<UDamageType> DamageTypeClass, float WithSpeed, float WithMass, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByPhysicsActor(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* Instigator, float WithSpeed, float WithMass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrapplePushBack(const FVector& Direction, float PushBackDistance, float PushBackTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInInventoryExchange() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetVisemeWeights() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetIkHandGunTargetRotation() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterPose GetCharacterPose() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterGesture GetCharacterGesture() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterEmotion GetCharacterEmotion() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void AbortInventoryExchange();
    
};

