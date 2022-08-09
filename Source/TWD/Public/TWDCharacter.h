#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISignificanceBinInterface.h"
#include "TWDDismemberData.h"
#include "SDICharacterAdvanced.h"
#include "ETWDSuspiciousStates.h"
#include "TWDInteractiveHighlightInterface.h"
#include "TWDCharacterDelayedDismember.h"
#include "GenericTeamAgentInterface.h"
#include "TWDWeaponDismemberSettings.h"
#include "TWDResponseInterface.h"
#include "EGender.h"
#include "Perception/AISightTargetInterface.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "DialogueFinishedEventDelegate.h"
#include "SDIInteractiveActorInterface.h"
#include "ESDIAxis.h"
#include "ECharacterBehavior.h"
#include "TWDWoundInterface.h"
#include "InputCoreTypes.h"
#include "TWDStabInterface.h"
#include "TWDDismemberInterface.h"
#include "ETWDCharacterTargetPriorityOverride.h"
#include "TWDTargetInterface.h"
#include "ETWDCharacterCoverState.h"
#include "SDIDoubleRubberBandVector.h"
#include "SDIRubberBandSettings.h"
#include "TWDCharacterDragEntry.h"
#include "EFaction.h"
#include "TWDCharacterGrappleEntry.h"
#include "RFloat.h"
#include "SDIPlayerHandMove.h"
#include "TWDCharacterDragTarget.h"
#include "Curves/CurveFloat.h"
#include "SDIInteractiveActorData.h"
#include "TWDCharacter_OnMaxStaminaModifiedDelegate.h"
#include "ETWDCharacterGrappleLocation.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "StuckWeapon.h"
#include "SDIBlendOption.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterBehaviorFlags.h"
#include "SDIDamageData.h"
#include "SphericalOscillator.h"
#include "TWDStabBone.h"
#include "ETWDCharacterHitRegion.h"
#include "ETWDCharacterGrappleState.h"
#include "TWDCharacterPhysicsAssetLOD.h"
#include "TWDBarkHistory.h"
#include "SDITransform_NetQuantize.h"
#include "EStatusIconState.h"
#include "TWDCharacterDamageFX.h"
#include "AnimBlendSpaceBounds.h"
#include "SDIComponentReplacementSphere.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "TWDDismemberedLimb.h"
#include "Engine/EngineTypes.h"
#include "TWDCharacterQueuedDamageFX.h"
#include "TWDHitReactSFX.h"
#include "ETWDCharacterSkinSection.h"
#include "SDIAnimNotifyStateData.h"
#include "QFloat.h"
#include "EWoundType.h"
#include "QVector.h"
#include "TWDCharacter_OnWindedChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TWDSkinSkeletalMeshSetArmor.h"
#include "ETWDCharacterType.h"
#include "UObject/NoExportTypes.h"
#include "InventoryChangedDelegate.h"
#include "TWDCharacter_OnCharacterRevivalDelegate.h"
#include "TWDCharacter_OnCharacterDeathDelegate.h"
#include "CharacterHealthUpdatedDelegate.h"
#include "TWDCharacter_WeaponFiredDelegate.h"
#include "TWDCharacter_FeedingTokenDelegateDelegate.h"
#include "TWDCharacter_OuterRingTokenDelegateDelegate.h"
#include "TWDCharacter_GrappleTokenDelegateDelegate.h"
#include "DialogueStartedEventDelegate.h"
#include "BehaviorEventCalledDelegate.h"
#include "TWDInitialContext.h"
#include "UObject/NoExportTypes.h"
#include "TWDRequiredInventory.h"
#include "DialogueLine.h"
#include "TWDDialogueOption.h"
#include "TWDCharacter_OnPostSignificanceDelegate.h"
#include "DialogueLineFinishedDelegate.h"
#include "TWDWoundInterfaceData.h"
#include "SDISkinSkeletalMeshSet.h"
#include "Engine/EngineTypes.h"
#include "SpawnableBouquetElement.h"
#include "ECharacterPose.h"
#include "ECharacterGesture.h"
#include "ECharacterEmotion.h"
#include "EDialogueOverlapHandlingMethod.h"
#include "UObject/NoExportTypes.h"
#include "InventoryReceivedDelegate.h"
#include "InventoryExchangedDelegate.h"
#include "DialogueFinishedDelegate.h"
#include "PlayBarkResultCallbackDelegate.h"
#include "EAkCallbackType.h"
#include "EHitReactType.h"
#include "ETWDCharacterHitDirection.h"
#include "Engine/NetSerialization.h"
#include "SDIReplicatedDamageData.h"
#include "ETWDGunAction.h"
#include "InventoryGivenDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCollisionShape.h"
#include "ESDIInteractRangeType.h"
#include "ESicknessSourceType.h"
#include "Chaos/ChaosEngineInterface.h"
#include "TWDResponse.h"
#include "TWDCharacter.generated.h"

class UParticleSystem;
class ATWDCharacterHandSlot;
class UHapticFeedbackEffect_Base;
class UPhysicsAsset;
class AVolume;
class UCurveFloat;
class UTWDAutoTickAkComponent;
class UTWDActiveRagdollComponent;
class UTWDDialogueWidgetSnapTarget;
class UTWDRigidBodySleeperComponent;
class UStaticMeshComponent;
class UTWDCharacterArchetype;
class UTWDAnimNotifyState_MeleeAttackDamageWindow;
class UTWDDialogue;
class ATWDWaypointPath;
class ASDIPlayerHand;
class UTWDWaypointPatrolComponent;
class ATWDCharacter;
class UToken;
class UObject;
class UDamageType;
class UPrimitiveComponent;
class UTWDWeaponHitCapsuleComponent;
class USDIDOTComponent;
class USceneComponent;
class UAkAudioEvent;
class UAkCallbackInfo;
class UGrappleTokenSystem;
class ASDIStimAndResponseActor;
class AActor;
class UTWDAnimNotifyState_MeleeAttack;
class UTWDAnimNotifyState_GunAction;
class UStaticMesh;
class ATWDFlashlight;
class UTWDCharacterPersonality;
class UTWDCharacterSkin;
class ASDIInventoryActor;
class UTWDTextToSpeechAkComponent;
class ATWDPlayerHand;
class UTexture2D;
class UAnimInstance;
class ASDIHeldActor;
class ATWDWeaponActor;
class ATWDGripPhysicsActor;
class ATWDGripPhysicsDoor;
class UAnimMontage;
class UAnimSequenceBase;
class ATWDPlayerController;
class ATWDPlayerCharacter;
class ATWDDismemberDroppedLimb;
class AController;
class ATWDDismemberLimbCap;
class UTexture;
class ATWDPlayerInventorySlot;
class ATWDNotebook;
class ATWDHMDCameraActor;
class UPhysicalMaterial;
class ATWDBackpack;
class ATWDAmmoPouch;
class USDIActiveRagdollComponent;

