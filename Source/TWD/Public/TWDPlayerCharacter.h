#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RFloatExp.h"
#include "RFloat.h"
#include "TWDCharacter.h"
#include "EGender.h"
#include "SDITuningInterface.h"
#include "SDITimestampInputButton.h"
#include "SDIDotLerpFloat.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDITuningAccumulator.h"
#include "ETWDNonVRGrappleMinigameState.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "QFloatExp.h"
#include "TWDNonVREquipmentActionDetails.h"
#include "SDIAkAudioEventPairDynamicLoop.h"
#include "SDIReplicatedTuningModifier.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDNonVREquipmentSlot.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "ETWDGunAction.h"
#include "ETWDNonVRGrappleAnimState.h"
#include "SDITuningAttribute_TWDPlayerCharacter.h"
#include "SDIAnimNotifyStateData.h"
#include "SDIBlendOption.h"
#include "SDITuningAttribute_TWDCharacterMovementComponent.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "ETWDNonVREquipmentType.h"
#include "TWDPlayerCharacter.generated.h"

class ATWDPlayerCharacter;
class ASDIInteractiveActor;
class USDIPointGripComponent;
class UPhysicsConstraintComponent;
class ASDIHeldActor;
class USceneComponent;
class UChildActorComponent;
class ATWDPlayerLootDrop;
class ATWDPlayerInventorySlot;
class ATWDAmmoPouch;
class ATWDBackpack;
class ATWDNotebook;
class ATWDWeaponActor;
class ATWDFlashlight;
class ASDIWeaponFirearm;
class UMaterialParameterCollection;
class UAkAudioEvent;
class AActor;
class USDIPlayerVoiceAkComponent;
class UTWDAnimNotifyState_Grapple;
class ASDIInventoryActor;
class UTWDAnimNotifyState_EquipmentAction;
class UWidgetComponent;
class UTWDSaveGame;
class ATWDWeaponGun;

