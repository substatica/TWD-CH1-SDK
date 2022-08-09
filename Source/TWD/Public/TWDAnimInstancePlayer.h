#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimInstance.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDHandItemState.h"
#include "ETWDNonVREquipmentActionType.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "ETWDNonVRGrappleAnimState.h"
#include "InputCoreTypes.h"
#include "TWDAnimInstancePlayer.generated.h"

class ASDIHeldActor;
class UTWDAnimInstancePlayerHeldActor;

UCLASS(NonTransient)
class TWD_API UTWDAnimInstancePlayer : public USDIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRK4SpringInterpolator AimRotationLagPitchSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRK4SpringInterpolator AimRotationLagYawSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator AimRotationLagLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AimRotationLagMoveForwardPitchVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AimRotationLagMoveRightYawVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRK4SpringInterpolator SpineDragSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpineDragLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SpineDragSpringMaskCurveName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevCharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator CharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevCharacterRotationVel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator CharacterRotationVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<EMovementMode> PrevMovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector PrevVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevVelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevLateralSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VerticalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasCrouched;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsCrouched;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasFalling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWantsToSprint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeedWithoutSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevStaminaPct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StaminaPct;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasWinded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsWinded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AimRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotationLag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AimRotationLag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevSpineDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpineDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevSpineDragVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpineDragVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevSpineDragAccel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpineDragAccel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevPureAimRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator PureAimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevPureAimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator PureAimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevPureAimRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator PureAimRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevRecoilAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RecoilAimOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevFlinchAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator FlinchAimOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevSwayAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator SwayAimOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevLockonAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator LockonAimOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAnimatedAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AnimatedAimOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasADS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsADS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasADSDesired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsADSDesired;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasHipFiring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsHipFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevAngleOfStrike;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleOfStrike;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRK4SpringInterpolator AngleOfStrikeSpring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevAngleOfStrikeCharge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleOfStrikeCharge;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasSpecialMeleeActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsSpecialMeleeActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDNonVRMeleeAttackType LastSpecialMelee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDNonVRMeleeAttackType SpecialMelee;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDNonVRMeleeAttackType LastSpecialMeleeDesired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDNonVRMeleeAttackType SpecialMeleeDesired;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasSpecialMeleeDesired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsSpecialMeleeDesired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsWeaponStuckOrStabbed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasWeaponStuckOrStabbed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWeaponStickCharged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWeaponStickWeakpoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWeaponStickWeakpointIsDiseased;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeaponStickRemoved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeaponStickRemovedSuccess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponStickProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevWeaponStickProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponStickAngle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevWeaponStickAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponStickRemoval;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevWeaponStickRemoval;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasPreparingMeleeAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPreparingMeleeAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPlayingMeleeAttackAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasPlayingMeleeAttackAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDNonVRMeleeAttackDetails MeleeAttackDetails;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDNonVRMeleeAttackDetails PrevMeleeAttackDetails;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDHandItemState LeftHandItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDHandItemState RightHandItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPlayingGunActionAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasPlayingGunActionAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPlayingEquipmentActionAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasPlayingEquipmentActionAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsNonVRObjectInteracting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasNonVRObjectInteracting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeldActorLinkedGraphTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<ASDIHeldActor>, TSubclassOf<UTWDAnimInstancePlayerHeldActor>> HeldActorToAnimInstanceMap;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<ASDIHeldActor> HeldActorClassWithActiveLinkedGraph;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDNonVRGrappleAnimState NonVRGrappleAnimState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDNonVRGrappleAnimState PrevNonVRGrappleAnimState;
    
public:
    UTWDAnimInstancePlayer();
    UFUNCTION(BlueprintCallable)
    void SetSpineDragSpringConstants(float SpringStiffness, float DampeningRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleOfStrikeSpringConstants(float SpringStiffness, float DampeningRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetAimRotationLagYawSpringConstants(float SpringStiffness, float DampeningRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetAimRotationLagPitchSpringConstants(float SpringStiffness, float DampeningRatio);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnMovementModeChanged();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCrouchChanged();
    
    UFUNCTION(BlueprintCallable)
    void LinkHeldActorAnimInstance(TSubclassOf<ASDIHeldActor> HeldActorClass);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHeldOrHasEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldOrHasEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeld(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class) const;
    
    UFUNCTION(BlueprintPure)
    bool GetInterruptEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const;
    
    UFUNCTION(BlueprintPure)
    bool GetInterruptEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const;
    
    UFUNCTION(BlueprintPure)
    bool GetEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const;
    
    UFUNCTION(BlueprintPure)
    bool GetEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class, ETWDNonVREquipmentActionType& OutActionType) const;
    
};