UCLASS()
class TWD_API ATWDCharacter : public ASDICharacterAdvanced, public IGenericTeamAgentInterface, public IAISightTargetInterface, public ISDIInteractiveActorInterface, public ITWDSeamlessTravelActorInterface, public ITWDInteractiveHighlightInterface, public ITWDResponseInterface, public ISDISignificanceBinInterface, public ITWDWoundInterface, public ITWDStabInterface, public ITWDDismemberInterface, public ITWDTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDAutoTickAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDAutoTickAkComponent* SpeechAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDActiveRagdollComponent* ActiveRagdollComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDRigidBodySleeperComponent* RigidBodySleeperComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UStaticMeshComponent* VisualHint;
    
    UPROPERTY(Transient)
    float VisualHintSwapTime;
    
    UPROPERTY(EditDefaultsOnly)
    FString WalkerProximityAudioRTPC;
    
    UPROPERTY(EditDefaultsOnly)
    FString WalkerProximityAudioStealthStateGroup;
    
    UPROPERTY(EditDefaultsOnly)
    FString WalkerProximityAudioStealthStateOn;
    
    UPROPERTY(EditDefaultsOnly)
    FString WalkerProximityAudioStealthStateOff;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkerProximityAudioMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CharacterName;
    
    UPROPERTY(EditAnywhere)
    bool ShouldOverrideGenderAndVoice;
    
    UPROPERTY(EditAnywhere)
    EFaction Faction;
    
    UPROPERTY(EditAnywhere)
    EGender Gender;
    
    UPROPERTY(EditAnywhere)
    FString VoiceId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDefaultBarksAllowed;
    
    UPROPERTY(Transient)
    FName DebugLastBarkEventName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTWDCharacterArchetype> ArchetypeBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDCharacterHandSlot> CharacterHandSlotBlueprint;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, TSubclassOf<UTWDDialogue>> DialogueMap;
    
    UPROPERTY(EditAnywhere)
    TArray<AVolume*> StandGroundVolumes;
    
    UPROPERTY(EditAnywhere)
    TArray<AVolume*> CombatVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETWDCharacterTargetPriorityOverride TargetPriorityOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATWDWaypointPath* PatrolPath;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTWDWaypointPatrolComponent* WaypointPatrolComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> PerceptionSocketNames;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightDistanceCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightMotionCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightLightCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float SightLightCurveNormalFactor;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightWalkingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightSprintingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightCrouchingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightCrawlingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightPeripheralCurve;
    
    UPROPERTY(EditAnywhere)
    float BeingSeenPerceptionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTWDCharacterDragTarget> DragBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings DragBodyRubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings DragHandRubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DragPullMaxHandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DragGrabHandSpeed;
    
    UPROPERTY(EditAnywhere)
    FSDIInteractiveActorData InteractiveActorData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleMoveLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleMoveLocationLeftAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleMoveLocationRightAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<ETWDCharacterGrappleLocation> GrappleTokenLocations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<ETWDCharacterGrappleLocation> NonVRGrappleTokenLocations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxFeederTokens;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxOuterRingTokens;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bCrawlingTemp;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UToken* HeldToken;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* GrappleGripCollision;
    
    UPROPERTY(EditAnywhere)
    float GrappleBleedOutTime;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    bool bHideGrappleHandTrackedMesh;
    
    UPROPERTY(EditAnywhere)
    FLinearColor WindedGrappleHighlightColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGrappleSyncToAttacker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleSyncTranslationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleSyncHMDTranslationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleSyncHMDRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleSyncHMDMaxYawOffsetDeg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleSyncRotationSpeedDeg;
    
    UPROPERTY(EditDefaultsOnly)
    EAlphaBlendOption GrappleSyncRotationBlend;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGrappleSyncRotationFadeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float GrappleSyncRotationFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float GrappleSyncRotationFadeOutMinAngleDeg;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* GrappleSyncRotationBlendCustomCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NonVRGrappleSyncRotationSpeedDeg;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIBlendOption NonVRGrappleSyncRotationBlend;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRGrappleCrawlCameraPitchTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleGrabFistDamageTimeThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESDIAxis GrappleGrabAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGrappleCanPushBack;
    
    UPROPERTY(EditAnywhere)
    float GrappleGripTargetStaminaRate;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackerHeadStaminaStart;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GrappleAttackerHeadStaminaRateCurve;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackerArmStaminaStart;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GrappleAttackerArmStaminaRateCurve;
    
    UPROPERTY(EditAnywhere)
    float NonVRGrappleAttackInitialStamina;
    
    UPROPERTY(EditAnywhere)
    float NonVRGrappleAttackStamina;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPlayerHandMove GrapplePushBackBreakMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleIgnorePushBackBreakMoveDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleCooldownTime;
    
    UPROPERTY(Transient)
    float GrappleLeftArmCooldownTimestamp;
    
    UPROPERTY(Transient)
    float GrappleRightArmCooldownTimestamp;
    
    UPROPERTY(Transient)
    float GrappleNeckCooldownTimestamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleCooldownRegrowthTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGrappleReleaseCooldownSingleArmOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStabGrappleCooldownSingleArmOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGrabHeadGrappleCooldownSingleArmOnly;
    
    UPROPERTY(EditAnywhere)
    float GrappleAdditionalLockHandDurationAfterRelease;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GrappleAttackTargetOffset;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* GrappleAttackPushBackCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator GrappleAttackPushBackSpring;
    
    UPROPERTY(EditAnywhere)
    FRFloat GrappleAttackPushBackAngleDeg;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackPushBackAngleDistancePctExp;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackPushBackBreakPercent;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackPushBackMoveBreakPercent;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackPushBackBreakLoopFeedbackPercent;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackPushBackBreakMaxTimeSinceBreakMove;
    
    UPROPERTY(EditAnywhere)
    float GrappleAttackAdditionalLockHandDurationAfterRelease;
    
    UPROPERTY(EditAnywhere)
    FSDIPlayerHandMove GrappleAttackPushBackBreakMove;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandShoulderLockArmLengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandShoulderLockAdditionalArmLength;
    
    UPROPERTY(EditAnywhere)
    FSDIDamageData GrappleAttackDamage;
    
    UPROPERTY(EditAnywhere)
    FSDIDamageData InitialAttackDamage;
    
    UPROPERTY(EditAnywhere)
    FSDIDamageData NonVRGrappleAttackInitialDamage;
    
    UPROPERTY(EditAnywhere)
    FSDIDamageData NonVRGrappleAttackDamage;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USDIDOTComponent> GrappleAttackHoldDOTClass;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleAttackLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleAttackHoldLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleAttackPushBackGrabFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleAttackPushBackLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleAttackPushBackBreakLoopFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrapplePushBackDistance;
    
    UPROPERTY(EditAnywhere)
    float GrapplePushBackTime;
    
    UPROPERTY(EditAnywhere)
    float GrappleFailsafeReleaseDistance;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GrappleHandStruggleRubberBandVelocityMultiplierCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GrappleHandStruggleRubberBandExtraSpringStiffnessCurve;
    
    UPROPERTY(EditAnywhere)
    FSDIDoubleRubberBandVector GrappleHandStruggleRubberBand;
    
    UPROPERTY(EditAnywhere)
    FSphericalOscillator GrappleHandStruggleOscillator;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleDelay;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleInterpTime;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleMaxStrength;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleStrengthRecovery;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleStrengthRecoveryDamageDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPlayerHandMove GrappleHandStruggleBreakMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPlayerHandMove GrappleHandStruggleWindedBreakMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPlayerHandMove GrappleHandStruggleUIMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRK4SpringInterpolator GrappleHandStruggleUISpring;
    
    UPROPERTY(EditAnywhere)
    float MaxGrappleHandStruggleBreakAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxGrappleHandStrugglePushBackAngle;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleLockRollDeg;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleHandStruggleStartFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleHandStrugglePushOffFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrappleHandStruggleLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GrappleHandStruggleLoopFeedbackCurve;
    
    UPROPERTY(EditAnywhere)
    FName GrappleLeftHandDeathSocket;
    
    UPROPERTY(EditAnywhere)
    FName GrappleRightHandDeathSocket;
    
    UPROPERTY(EditAnywhere)
    bool bCanGrapplePlayerHead;
    
    UPROPERTY(EditAnywhere)
    bool bCanGrapplePlayerBothArms;
    
    UPROPERTY(EditAnywhere)
    float PlayerHeadGrappleSyncVerticalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerHeadGrappleSyncVerticalTranslationSpeed;
    
    UPROPERTY(EditAnywhere)
    float GrappleNeckDeltaDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FeedingMoveLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OuterRingMoveLocationOffset;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDStabBone> StabBones;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> StabStickBoneMap;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* StabLoopParticleSystem;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* StabMovementParticleSystem;
    
    UPROPERTY(EditAnywhere)
    float StabMeleeDurabilityModifier;
    
    UPROPERTY(EditAnywhere)
    float DismemberMeleeDurabilityModifier;
    
    UPROPERTY(EditAnywhere)
    float HitMeleeDurabilityModifier;
    
    UPROPERTY(Transient)
    bool bInStabState;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bSkipDeathBarkDueToHeadDamage;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator PerceptionVisibilitySpring;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator ExternalNoiseSpring;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> WoundBones;
    
    UPROPERTY(EditAnywhere)
    float WoundedDeathDelay;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bSeveredTorsoCrawlAllowed;
    
    UPROPERTY(EditAnywhere)
    TMap<ETWDCharacterHitRegion, FTWDDismemberData> DismemberData;
    
    UPROPERTY(EditAnywhere)
    bool bSupportAdvancedDismember;
    
    UPROPERTY(EditAnywhere)
    bool bSupportAdvancedDismemberDebugInfo;
    
    UPROPERTY(Transient)
    bool bAdvancedDismemberDebugInfoScopeEnabled;
    
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve FallDamageCurve;
    
    UPROPERTY(EditAnywhere)
    float FallDamageMinSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* FallDamageAKEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> FallDamageTypeClass;
    
    UPROPERTY(Transient)
    TArray<float> DeferredFallingDamage;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float StealthModeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StealthModeActivationApplicationCount;
    
    UPROPERTY(BlueprintReadOnly)
    float StealthModeApplicationProgress;
    
    UPROPERTY(EditDefaultsOnly)
    float StealthModeApplicationDecayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float StealthModeApplicationFalloffTime;
    
    UPROPERTY(EditDefaultsOnly)
    UObject* StealthModeFootstepSound;
    
    UPROPERTY(EditDefaultsOnly)
    FName StealthModeApplicationProgressSkinParamName;
    
    UPROPERTY(EditDefaultsOnly)
    float HeadThreatRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float TrespassExitTimeThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float TrespassEnterIconTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
    bool bRepIsHeadTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
    FVector RepLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, Transient)
    USceneComponent* RepLookAtTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
    FName RepLookAtTargetSocket;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bIsHeadPerturbing;
    
    UPROPERTY(EditAnywhere)
    float HeadLookAtOffsetAngle;
    
    UPROPERTY(EditAnywhere)
    float HeadLookAtOffsetPeriod;
    
    UPROPERTY(EditAnywhere, Transient)
    FVector HeadLookAtOffset;
    
    UPROPERTY(Transient)
    float HeadLookAtOffsetTime;
    
    UPROPERTY(EditAnywhere)
    float MaxStamina;
    
    UPROPERTY(EditAnywhere)
    float MaxStaminaFloorPct;
    
    UPROPERTY(EditAnywhere)
    float MaxStaminaDecayFactor;
    
    UPROPERTY(EditAnywhere)
    float StaminaRecoveryRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve StaminaRecoveryRateCurve;
    
    UPROPERTY(EditAnywhere)
    float IdleWindedStaminaRecoveryRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MovingWindedStaminaRecoveryRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve WindedStaminaRecoveryRateCurve;
    
    UPROPERTY(EditAnywhere)
    float WindedStamina;
    
    UPROPERTY(EditAnywhere)
    float ExtendedStaminaDecayRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ExtendedStaminaDecayRateCurve;
    
    UPROPERTY(EditAnywhere)
    float StaminaCostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StaminaBenefitMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxStaminaCostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxStaminaBenefitMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SprintStaminaRate;
    
    UPROPERTY(EditAnywhere)
    float GrappleGripStaminaRate;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStrugglePushOffStamina;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandAttackPushOffStamina;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandPushOffStamina;
    
    UPROPERTY(EditAnywhere)
    float ClimbingOneHandStaminaRate;
    
    UPROPERTY(EditAnywhere)
    float ClimbingTwoHandStaminaRate;
    
    UPROPERTY(EditAnywhere)
    float ClimbingConsumeStaminaElevation;
    
    UPROPERTY(EditAnywhere)
    float MantleUpStaminaCost;
    
    UPROPERTY(EditAnywhere)
    float MantleOverStaminaCost;
    
    UPROPERTY(EditAnywhere)
    float StaminaConsumeEventMinTime;
    
    UPROPERTY(EditAnywhere)
    float StaminaRecoveryEventMinTime;
    
    UPROPERTY(EditAnywhere)
    float StaminaIdleEventMinTime;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaConsumeStartEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaConsumeLoopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaConsumeLoopStopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaWindedStartEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaWindedLoopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaWindedLoopStopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaWindedEndEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaRecoveryStartEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaRecoveryLoopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaRecoveryLoopStopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaIdleStartEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaIdleLoopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaIdleLoopStopEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaActionFailedEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StaminaActionEndedEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDCharacterPhysicsAssetLOD> PhysicsAssetLODs;
    
    UPROPERTY(EditAnywhere)
    FName RagdollConstraintProfile;
    
    UPROPERTY(EditAnywhere)
    float MeshComponentHitHistoryDuration;
    
    UPROPERTY(EditAnywhere)
    float SprintInputDoubletapMaxTime;
    
    UPROPERTY(EditAnywhere)
    float UVFlashlightToggleInputDoubletapMaxTime;
    
    UPROPERTY(Transient)
    bool bTouchMovementActive;
    
    UPROPERTY(Transient)
    bool bSprintButtonHeld;
    
    UPROPERTY(Transient)
    bool bMovementInputActive;
    
    UPROPERTY(Transient)
    float LastTimeSprintInputHeldDownStart;
    
    UPROPERTY(Transient)
    float LastTimeUVFlashlightToggleInputHeldDownStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlPhysicalCrouch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCrouchEngagedByPhysicalCrouch;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicsAsset*, UPhysicsAsset*> RagdollPhysicsAssets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FTWDCharacterDragEntry> GrappleDragEntries;
    
    UPROPERTY(Export, Transient)
    UGrappleTokenSystem* GrappleTokenSystem;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepGrappleAttackers)
    TArray<FTWDCharacterGrappleEntry> RepGrappleAttackers;
    
    UPROPERTY(Transient)
    TArray<FTWDCharacterGrappleEntry> LocalGrappleAttackers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepGrappleTargets)
    TArray<FTWDCharacterGrappleEntry> RepGrappleTargets;
    
    UPROPERTY(Transient)
    TArray<FTWDCharacterGrappleEntry> LocalGrappleTargets;
    
    UPROPERTY(Transient)
    bool bGrapplePlayerArmCollisionRemoveRequested;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIPlayerHand* GrappleHand;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIPlayerHand* StabOtherHand;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrapplePercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleBleedOutTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GrappleLoopFeedbackId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GrappleAttackLoopFeedbackLeftId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GrappleAttackLoopFeedbackRightId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GrappleAttackPushBackLoopFeedbackId;
    
    UPROPERTY(Replicated, Transient)
    EControllerHand RepGrappleHand;
    
    UPROPERTY(Replicated, Transient)
    FSDITransform_NetQuantize RepGrappleRelTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepGrappleState)
    ETWDCharacterGrappleState RepGrappleState;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepGrapplePushBackDirection)
    FVector RepGrapplePushBackDirection;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bRepGrappleAttacking;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float RepGrappleAttackSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepGrappleAttackHoldTime)
    float RepGrappleAttackHoldTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleAttackHoldTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleAttackPushBackBreakTimeSinceBreakMove;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleAdditionalLockHandAfterReleaseTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleIgnorePushBackBreakMoveTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleHandStrugglePos;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector GrappleHandStruggleInterpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleHandStruggleTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleHandStruggleStrengthLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleHandStruggleStrengthRight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleHandStruggleStrengthDamageTimestamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GrappleHandStruggleLoopFeedbackId;
    
    UPROPERTY(Transient)
    bool bADSArmCollisionRemoveRequested;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FStuckWeapon> StuckWeapons;
    
    UPROPERTY(Replicated, Transient)
    float RepPerceptionVisibility;
    
    UPROPERTY(EditAnywhere)
    float MaxExternalNoiseRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDCharacterDamageFX> CharacterDamageFX;
    
    UPROPERTY(EditDefaultsOnly)
    float ResetDialogueSelectionLockTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DialogueSkipDuration;
    
    UPROPERTY(EditAnywhere)
    float DialogueRange;
    
    UPROPERTY(EditAnywhere)
    AVolume* DialogueRangeVolume;
    
    UPROPERTY(EditAnywhere)
    float PersonalRange;
    
    UPROPERTY(EditAnywhere)
    float PersonalSpaceThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PersonalSpaceRadiusHead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PersonalSpaceRadiusChest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PersonalSpaceRadiusHip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PersonalSpaceRadiusHand;
    
    UPROPERTY(EditAnywhere)
    float SubsequentBarkRange;
    
    UPROPERTY(EditAnywhere)
    float SubtitleRange;
    
    UPROPERTY(EditAnywhere)
    float BarkRange;
    
    UPROPERTY(VisibleDefaultsOnly)
    FAnimBlendSpaceBounds GrappleAnimBlendSpaceBoundStruct;
    
    UPROPERTY(VisibleDefaultsOnly)
    FAnimBlendSpaceBounds GrappleAttackAnimBlendSpaceBoundStruct;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacementSphere GrappleAttackArmStruggleSphereReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FAnimBlendSpaceBounds BrainedAnimBlendSpaceBoundStruct;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement GrappleAttackSyncReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement NonVRGrappleAttackSyncReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement NonVRGrappleCrawlAttackSyncReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement GrappleAttackLeftArmSyncReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement GrappleAttackRightArmSyncReplacement;
    
    UPROPERTY()
    FTransform GrappleAttackLeftArmPushBackDirectionReplacement;
    
    UPROPERTY()
    FTransform GrappleAttackRightArmPushBackDirectionReplacement;
    
    UPROPERTY(VisibleDefaultsOnly)
    FAnimBlendSpaceBounds GrappleAttackArmAnimBlendSpaceBoundStruct;
    
    UPROPERTY(VisibleDefaultsOnly)
    FAnimBlendSpaceBounds GrappleAttackArmBiteAnimBlendSpaceBoundStruct;
    
    UPROPERTY(VisibleDefaultsOnly)
    FSDIComponentReplacement GrappleAttackPushBackDirectionReplacement;
    
    UPROPERTY(Transient)
    bool bInitGrappleSyncHMD;
    
    UPROPERTY(Transient)
    FVector GrappleSyncHMDOffset;
    
    UPROPERTY(Transient)
    float GrappleSyncHMDYaw;
    
    UPROPERTY(Transient)
    float GrappleSyncHMDYawTimer;
    
    UPROPERTY(Transient)
    float GrappleSyncHMDYawStart;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepCurrentStaminaMax)
    float RepCurrentStaminaMax;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepCurrentStamina)
    float RepCurrentStamina;
    
    UPROPERTY(Transient)
    float LocalCurrentStaminaMax;
    
    UPROPERTY(Transient)
    float LocalCurrentStamina;
    
    UPROPERTY(Transient)
    float StaminaRecoveryTimer;
    
    UPROPERTY(Transient)
    float ExtendedStaminaDecayTimer;
    
    UPROPERTY(Transient)
    float StaminaTickRemainder;
    
    UPROPERTY(Transient)
    float ConsumingStaminaTime;
    
    UPROPERTY(Transient)
    float RecoveringStaminaTime;
    
    UPROPERTY(Transient)
    float IdlingStaminaTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bRepWinded)
    bool bRepWinded;
    
    UPROPERTY(Transient)
    bool bConsumingStamina;
    
    UPROPERTY(Transient)
    bool bRecoveringStamina;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableStaminaCosts;
    
    UPROPERTY(Transient)
    UAkAudioEvent* CurrentStaminaLoopEvent;
    
    UPROPERTY(Replicated, Transient)
    bool bRepBreakingObstacle;
    
    UPROPERTY(Replicated, Transient)
    bool bRepHelpingBreakObstacle;
    
    UPROPERTY(Replicated, Transient)
    ASDIStimAndResponseActor* RepObstacleToBreak;
    
    UPROPERTY(Transient)
    bool bIsObstacleBroken;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, float> MeshComponentHitHistory;
    
    UPROPERTY(Transient)
    bool bCachedDamageTakenDataValid;
    
    UPROPERTY(Transient)
    bool bCachedDamageTakenDataHeadshot;
    
    UPROPERTY(Transient)
    bool bCachedDamageTakenDataHeadshotPenetration;
    
    UPROPERTY(Transient)
    TMap<ETWDCharacterHitRegion, FTWDDismemberedLimb> DismemberedLimbs;
    
    UPROPERTY(Transient)
    TArray<FTWDCharacterDelayedDismember> DelayedDismembers;
    
    UPROPERTY(Transient)
    FTimerHandle UpdateSkinForDismemberedLimbsTimerHandle;
    
    UPROPERTY(Transient)
    FTimerHandle SpawnQueuedDamageFXTimerHandle;
    
    UPROPERTY(Transient)
    TArray<FTWDCharacterQueuedDamageFX> QueuedDamageFX;
    
    UPROPERTY(Transient)
    UPhysicsAsset* SkinPhysicsAsset;
    
    UPROPERTY(Transient)
    int32 WindedGrappleCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FTWDHitReactSFX> HitReactSFXList;
    
    UPROPERTY(Transient)
    bool bSupportsDeathPooling;
    
    UPROPERTY(Transient)
    bool bControlsMirrored;
    
    UPROPERTY(Transient)
    bool bAltControlMapping;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_MeleeAttack>, FSDIAnimNotifyStateData> MeleeAttackNotifies;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_MeleeAttackDamageWindow>, FSDIAnimNotifyStateData> MeleeAttackDamageWindowNotifies;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_GunAction>, FSDIAnimNotifyStateData> GunActionNotifies;
    
    UPROPERTY(EditAnywhere)
    bool bAngleOfStrikeWeakpointEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bAngleOfStrikeWeakpointIsDiseased;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQFloat AngleOfStrikeWeakpointAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIBlendOption AngleOfStrikeWeakpointAngleBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* AngleOfStrikeWeakpointAngleNormalCurve;
    
    UPROPERTY(EditAnywhere)
    FName AngleOfStrikeWeakpointSocket;
    
    UPROPERTY(EditAnywhere)
    FName AngleOfStrikeWeakpointWoundBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQVector AngleOfStrikeWeakpointWoundSize;
    
    UPROPERTY(EditAnywhere)
    float AngleOfStrikeWeakpointWoundDistanceForward;
    
    UPROPERTY(EditAnywhere)
    FVector2D AngleOfStrikeWeakpointWoundSplashRatio;
    
    UPROPERTY(EditAnywhere)
    float AngleOfStrikeWeakpointWoundOffsetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQFloat AngleOfStrikeWeakpointWoundOffsetRotation;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* AngleOfStrikeWeakpointWoundMesh;
    
    UPROPERTY(EditAnywhere)
    FVector AngleOfStrikeWeakpointWoundMeshOffset;
    
    UPROPERTY(EditAnywhere)
    FVector AngleOfStrikeWeakpointShapeScale;
    
    UPROPERTY(Transient)
    FTransform AngleOfStrikeWeakpointRelativeTransform;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* AngleOfStrikeWeakpointWoundMeshComp;
    
    UPROPERTY(Transient)
    bool bSkinArmorInitialized;
    
    UPROPERTY(Transient)
    TMap<ETWDCharacterSkinSection, FTWDSkinSkeletalMeshSetArmor> SkinArmor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDCharacterType CharacterType;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid PlacedObjectId;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> HeadHitBoxBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BodyHitBoxBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadHitboxDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadHitboxNonPenetrationDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BodyHitboxDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimbHitBoxDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, ETWDCharacterHitRegion> AnimColliderMap;
    
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere)
    float MaxSicknessPct;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentMaxHealth;
    
    UPROPERTY(EditAnywhere)
    float RegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetAccuracyMultiplier;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OnMaxStaminaModified OnCharacterMaxStaminaModifiedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OnCharacterRevival OnCharacterRevivalDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OnCharacterDeath OnCharacterDeathDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterHealthUpdated CharacterHealthUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_WeaponFired OnCharacterWeaponFired;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_FeedingTokenDelegate FeedingTokenStolen;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OuterRingTokenDelegate OuterRingTokenStolen;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_GrappleTokenDelegate GrappleTokenStolen;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_FeedingTokenDelegate FeedingTokenLost;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_GrappleTokenDelegate GrappleTokenLost;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OuterRingTokenDelegate OuterRingTokenLost;
    