UCLASS(Blueprintable)
class TWD_API ATWDPlayerCharacter : public ATWDCharacter, public ISDITuningInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInTutorial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* NonVRLeftHandPhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* NonVRRightHandPhysicsConstraint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton VirtualControlMoveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton VirtualControlMoveReverseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HybridMaxPitchAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HybridMaxUprightAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HybridMaxForwardAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHybridEngageHMDDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HybridEngageHMDDeltaZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HybridDisengageHMDRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHybridEngageWhenHoldingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ASDIHeldActor>, bool> bHybridEngageClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeltInventoryRootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChestInventoryRootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector> InventoryRootsOffsetForHMD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InventoryRootsOffsetForHMDActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShoulderSlotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachBackInventorySlotsToShoulders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* BeltInventoryRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ChestInventoryRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* BeltInventoryGripComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* ChestInventoryGripComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BackInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BackpackInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* LeftHipInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RightHipInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* NotebookInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FlashlightInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AmmoPouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDPlayerLootDrop> PlayerLootDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* LeftHipInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* RightHipInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* BackInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* BackpackInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* NotebookInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* FlashlightInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDAmmoPouch* AmmoPouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDBackpack* Backpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDNotebook* Notebook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDFlashlight* Flashlight;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIHeldActor> DeathLeftHandHeldActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIHeldActor> DeathRightHandHeldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PPMatCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkePlayTinnitus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkeStopTinnitus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NonVRCameraSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRCameraClampToCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRCameraClampOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRCameraCollideWithWorld;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> NonVRCameraCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer NonVRCameraCollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRCameraCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRMaxYawOffsetDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator NonVRYawOffsetSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipFireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipFireHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSMovementSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRDryFireAutoHelperDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeMovementSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionStabMovementSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator AngleOfStrikeSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAngleOfStrikeForceReEngage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeChargeEngageLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeChargeDisengageLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator BasicMeleeAngleSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDotLerpFloat BasicMeleeAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBasicMeleeAnglesUseBothMoveAndLookInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBasicMeleeAnglesUseLookInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertBasicMeleeAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeFaceTargetPitchAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickSplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickSplaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickSplayRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickSplayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickEjectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickWeakpointEjectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickRemovalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickWeakpointRemovalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickRemovalRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStickRemovalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat WeaponStickMaxInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat WeaponStickForceYawVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat WeaponStickForcePitchVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat WeaponStickForceDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp WeaponStickYawForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp WeaponStickPitchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp WeaponStickDistanceForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkePlayStabWeakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQFloatExp NonVRGrappleMinigameDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQFloatExp NonVRGrappleMinigameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRGrappleMinigamePressWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> NonVRGrappleMinigameSuccessKillImpulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAkAudioEventPairDynamicLoop NonVRAttackChargeSoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NonVRAttackChargeSoundLoopRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkeSpecialMeleeEngageFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIPlayerVoiceAkComponent* PlayerVoiceLocalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TinnitusDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TinnitusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayingTinnitus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastSetGutsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHybridMovementEngaged;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 CachedNonVRCameraFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedNonVRCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedNonVRPawnViewLocation;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInteractiveActor> CachedInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandInteractComponentEntry CachedInteractionHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedInteractionActorLongHeld;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<ETWDNonVREquipmentSlot, TWeakObjectPtr<ASDIInventoryActor>> NonVREquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVREquipmentSlot DesiredNonVRSlotEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVREquipmentSlot CurrentNonVRSlotEquipped;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> NonVRPendingPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVREquipmentSlot NonVRPendingPickupSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNonVRPendingPickupEquip;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIWeaponFirearm> HipFireGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HipFireRequestedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHipFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsRetune;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVRMeleeAttackType SpecialMeleeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVRMeleeAttackType LastSpecialMeleeTargetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAngleOfStrikeWasSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngleOfStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAngleOfStrikeIsCharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBasicMeleeAngleWasSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BasicMeleeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStickAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStickInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStickRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStickRemovalDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStickEjectTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInteractiveActor* ConsumingItem;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponActor> ChargingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponIsCharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponChargeHoldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVRGrappleMinigameState NonVRGrappleMinigameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NonVRGrappleMinigameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDNonVRGrappleAnimState NonVRGrappleAnimState;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDCharacter> NonVRGrappleAttacker;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_EquipmentAction>, FSDIAnimNotifyStateData> EquipmentActionNotifies;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_Grapple>, FSDIAnimNotifyStateData> GrappleNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FemaleVoiceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GenderSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOnTopOfBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BoxMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BoxMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform BoxXForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClosestSignificantWalkerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPhysicalCrouchZDelta;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* SpectatorWidgetComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepTuningModifiers, meta=(AllowPrivateAccess=true))
    TArray<FSDIReplicatedTuningModifier> RepTuningModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputADSButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputPrimaryActionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputSecondaryActionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputReloadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputInventoryBackpackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputEquipLargeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputEquipSmallButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputEquipConsumable1Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputEquipConsumable2Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputInventoryNotebookButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputInventoryFlashlightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputInteractButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputGrabWorldButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeButtonChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption MeleeButtonChargeBlend;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASDIInventoryActor*> CurrentHeldActors;
    
    ATWDPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseNonVRMeleeButtonCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVoiceAndAppearance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuickInventory(ETWDNonVREquipmentSlot EquipType);
    
    UFUNCTION(BlueprintCallable)
    ATWDPlayerCharacter* TuneTWDPlayerCharacter(FSDITuningAttribute_TWDPlayerCharacter Attr, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable)
    ATWDPlayerCharacter* TuneTWDCharacterMovementComponent(FSDITuningAttribute_TWDCharacterMovementComponent Attr, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable)
    void StopSpecialMelee();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StabStarted(ATWDWeaponActor* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StabEnding(ATWDWeaponActor* Weapon, bool bRemoveWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetOnTopOfBox(bool bTopOfBox, FVector Min, FVector Max, FTransform XForm);
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* SetNonVREquipment(ETWDNonVREquipmentSlot Slot, ASDIInventoryActor* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void SetGenderAndAppearanceVariant(EGender NewGender, int32 NewAppearanceVariant);
    
    UFUNCTION(BlueprintCallable)
    void SetGender(EGender NewGender);
    
    UFUNCTION(BlueprintCallable)
    void SetAppearanceVariant(int32 NewAppearance);
    
    UFUNCTION(BlueprintCallable)
    void SaveHeldInventory(bool bDestroySavedItems);
    
    UFUNCTION(BlueprintCallable)
    void SaveDataToGameProgression(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartPlayer(const FTransform& LootDropTransform, const FTransform& PlayerStartTransform);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNonVREquipment(ASDIInventoryActor* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void PutAwayHeldInventory(bool bLimitToKeyItems);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTuningModifiers();
    
public:
    UFUNCTION(BlueprintCallable)
    void NonVRUnEquip(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void NonVREquip(ETWDNonVREquipmentSlot Slot, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void NonVRConsumeEnd(ASDIInteractiveActor* ConsumableActor);
    
    UFUNCTION(BlueprintCallable)
    void NonVRConsumeBegin(ASDIInteractiveActor* ConsumableActor, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    void LoadDataFromGameProgression();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponStuckOrStabbed(ATWDWeaponActor*& OutWeapon, FHitResult& OutHitInfo, float& OutProgress, float& OutAngle, float& OutRemoval, float& OutInputAngle, float& OutDelay, bool& bOutCharged, bool& bOutWeakpoint, bool& bOutWeakpointIsDiseased, bool& bOutPlayerExtraction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSpecialMeleeAllowed(ETWDNonVRMeleeAttackType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialMeleeActiveDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialMeleeActive(ETWDNonVRMeleeAttackType& OutType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialInventory(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingMeleeAttackDetailed(FTWDNonVRMeleeAttackDetails& OutDetails, bool bFindTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingMeleeAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreciseThrowControlEngaged(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMeleeAttackAnimDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingGunActionAnimWithInfo(ETWDGunAction Action, ATWDWeaponGun*& OutGun) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingGrappleAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEquipmentActionAnimDetailed(FTWDNonVREquipmentActionDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEquipmentActionAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTopOfBox(FVector& Min, FVector& Max, FTransform& XForm) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNonVRConsuming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingSpecialInventory(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingNotebook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingInventory(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingFlashlight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingBackpack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHipFiring(ATWDWeaponGun*& OutGun) const;
    
    UFUNCTION(BlueprintCallable)
    void InputVirtualMoveControl(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputSecondaryActionReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputSecondaryActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputReverseVirtualMoveControl(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputReloadReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputReloadPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputPrimaryActionReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputPrimaryActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryNotebookReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryNotebookPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryFlashlightReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryFlashlightPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryBackpackReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputInventoryBackpackPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputInteractReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputInteractPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputGrabWorldReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputGrabWorldPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipSmallReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipSmallPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipLargeReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipLargePressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipConsumable2Released();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipConsumable2Pressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipConsumable1Released();
    
    UFUNCTION(BlueprintCallable)
    void InputEquipConsumable1Pressed();
    
    UFUNCTION(BlueprintCallable)
    void InputADSReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputADSPressed();
    
    UFUNCTION(BlueprintCallable)
    bool HasPendingNonVRLongHeldInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetNonVRPendingPickup(ETWDNonVREquipmentSlot& OutSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVRGrappleMinigameState GetNonVRGrappleMinigameState(float& OutTimeRemaining, float& OutDuration, float& OutNextDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVRGrappleAnimState GetNonVRGrappleAnimState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVREquipmentType GetNonVREquipmentType(ASDIInventoryActor* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVREquipmentSlot GetNonVREquipmentSlot(ASDIInventoryActor* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetNonVREquipment(ETWDNonVREquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVREquipmentSlot GetDesiredNonVREquipmentSlot(ETWDNonVREquipmentType EquipmentType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetCurrentNonVREquipment(ETWDNonVREquipmentSlot& OutSlot) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetClosestWalkerDistance(float& Distance);
    
    UFUNCTION(BlueprintCallable)
    void ExitAllNonVRInteractionStates();
    
    UFUNCTION(BlueprintCallable)
    void CompleteNonVRPendingPickup();
    
    UFUNCTION(BlueprintCallable)
    void CancelGunAction();
    
    UFUNCTION(BlueprintCallable)
    void CancelEquipmentAction();
    
    
    // Fix for true pure virtual functions not being implemented
};