private:
    UPROPERTY(Transient)
    bool EnableRegen;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TeamNumber;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDebugHitData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<ATWDCharacter> EnqueuedAssistAcknowledgeTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    ETWDCharacterCoverState CoverState;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepCurrentHealth)
    float RepCurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bFallen;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> SpawnedFrom;
    
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OnWindedChanged OnWindedChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDialogueStartedEvent DialogueStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDialogueFinishedEvent DialogueFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FBehaviorEventCalled BehaviorEventCalled;
    
protected:
    UPROPERTY(Transient)
    UTWDCharacterPersonality* Personality;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTWDDialogueWidgetSnapTarget* DialogueWidgetSnapTarget;
    
    UPROPERTY(EditAnywhere)
    FTWDInitialContext InitialContext;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTWDCharacterSkin> OverrideSkin;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FSoftClassPath PlatformOverrideSkin;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTWDCharacterSkin> NonVROverrideSkin;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TSoftClassPtr<UTWDCharacterSkin> NonVRPlatformOverrideSkin;
    
    UPROPERTY(Transient)
    ATWDCharacterHandSlot* CharacterHandSlot;
    
    UPROPERTY(Transient)
    UTWDCharacterArchetype* Archetype;
    
    UPROPERTY(Transient)
    TArray<FTWDRequiredInventory> RequiredInventory;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<ASDIInventoryActor>> RewardInventoryClasses;
    
    UPROPERTY(Transient)
    bool bIsWounded;
    
    UPROPERTY(Transient)
    FTimerHandle WoundedDeathTimerHandle;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UTWDTextToSpeechAkComponent* TextToSpeechComponent;
    
    UPROPERTY(Transient)
    FDialogueLine PlayingDialogueLine;
    
    UPROPERTY(Transient)
    TArray<ATWDCharacter*> CharactersInDialogueRange;
    
    UPROPERTY(Transient)
    TArray<FTWDDialogueOption> ResponseOptions;
    
    UPROPERTY(Transient)
    ATWDCharacter* DialogueResponseCharacter;
    
    UPROPERTY(Transient)
    bool bPSVRSelectDialogueOption1Pressed;
    
    UPROPERTY(Transient)
    bool bPSVRSelectDialogueOption2Pressed;
    
    UPROPERTY(Transient)
    bool bPSVRSelectDialogueOption3Pressed;
    
    UPROPERTY(Transient)
    bool bPSVRSelectDialogueOption4Pressed;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UTWDDialogue>> PlayedDialogues;
    
    UPROPERTY(Transient)
    TArray<ATWDPlayerHand*> HandsInPersonalRange;
    
    UPROPERTY(Transient)
    TArray<FTWDRequiredInventory> InventoryToReceive;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<ASDIInventoryActor>> InventoryToGive;
    
    UPROPERTY(Transient)
    ASDIInventoryActor* InventoryBeingGiven;
    
    UPROPERTY(Transient)
    TArray<FTWDBarkHistory> BarkHistory;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseHeadBoneForAIView;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DeathTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CorpseCleanupCanSpawnWalker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHighPriorityCorpse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATWDCharacter> CorpseCleanupSpawnWalkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceCorpseCleanupFromPlayer;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTWDCharacter_OnPostSignificance OnCharacterPostSignificance;
    
    UPROPERTY(EditAnywhere)
    float MinimumSignificanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float PartialSignificanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float FullSignificanceThreshold;
    
    UPROPERTY(Transient)
    float SignificanceDistFromViewer;
    
    UPROPERTY(Transient)
    float SignificanceGroupForce;
    
    UPROPERTY(Transient)
    uint32 SignificanceDescFlags;
    
    UPROPERTY(Transient)
    float RequestNewSignificance;
    
    UPROPERTY(BlueprintReadOnly)
    float SignificanceValue;
    
    UPROPERTY(Transient)
    bool bSignificanceBlinkIn;
    
    UPROPERTY(Transient)
    bool bSignificanceFreeze;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SignificanceMaxDistanceFreeze;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SignificanceMaxDistanceUnfreeze;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bParticipateInSleepingAI;
    
    UPROPERTY(Transient)
    bool bNonsignificantUntilRender;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReapplyNonsignificantUntilRenderRadius;
    
    UPROPERTY(EditAnywhere)
    float ResetSightPeripheralAfterPushbackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSuspicionToBreakDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundStimReachedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUntilInitialDamage;
    
    UPROPERTY(EditAnywhere)
    float ReHitDelay;
    
protected:
    UPROPERTY(Transient)
    float HitTimestamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* CoughAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoughSicknessPctThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoughRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinCoughInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCoughInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve SicknessMaxHealthPenalty;
    
    UPROPERTY(BlueprintReadWrite)
    float CustomMinVignetteLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConstrainHMDToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConstrainHMDZ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TEMP_ShowDialogSelectionWidgetOverride_DoShow;
    
    UPROPERTY(EditAnywhere)
    FTWDWoundInterfaceData TWDWoundData;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SplashColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SplashNormalTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* MeatColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* MeatNormalTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* CapColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* CapNormalTexture;
    
    UPROPERTY(EditAnywhere)
    float WoundSeverityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float DraggedRagdollBodyMassScale;
    
    UPROPERTY(Transient)
    bool bLastDraggedRagdollState;
    
    UPROPERTY(Transient)
    bool bOnDeathBeingDraggedRagdoll;
    
    UPROPERTY(Transient)
    UAnimInstance* AnimInstanceCache;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUseActualHeadForStableHead;
    
protected:
    UPROPERTY(Transient)
    bool bRequestDeath;
    
    UPROPERTY(EditDefaultsOnly)
    float DebugRecentBarkThreshold;
    
public:
    UPROPERTY(Transient)
    ECharacterBehavior CurrentBehavior;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldAlwaysRunFromExplosives: 1;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugSplayInfo;
    
    UPROPERTY(Transient)
    bool bHasDebugSplayInfo;
    
    UPROPERTY(Transient)
    TArray<uint32> SplayBoneIndices;
    
    UPROPERTY(Transient)
    TArray<uint32> SplitBoneIndices;
    
    UPROPERTY(Transient)
    TMap<int32, uint32> BoneIndexSplaySideMap;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> SpawnedActorsForCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAsyncMovement;
    
    ATWDCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterGrappleLocation WhichSideAmIAproachingFrom() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void WeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void WeaponEndStab(ATWDCharacter* Attacker, ATWDWeaponActor* Weapon);
    
    UFUNCTION()
    bool WasVisualHintRecentlyRendered() const;
    
protected:
    UFUNCTION()
    void UpdateTrespassing(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateStandToCrawlTransition();
    
    UFUNCTION()
    void UpdateSkinForDismemberedLimbs();
    
    UFUNCTION()
    void UpdateRigidBodyCollisions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDraggedRagdollState();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentMaxStaminaValue();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentMaxHealthValue();
    
protected:
    UFUNCTION()
    void UpdateCoughing(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdateAttackMoveTargetOffset(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void UnlockGrappleHandGrips();
    
    UFUNCTION(BlueprintCallable)
    void TEST_Splay(FName SplayBoneName, FVector ModelSplayLocationRelBone, FVector ModelSplayDirection, FVector ModelSplayNormal, FName DebugSplayShowMeshBoneName);
    
    UFUNCTION(BlueprintPure)
    bool SupportsDeathPooling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopSlotAnimation(FName SlotName, float BlendOutTime) const;
    
    UFUNCTION(BlueprintCallable)
    bool StopRagdoll(const bool bAttachToMeshRoot);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningForResponse();
    
    UFUNCTION(BlueprintCallable)
    void StopExchangingItems();
    
    UFUNCTION(BlueprintCallable)
    void StopDialogueLine();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimMove();
    
    UFUNCTION(BlueprintCallable)
    void StopAkAudioComponent();
    
    UFUNCTION(BlueprintCallable)
    bool StartRagdoll(const bool bStartImmediately, const bool bWasQueued);
    
    UFUNCTION(BlueprintNativeEvent)
    void StartDismember(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintCallable)
    void StartAnimMove(FVector EndLoc, float moveDuration);
    
    UFUNCTION()
    void SpawnSeverBouquetElement(FSpawnableBouquetElement& E);
    
    UFUNCTION()
    void SpawnSeverBouquet(FVector SeverLocation, FVector SeverForward, FVector SeverUp, FName BoneName, ETWDCharacterHitRegion Region, bool bSpawnDeferred);
    
    UFUNCTION()
    void SpawnQueuedDamageFXTimer();
    
    UFUNCTION()
    void SpawnQueuedDamageFX(bool bSpawnNewestFirst, bool bSpawnAll);
    
    UFUNCTION()
    float SignificanceFunction(UObject* QueryObj, const FTransform& ViewerTransform);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldRunFromExplosives();
    
    UFUNCTION()
    bool ShouldCapSignificance();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceId(const FString& NewVoiceId);
    
    UFUNCTION()
    void SetStatusIconState(EStatusIconState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetStandGroundVolumes(TArray<AVolume*> Volumes);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariants(const TMap<ETWDCharacterSkinSection, FName>& Variants);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariant(ETWDCharacterSkinSection Section, FName Variant);
    
    UFUNCTION()
    void SetSignificanceFreeze(bool bFrozen);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardInventoryClasses(TArray<TSubclassOf<ASDIInventoryActor>> NewRewardInventoryClasses);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredInventory(TArray<FTWDRequiredInventory> NewRequiredInventory);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetPooledDeathState(bool bDeathState);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonality(TSubclassOf<UTWDCharacterPersonality> NewPersonality);
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolPath(ATWDWaypointPath* Path);
    
    UFUNCTION()
    void SetInventoryHandFlip(bool bFlipEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadPerturb(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadLookAtTargetComponent(USceneComponent* TargetComponent, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadLookAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetHandSlotHand(EControllerHand hand);
    
    UFUNCTION(BlueprintCallable)
    void SetEnqueuedAssistAcknowledgeTarget(ATWDCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueRange(float NewDialogueRange);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogue(FName Key, TSubclassOf<UTWDDialogue> NewDialogue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBarksAllowed(bool bAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatVolumes(TArray<AVolume*> Volumes);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterPose(ECharacterPose Pose);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterGesture(ECharacterGesture Gesture);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterEmotion(ECharacterEmotion Emotion);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterBehavior(ECharacterBehavior Behavior, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleShadows(FName BoneName, bool bShadowEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBeingSeenPerceptionModifier(float Mod);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHealthMax(float NewMaxHealth, bool bRetainCurrentHealthPct, bool bWithHealthUpdatedCallback);
    
    UFUNCTION(BlueprintCallable)
    void SetArchetype(TSubclassOf<UTWDCharacterArchetype> NewArchetype);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleOfStrikeWeakpointDiseased(bool bDiseased);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleOfStrikeWeakpoint(FVector WoundSize, float AngleDeg, float OffsetAngleDeg);
    
    UFUNCTION(BlueprintCallable)
    void SetAkAudioComponentSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetAkAudioComponentRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION()
    void SetAdvancedDismemberDebugInfoScopeEnabled(bool bTrue);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerUpdateGripPhysicsRotation(ATWDGripPhysicsActor* GripActor, FRotator NewRotator);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateGripEnableDynamicObstacle(ATWDGripPhysicsDoor* GripActor, bool enable);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseGrappleTarget(ATWDCharacter* GrappleTarget, FVector PushBackDirection);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseGrappleAttacker(ATWDCharacter* GrappleAttacker, FVector PushBackDirection);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseGrapple(bool bTargets, bool bAttackers);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGrappleGrabWithHand(ATWDCharacter* Other, const FSDITransform_NetQuantize& GrappleRelTransform, EControllerHand GrappleHandEnum, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAlterStaminaMax(float Amount, bool bResetTimers);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAlterStamina(float Amount, bool bAllowExtended, bool bResetTimers);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreLimb(ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAllLimbs();
    
    UFUNCTION(BlueprintCallable)
    void ResetStaminaMax(bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void ResetAngleOfStrikeWeakpoint();
    
    UFUNCTION()
    void RequestDeath();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelfFromAllAIStimLists();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRagdollImpulses(bool bCancelVelocity, bool bQueuedDirect, bool bQueuedRadial);
    
    UFUNCTION(BlueprintCallable)
    void RemoveContext(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseHeldToken();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrappleTarget(ATWDCharacter* GrappleTarget, FVector PushBackDirection);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrappleAttacker(ATWDCharacter* GrappleAttacker, FVector PushBackDirection);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrapple(bool bTargets, bool bAttackers);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveInventory(TArray<FTWDRequiredInventory> InRequiredInventory, const FInventoryReceived& InInventoryReceived, const FInventoryExchanged& InInventoryExchanged);
    
    UFUNCTION(BlueprintCallable)
    void ReapplyAngleOfStrikeWeakpoint();
    
    UFUNCTION()
    void PostSignificanceFunction_EX(const float oldSignificance, const float newSignificance, bool forceAssignment);
    
    UFUNCTION()
    void PostSignificanceFunction(const float oldSignificance, const float newSignificance);
    
    UFUNCTION(BlueprintCallable)
    int32 PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName);
    
    UFUNCTION(BlueprintPure)
    bool PointInsideAngleOfStrikeWeakpointShape(const FVector& Point, bool bIncludeClosestOnCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UAnimMontage* PlaySlotAnimation(UAnimSequenceBase* AnimSequence, FName SlotName, float PlayRate, int32 LoopCount, float InStartTime) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayDialogueLineNonDiegetic(const FDialogueLine& DialogueLine, const FDialogueLineFinished& InDialogueLineFinished, bool bIsBark, EDialogueOverlapHandlingMethod OverlapHandlingMethod);
    
    UFUNCTION(BlueprintCallable)
    void PlayDialogueLine(const FDialogueLine& DialogueLine, const FDialogueLineFinished& InDialogueLineFinished, bool bIsBark, EDialogueOverlapHandlingMethod OverlapHandlingMethod);
    
    UFUNCTION(BlueprintCallable)
    UTWDDialogue* PlayDialogue(TSubclassOf<UTWDDialogue> Dialogue, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& InDialogueFinished);
    
    UFUNCTION(BlueprintCallable)
    void PlayBark(const FString& EventName, const FDialogueLineFinished& InBarkFinished, const FPlayBarkResultCallback& InPlayBarkResultCallback);
    
    UFUNCTION(BlueprintCallable)
    void PerformGrappleCooldownEx(ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable)
    void PerformGrappleCooldown(ETWDCharacterGrappleLocation GrappleLocation, bool bSingleArmOnly);
    
protected:
    UFUNCTION()
    void OnWoundedDeathTimerFinished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWasStartled(ATWDCharacter* StartledBy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWasAssisted(ATWDCharacter* AssistedBy);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStealthModeDeactivated();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStealthModeActivated();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStaminaActionFailed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStaminaActionEnded();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStabStateChange(bool bStabbed, ATWDCharacter* Stabber);
    
protected:
    UFUNCTION()
    void OnSpeechAudioEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION()
    void OnRep_RepGrappleTargets(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleTargets);
    
    UFUNCTION()
    void OnRep_RepGrappleState(ETWDCharacterGrappleState OldRepGrappleState);
    
    UFUNCTION()
    void OnRep_RepGrapplePushBackDirection(const FVector& OldRepGrapplePushBackDirection);
    
    UFUNCTION()
    void OnRep_RepGrappleAttackHoldTime(float OldRepGrappleAttackHoldTime);
    
    UFUNCTION()
    void OnRep_RepGrappleAttackers(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleAttackers);
    
    UFUNCTION()
    void OnRep_RepCurrentStaminaMax(float OldRepCurrentStaminaMax);
    
    UFUNCTION()
    void OnRep_RepCurrentStamina(float OldRepCurrentStamina);
    
    UFUNCTION()
    void OnRep_RepCurrentHealth(float OldRepCurrentHealth);
    
    UFUNCTION()
    void OnRep_bRepWinded(bool OldbRepWinded);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReceivedInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPersonalSpace(AActor* OtherActor);
    
protected:
    UFUNCTION()
    void OnMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnKilledCharacter(ATWDCharacter* Killed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitReactNative(FVector Direction, ETWDCharacterHitRegion Region, EHitReactType Type, bool bForceInterrupt);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHitReaction(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* HitReactionInstigator, TSubclassOf<UDamageType> DamageTypeClass, float WithSpeed, float WithMass, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByPhysicsActor(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* HitReactionInstigator, float WithSpeed, float WithMass);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHitAnimationRegion(ETWDCharacterHitRegion Region, FVector_NetQuantizeNormal ShotDirection);
    
protected:
    UFUNCTION()
    void OnHit(ETWDCharacterHitRegion Region, const FSDIReplicatedDamageData& DamageTakenData);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnHealthUpdated(float PrevHealth, float NewHealth);
    
    UFUNCTION()
    void OnHandNearPocketInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnHandNearPocket();
    
    UFUNCTION()
    void OnHandExitedPersonalRange(ATWDPlayerCharacter* HandOwner);
    
    UFUNCTION()
    void OnHandEnteredPersonalRange(ATWDPlayerCharacter* HandOwner);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrappleStateChanged();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrappleReleasedTarget(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrappleReleasedByAttacker(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrapplePushBack(const FVector& Direction);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrappleGrabbedTarget(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrappleGrabbedByAttacker(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION()
    void OnGivenInventoryGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGivenInventory();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDismemberedLimb(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb);
    
    UFUNCTION()
    void OnDialogWidgetIsEnabledCallback(bool bEnabled);
    
    UFUNCTION()
    void OnDialogueSelected(const FTWDDialogueOption& DialogueOption);
    
    UFUNCTION()
    void OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCharacterRevival(float NewHealth);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCharacterDeath(float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
protected:
    UFUNCTION()
    void OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnBulletNearMiss(FVector Location, FVector FlyingDirection, AController* ShootingInstigator, bool IsOtherCharacterDamaged, bool IsLikelyFiredAt);
    
protected:
    UFUNCTION()
    void OnBarkFinished(const FDialogueLine& DialogueLine, bool bCompleted);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void NonVRWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NonVROnGrapplePushBackOthers();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintPure=false)
    void MulticastPlaySlotAnimation(UAnimSequenceBase* AnimSequence, FName SlotName, float PlayRate, int32 LoopCount, float InStartTime, bool ExecuteOnDedicatedServer) const;
    
    UFUNCTION(BlueprintCallable)
    void MovementAddControlRotation(FRotator ActorRotDelta, FRotator CtrlRotDelta, bool bApplyYaw, bool bApplyPitch);
    
    UFUNCTION(BlueprintNativeEvent)
    float ModifyHealingTaken(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser);
    
    UFUNCTION(BlueprintNativeEvent)
    float ModifyDamageTaken(float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION()
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintNativeEvent)
    void LimbRestored(ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintNativeEvent)
    void LimbDismembered(ETWDCharacterHitRegion Region, int32 CutBoneIdx, const TArray<int32>& KeepBoneIndices, FVector WoundCenter, FVector WoundForward, FVector WoundUp, bool bDroppedLimb, ATWDDismemberLimbCap* LimbCap, ATWDDismemberDroppedLimb* DroppedLimb, FVector ImpulseDirection, bool bFromCopy, FVector RagdollBodyImpulse, FVector RagdollBodyImpulseLocation, FName RagdollBodyImpulseBone, float SplayDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool KillCharacterBy(ATWDCharacter* Killer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool KillCharacter();
    
    UFUNCTION(BlueprintPure)
    bool K2IsGrapplingTarget(ATWDCharacter* Target, ETWDCharacterGrappleLocation& OutGrappleLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool K2IsGrapplingAt(ETWDCharacterGrappleLocation GrappleLocation, TArray<ATWDCharacter*>& OutTargets) const;
    
    UFUNCTION(BlueprintPure)
    bool K2IsBeingGrappledBy(ATWDCharacter* Attacker, ETWDCharacterGrappleLocation& OutGrappleLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool K2IsBeingGrappledAt(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2AttemptDismember(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintPure)
    bool IsWounded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWinded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWarnTrespassing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTrespassingIconDisplay() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTrespassing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStealthModeActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSignificant() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSeveredTorsoCrawler() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRagdollQueued() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRagdollActiveOrQueued() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRagdollActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMeleeAttackAnim() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingGunActionAnim(ETWDGunAction Action) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingDialogue() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingBark() const;
    
    UFUNCTION()
    bool IsParticipateInSleepingAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsObstacleBroken() const;
    
    UFUNCTION()
    bool IsNonsignificantUntilRender() const;
    
    UFUNCTION()
    bool IsNeverSignificant() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLimbDismemberPending(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLimbDismembered(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStabState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInsideMeleeAttackAnimDamageWindow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInGrappleBleedOutState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInDialogue();
    
    UFUNCTION(BlueprintPure)
    bool IsInBrainedState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldingAWeapon(EControllerHand hand) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeadTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeadPerturbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrapplingSomeone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrappleLocationOnCooldown(ETWDCharacterGrappleLocation GrappleLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrappleAttacking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExecutingAttackMove(FVector& OutMoveLocation, AActor*& OutMoveTarget, FName& OutMoveTargetSocket, bool& bOutFaceTargetYaw, bool& bOutFaceTargetPitch) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDraggingSomeone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsDraggedRagdoll() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDismemberAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterWithinDialogueRange(ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBreakingObstacle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingGrappled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingDragged(ASDIPlayerHand*& OutDragHand, ASDIPlayerHand*& OutOtherDragHand) const;
    
    UFUNCTION()
    bool IsAlwaysSignificant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractWithObstacle(AActor* Obstacle, FVector EdgeOfObstacle, FVector OppositeEdge, bool bIsLedge);
    
    UFUNCTION(BlueprintCallable)
    void InputMovementActiveReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputMovementActivePressed();
    
    UFUNCTION(BlueprintCallable)
    void InitCapsuleShadows();
    
    UFUNCTION(BlueprintCallable)
    void IncrementStaminaMax(float Amount, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStamina(float Amount, bool bAllowExtended, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float HealDamage(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser);
    
    UFUNCTION(BlueprintPure)
    bool HasSkinArmor(ETWDCharacterHitRegion HitRegion, int32& OutAmount, float& OutTimeSinceDestroyed) const;
    
    UFUNCTION(BlueprintPure)
    bool HasRewardInventory() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOuterRingTokenForTarget(ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintPure)
    bool HasOuterRingToken() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFeedingTokenForTarget(ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintPure)
    bool HasFeedingToken() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAngleOfStrikeWeakpoint(bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintPure)
    bool GrappleSyncToAttacker() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrappleGrab(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveInventory(TArray<TSubclassOf<ASDIInventoryActor>> InRewardInventoryClasses, const FInventoryGiven& InInventoryGiven, const FInventoryExchanged& InInventoryExchanged);
    
    UFUNCTION(BlueprintPure)
    float GetWindedRecoveryPct() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWindedGrappleCount() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDWaypointPatrolComponent* GetWaypointPatrolComponent();
    
    UFUNCTION(BlueprintPure)
    FBox GetTargetBoxForAIRange() const;
    
    UFUNCTION(BlueprintPure)
    ETWDSuspiciousStates GetSuspicionState() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthModeRemainingPercentage() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthModeAppliedPercentage() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetStabOtherHand() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetStableHeadLocationProxy();
    
    UFUNCTION(BlueprintPure)
    FName GetSkinSectionVariant(ETWDCharacterSkinSection Section) const;
    
    UFUNCTION(BlueprintPure)
    void GetSkinSectionInfo(ETWDCharacterSkinSection Section, int32& OutIndex, FName& OutVariant, TMap<FName, float>& OutScalarParams, TMap<FName, FLinearColor>& OutColorParams, TMap<FName, TSoftObjectPtr<UTexture>>& OutTextureParams, FSDISkinSkeletalMeshSet& OutSkinMeshSet) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetRightHipInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<ASDIInventoryActor>> GetRewardInventoryClasses() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTWDRequiredInventory> GetRequiredInventory() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UTWDDialogue> GetReadyDialogue(FName Key);
    
    UFUNCTION(BlueprintPure)
    UTWDCharacterPersonality* GetPersonality() const;
    
    UFUNCTION(BlueprintPure)
    float GetPerceptionVisibility() const;
    
    UFUNCTION(BlueprintPure)
    float GetPerceptionNoiseLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetPeakStaminaPct() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOuterRingSlotLocation(int32 Index, ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintPure)
    float GetOuterRingRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOuterRingLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOuterRingIndexBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable)
    ASDIStimAndResponseActor* GetObstacleToBreak();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumOuterRingTokens(const ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumGrappleTargets() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumGrappleAttackers() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumFeedingTokens(const ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetNotebookInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDNotebook* GetNotebook();
    
    UFUNCTION(BlueprintPure)
    float GetNoiseLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStaminaFloor() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxNoiseLevel() const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetLeftHipInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastTrespassingTime() const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetInventorySlotByIdx(uint8 slotIdx) const;
    
    UFUNCTION(BlueprintPure)
    ATWDHMDCameraActor* GetHMDCameraActor() const;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterHitRegion GetHitRegion(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHitReactSFX(TSubclassOf<UDamageType> DamageType, FTWDHitReactSFX& HitReactSFX);
    
    UFUNCTION(BlueprintCallable)
    ETWDCharacterGrappleLocation GetHeldTokenLocation();
    
    UFUNCTION(BlueprintPure)
    float GetHealthValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthPercentage() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadLookAtLocation();
    
    UFUNCTION(BlueprintPure)
    bool GetGrappleUIInfo(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker, float& GrappleStrengthPct, float& GrappleStrugglePct) const;
    
    UFUNCTION(BlueprintCallable)
    UGrappleTokenSystem* GetGrappleTokenSystem();
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetGrappleTokenHolder(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterGrappleLocation GetGrappleTargetLocation(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetGrappleTarget(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterGrappleState GetGrappleState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrappleSlotLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetGrappleSlotLocation(ETWDCharacterGrappleLocation Location, const ATWDCharacter* TargetCharacter) const;
    
    UFUNCTION(BlueprintPure)
    float GetGrapplePercent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetGrappleOrientationRightVector() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetGrappleHand() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGrappleAttackTargetTransform(ATWDCharacter* GrappleAttacker) const;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterGrappleLocation GetGrappleAttackerLocation(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetGrappleAttacker(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UObject* GetFootstepSound(UPhysicalMaterial* PhysMat, UObject* CurrentSound) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetFlashlightInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDFlashlight* GetFlashlight();
    
    UFUNCTION(BlueprintPure)
    FVector GetFeedingSlotLocation(int32 Index, ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintPure)
    float GetFeedingRingRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeedingLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFeedingIndexBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintPure)
    EFaction GetFaction() const;
    
    UFUNCTION()
    ATWDCharacter* GetEnqueuedAssistAcknowledgeTarget();
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterHitRegion GetDismemberRegion(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    float GetDialogueRange() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UTWDDialogue> GetDialogue(FName Key);
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<UTWDCharacterArchetype> GetDesiredArchetypeBlueprint() const;
    
    UFUNCTION(BlueprintPure)
    UPhysicsAsset* GetDefaultPhysicsAsset() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStaminaPct() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStaminaMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSicknessMaxHealthPenalty() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPeakMaxStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPeakMaxHealthValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMaxStaminaPct() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMaxHealthValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ETWDCharacterGrappleLocation> GetCurrentGrappleTokenLocations();
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ATWDCharacter> GetCorpseCleanupSpawnWalkerClass(EFaction CorpseFaction) const;
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterType GetCharacterType() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCharacterBehaviorFlag(ECharacterBehaviorFlags Flag) const;
    
    UFUNCTION(BlueprintPure)
    ECharacterBehavior GetCharacterBehavior() const;
    
    UFUNCTION(BlueprintPure)
    float GetBeingSeenPerceptionModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseMaxHealthValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseHealthPercentage() const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetBackpackInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDBackpack* GetBackpack();
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetBackInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    UTWDCharacterArchetype* GetArchetype() const;
    
    UFUNCTION(BlueprintPure)
    FSDITransformCollisionShape GetAngleOfStrikeWeakpointShape() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAngleOfStrikeWeakpoint(FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintCallable)
    ATWDAmmoPouch* GetAmmoPouch();
    
    UFUNCTION()
    bool GetAdvancedDismemberDebugInfoScopeEnabled();
    
protected:
    UFUNCTION()
    void ForwardMeleeAttackOver();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForwardMeleeAttack(float Duration, float Distance);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteAttackMoveLocation(const FVector& TargetLocation, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteAttackMoveActor(AActor* MoveTarget, FName MoveTargetSocket, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit, bool bPredictTargetVelocity, bool bOffsetIgnoreCollisions);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteAttackMove(const FVector& TargetLocation, AActor* MoveTarget, FName MoveTargetSocket, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit, bool bPredictTargetVelocity, bool bOffsetIgnoreCollisions);
    
    UFUNCTION()
    void EnableVisualHint(bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableHealthRegen(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableHandSlot(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAngleOfStrikeWeakpoint(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DumpSurvivorConfig();
    
public:
    UFUNCTION(BlueprintPure)
    bool DoesRequireInventory() const;
    
    UFUNCTION(BlueprintCallable)
    bool DismemberLimb(ETWDCharacterHitRegion Region, FName WoundBoneName, FVector WoundCenter, FVector WoundForward, FVector WoundUp, bool bDropLimb, AController* EventInstigator, ATWDWeaponActor* Weapon, UTWDWeaponHitCapsuleComponent* DismemberCapsule, FVector ActorSpaceImpulseDirection, bool bFromCopy, float Delay, float SplayDuration);
    
    UFUNCTION(BlueprintCallable)
    void DisableHeadTracking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableCapsuleCollision();
    
    UFUNCTION(BlueprintCallable)
    void DepleteGrappleHandStruggleStrength();
    
    UFUNCTION(BlueprintCallable)
    void DecrementStaminaMax(float Amount, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void DecrementStamina(float Amount, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    FString DebugGetRecentBarkEvents();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CorpseCleanupCopyAppearance(const ATWDCharacter* FromOldCharacter);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientGrappleGrabWithHandFail(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientAlterStaminaMax(float Amount, bool bResetTimers);
    
    UFUNCTION(Client, Reliable)
    void ClientAlterStamina(float Amount, bool bAllowExtended, bool bResetTimers);
    
public:
    UFUNCTION()
    void CheckForSignificanceChange();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanStealGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Stealer) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanReviveFromHeal(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser);
    
    UFUNCTION()
    bool CanReapplyNonsignificantUntilRender(const FTransform& ViewerTransform);
    
    UFUNCTION(BlueprintPure)
    bool CanGrappleTarget(const ATWDCharacter* Target, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGetOuterRingTokenOnTarget(const ATWDCharacter* OuterRingTarget, TArray<int32>& OutValidOuterRingIndexes) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGetFeedingTokenOnTarget(const ATWDCharacter* FeedingTarget, TArray<int32>& OutValidFeedingIndexes) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanDismemberLimb(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanDieFromDamage(float PreDeathHealth, float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintCallable)
    void CancelGrappleAttack();
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackMove();
    
    UFUNCTION(BlueprintPure)
    bool CanCallBehaviorEvent(FName EventName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanBeGrappledByHand(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeGrappledBy(const ATWDCharacter* Attacker, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const;
    
    UFUNCTION(BlueprintCallable)
    void CallBehaviorEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void BreaksStealthForViewers();
    
    UFUNCTION(BlueprintCallable)
    bool BeginGrappleAttack(float Speed, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void BeginBreakingObstacle(ASDIStimAndResponseActor* Obstacle, bool bIsAssisting);
    
    UFUNCTION(BlueprintPure)
    bool AmIOnTheCorrectGrappleSide() const;
    
    UFUNCTION(BlueprintCallable)
    void AlterStaminaMax(float Amount, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void AlterStamina(float Amount, bool bAllowExtended, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    float AlterSickness(float Delta, ESicknessSourceType SourceType);
    
    UFUNCTION(BlueprintCallable)
    void AlterBaseHealthMax(float Amount, bool bRetainCurrentHealthPct, bool bWithHealthUpdatedCallback);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo) const;
    
    UFUNCTION()
    bool AllowStaminaRecovery(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowNonVRWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection) const;
    
    UFUNCTION(BlueprintPure)
    bool AkAudioComponentHasActiveEvents() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddRagdollRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    bool AddRagdollImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool AddRagdollImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_String(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Int(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Float(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Bool(const FString& Key, bool bValue);
    
protected:
    UFUNCTION()
    void ActiveRagdollComponentDeactivated(AActor* Actor, USDIActiveRagdollComponent* Comp);
    
    UFUNCTION()
    void ActiveRagdollComponentActivated(AActor* Actor, USDIActiveRagdollComponent* Comp);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AcquireOuterRingToken(int32 Index, bool bAllowStealing, ATWDCharacter* OuterRingTarget);
    
    UFUNCTION(BlueprintCallable)
    bool AcquireGrappleToken(ETWDCharacterGrappleLocation Location, ATWDCharacter* GrappleTarget);
    
    UFUNCTION(BlueprintCallable)
    bool AcquireFeedingToken(int32 Index, bool bAllowStealing, ATWDCharacter* FeedingTarget);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool ExecuteResponse(FTWDResponse Response, FName EventName) override PURE_VIRTUAL(ExecuteResponse, return false;);
    
    UFUNCTION(BlueprintCallable)
    void TrackSpawnedActorForCleanup(AActor* A, FName SpawnContext) override PURE_VIRTUAL(TrackSpawnedActorForCleanup,);
    
    UFUNCTION(BlueprintCallable)
    void TickWounds(float DeltaTime) override PURE_VIRTUAL(TickWounds,);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnAndTrackActorForCleanup(TSubclassOf<AActor> ActorClass, const FTransform& T, FName SpawnContext) override PURE_VIRTUAL(SpawnAndTrackActorForCleanup, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoVerticalCut() const override PURE_VIRTUAL(SeveredTorsoVerticalCut, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasRightLegBase() const override PURE_VIRTUAL(SeveredTorsoHasRightLegBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasRightArmBase() const override PURE_VIRTUAL(SeveredTorsoHasRightArmBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasLeftLegBase() const override PURE_VIRTUAL(SeveredTorsoHasLeftLegBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasLeftArmBase() const override PURE_VIRTUAL(SeveredTorsoHasLeftArmBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasHeadBase() const override PURE_VIRTUAL(SeveredTorsoHasHeadBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetWoundParameters() override PURE_VIRTUAL(SetWoundParameters,);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveProtectedWound(int32 WoundID) override PURE_VIRTUAL(RemoveProtectedWound, return false;);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWounds() override PURE_VIRTUAL(RemoveAllWounds,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxWounds() const override PURE_VIRTUAL(GetMaxWounds, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void DestroySpawnedActors(FName SpawnContext) override PURE_VIRTUAL(DestroySpawnedActors,);
    
    UFUNCTION(BlueprintCallable)
    void CopyWounds(AActor* Other, bool bRemoveExisting) override PURE_VIRTUAL(CopyWounds,);
    
    UFUNCTION(BlueprintCallable)
    void ComputeSeveredTorsoExtremityMask(FVector ModelWoundCenter, FVector ModelWoundUp) override PURE_VIRTUAL(ComputeSeveredTorsoExtremityMask,);
    
    UFUNCTION(BlueprintCallable)
    int32 AddProtectedWoundRestPoseSpace(const FVector& EllipsoidCenter, const FVector& DirFwd, const FVector& DirUp, float MaxDent, float SizeRight, float SizeUp, float DistanceForward, FVector2D SplashRatio, EWoundType WoundType) override PURE_VIRTUAL(AddProtectedWoundRestPoseSpace, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 AddProtectedGeneralWoundRestPoseSpace(const FVector& EllipsoidCenter, const FVector& DirFwd, const FVector& DirUp, int32 CutBone, TArray<int32> KeepBoneIndices, float MaxDent, float SizeRight, float SizeUp, float DistanceForward, FVector2D SplashRatio, EWoundType WoundType, bool bShowLimb, bool bDoSever) override PURE_VIRTUAL(AddProtectedGeneralWoundRestPoseSpace, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool UseAdvancedDismember() const override PURE_VIRTUAL(UseAdvancedDismember, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ShowAdvancedDismemberDebugInfo() const override PURE_VIRTUAL(ShowAdvancedDismemberDebugInfo, return false;);
    
};

