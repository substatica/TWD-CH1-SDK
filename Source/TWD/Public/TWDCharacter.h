#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDICharacterAdvanced.h"
#include "TWDCharacterPhysicsAssetLOD.h"
#include "TWDCharacterQueuedDamageFX.h"
#include "ETWDCharacterHitRegion.h"
#include "TWDInteractiveHighlightInterface.h"
#include "SDISignificanceBinInterface.h"
#include "GenericTeamAgentInterface.h"
#include "SDIReplicatedDamageData.h"
#include "TWDResponseInterface.h"
#include "Perception/AISightTargetInterface.h"
#include "SDIInteractiveActorInterface.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "TWDWoundInterface.h"
#include "TWDStabInterface.h"
#include "ETWDCharacterGrappleState.h"
#include "TWDDismemberInterface.h"
#include "TWDTargetInterface.h"
#include "ETWDCharacterGrappleLocation.h"
#include "DialogueFinishedEventDelegate.h"
#include "SDIDoubleRubberBandVector.h"
#include "SDIRubberBandSettings.h"
#include "CharacterHealthUpdatedDelegate.h"
#include "EFaction.h"
#include "EGender.h"
#include "TWDCharacterDragEntry.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterTargetPriorityOverride.h"
#include "Curves/CurveFloat.h"
#include "TWDCharacterGrappleEntry.h"
#include "TWDCharacter_OnMaxStaminaModifiedDelegate.h"
#include "TWDCharacterDragTarget.h"
#include "DialogueLineFinishedDelegate.h"
#include "Engine/EngineTypes.h"
#include "SDIInteractiveActorData.h"
#include "InventoryGivenDelegate.h"
#include "StuckWeapon.h"
#include "SDITransform_NetQuantize.h"
#include "TWDWoundInterfaceData.h"
#include "TWDDismemberData.h"
#include "RFloat.h"
#include "AlphaBlend.h"
#include "SDIBlendOption.h"
#include "ETWDCharacterHitDirection.h"
#include "ESDIAxis.h"
#include "SDIPlayerHandMove.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIDamageData.h"
#include "InputCoreTypes.h"
#include "SphericalOscillator.h"
#include "TWDStabBone.h"
#include "TWDCharacterDamageFX.h"
#include "AnimBlendSpaceBounds.h"
#include "SDIComponentReplacementSphere.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "TWDDismemberedLimb.h"
#include "TWDCharacterDelayedDismember.h"
#include "TWDHitReactSFX.h"
#include "SDIAnimNotifyStateData.h"
#include "QFloat.h"
#include "QVector.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterSkinSection.h"
#include "TWDSkinSkeletalMeshSetArmor.h"
#include "ETWDCharacterType.h"
#include "UObject/NoExportTypes.h"
#include "InventoryChangedDelegate.h"
#include "TWDCharacter_OnCharacterRevivalDelegate.h"
#include "TWDCharacter_OnCharacterDeathDelegate.h"
#include "TWDCharacter_WeaponFiredDelegate.h"
#include "TWDCharacter_FeedingTokenDelegateDelegate.h"
#include "TWDCharacter_OuterRingTokenDelegateDelegate.h"
#include "TWDCharacter_GrappleTokenDelegateDelegate.h"
#include "ETWDCharacterCoverState.h"
#include "TWDCharacter_OnWindedChangedDelegate.h"
#include "DialogueStartedEventDelegate.h"
#include "EDialogueOverlapHandlingMethod.h"
#include "BehaviorEventCalledDelegate.h"
#include "TWDInitialContext.h"
#include "UObject/NoExportTypes.h"
#include "TWDRequiredInventory.h"
#include "TWDCharacter_OnPostSignificanceDelegate.h"
#include "DialogueLine.h"
#include "ESDIInteractRangeType.h"
#include "TWDDialogueOption.h"
#include "TWDBarkHistory.h"
#include "ECharacterBehavior.h"
#include "EWoundType.h"
#include "Engine/EngineTypes.h"
#include "TWDWeaponDismemberSettings.h"
#include "SpawnableBouquetElement.h"
#include "EStatusIconState.h"
#include "ECharacterPose.h"
#include "ECharacterGesture.h"
#include "ECharacterEmotion.h"
#include "UObject/NoExportTypes.h"
#include "InventoryReceivedDelegate.h"
#include "InventoryExchangedDelegate.h"
#include "DialogueFinishedDelegate.h"
#include "PlayBarkResultCallbackDelegate.h"
#include "EAkCallbackType.h"
#include "EHitReactType.h"
#include "Engine/NetSerialization.h"
#include "ETWDGunAction.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinSkeletalMeshSet.h"
#include "ETWDSuspiciousStates.h"
#include "ECharacterBehaviorFlags.h"
#include "SDITransformCollisionShape.h"
#include "ESicknessSourceType.h"
#include "Chaos/ChaosEngineInterface.h"
#include "TWDResponse.h"
#include "Engine/SpringInterpolator.h"
#include "TWDCharacter.generated.h"

class ATWDCharacterHandSlot;
class ATWDWeaponActor;
class UAnimSequenceBase;
class UTWDAutoTickAkComponent;
class UTWDWaypointPatrolComponent;
class UTWDActiveRagdollComponent;
class UTWDDialogueWidgetSnapTarget;
class UTWDRigidBodySleeperComponent;
class UStaticMeshComponent;
class UTWDCharacterArchetype;
class UTWDDialogue;
class AVolume;
class ATWDWaypointPath;
class UParticleSystem;
class UPhysicsAsset;
class USDIDOTComponent;
class UDamageType;
class UToken;
class UPrimitiveComponent;
class UHapticFeedbackEffect_Base;
class ATWDPlayerCharacter;
class UCurveFloat;
class UAkAudioEvent;
class UObject;
class ATWDDismemberLimbCap;
class UAkCallbackInfo;
class UGrappleTokenSystem;
class USceneComponent;
class ASDIPlayerHand;
class ATWDDismemberDroppedLimb;
class ASDIStimAndResponseActor;
class AActor;
class UTWDAnimNotifyState_MeleeAttack;
class UTWDAnimNotifyState_MeleeAttackDamageWindow;
class UTWDAnimNotifyState_GunAction;
class UStaticMesh;
class ATWDCharacter;
class UTWDCharacterPersonality;
class UTWDCharacterSkin;
class ASDIInventoryActor;
class UTWDTextToSpeechAkComponent;
class ATWDPlayerHand;
class UTexture2D;
class UAnimInstance;
class ASDIHeldActor;
class ATWDGripPhysicsActor;
class ATWDGripPhysicsDoor;
class UAnimMontage;
class ATWDPlayerController;
class AController;
class UTexture;
class ATWDPlayerInventorySlot;
class ATWDNotebook;
class ATWDHMDCameraActor;
class UPhysicalMaterial;
class ATWDFlashlight;
class ATWDBackpack;
class ATWDAmmoPouch;
class UTWDWeaponHitCapsuleComponent;
class USDIActiveRagdollComponent;

UCLASS(Blueprintable)
class TWD_API ATWDCharacter : public ASDICharacterAdvanced, public IGenericTeamAgentInterface, public IAISightTargetInterface, public ISDIInteractiveActorInterface, public ITWDSeamlessTravelActorInterface, public ITWDInteractiveHighlightInterface, public ITWDResponseInterface, public ISDISignificanceBinInterface, public ITWDWoundInterface, public ITWDStabInterface, public ITWDDismemberInterface, public ITWDTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDAutoTickAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDAutoTickAkComponent* SpeechAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDActiveRagdollComponent* ActiveRagdollComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDRigidBodySleeperComponent* RigidBodySleeperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisualHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisualHintSwapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WalkerProximityAudioRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WalkerProximityAudioStealthStateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WalkerProximityAudioStealthStateOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WalkerProximityAudioStealthStateOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkerProximityAudioMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldOverrideGenderAndVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDefaultBarksAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DebugLastBarkEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDCharacterArchetype> ArchetypeBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDCharacterHandSlot> CharacterHandSlotBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UTWDDialogue>> DialogueMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> StandGroundVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> CombatVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDCharacterTargetPriorityOverride TargetPriorityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWaypointPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDWaypointPatrolComponent* WaypointPatrolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PerceptionSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightMotionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightLightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightLightCurveNormalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightWalkingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightSprintingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightCrouchingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightCrawlingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightPeripheralCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingSeenPerceptionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterDragTarget> DragBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIRubberBandSettings DragBodyRubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIRubberBandSettings DragHandRubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragPullMaxHandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragGrabHandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIInteractiveActorData InteractiveActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleMoveLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleMoveLocationLeftAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleMoveLocationRightAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETWDCharacterGrappleLocation> GrappleTokenLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETWDCharacterGrappleLocation> NonVRGrappleTokenLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFeederTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOuterRingTokens;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCrawlingTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UToken* HeldToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* GrappleGripCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleBleedOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideGrappleHandTrackedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WindedGrappleHighlightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrappleSyncToAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncTranslationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDTranslationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDMaxYawOffsetDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncRotationSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption GrappleSyncRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrappleSyncRotationFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncRotationFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSyncRotationFadeOutMinAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GrappleSyncRotationBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRGrappleSyncRotationSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption NonVRGrappleSyncRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRGrappleCrawlCameraPitchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleGrabFistDamageTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIAxis GrappleGrabAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrappleCanPushBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleGripTargetStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackerHeadStaminaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrappleAttackerHeadStaminaRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackerArmStaminaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrappleAttackerArmStaminaRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRGrappleAttackInitialStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRGrappleAttackStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove GrapplePushBackBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleIgnorePushBackBreakMoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleLeftArmCooldownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleRightArmCooldownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleNeckCooldownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleCooldownRegrowthTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrappleReleaseCooldownSingleArmOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStabGrappleCooldownSingleArmOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabHeadGrappleCooldownSingleArmOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAdditionalLockHandDurationAfterRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GrappleAttackTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GrappleAttackPushBackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator GrappleAttackPushBackSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat GrappleAttackPushBackAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackAngleDistancePctExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackBreakPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackMoveBreakPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackBreakLoopFeedbackPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackBreakMaxTimeSinceBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleAttackAdditionalLockHandDurationAfterRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove GrappleAttackPushBackBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandShoulderLockArmLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandShoulderLockAdditionalArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData GrappleAttackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData InitialAttackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData NonVRGrappleAttackInitialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData NonVRGrappleAttackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDIDOTComponent> GrappleAttackHoldDOTClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleAttackLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleAttackHoldLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleAttackPushBackGrabFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleAttackPushBackLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleAttackPushBackBreakLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapplePushBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapplePushBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleFailsafeReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrappleHandStruggleRubberBandVelocityMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrappleHandStruggleRubberBandExtraSpringStiffnessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDoubleRubberBandVector GrappleHandStruggleRubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphericalOscillator GrappleHandStruggleOscillator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleMaxStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleStrengthRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleStrengthRecoveryDamageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove GrappleHandStruggleBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove GrappleHandStruggleWindedBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandMove GrappleHandStruggleUIMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator GrappleHandStruggleUISpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGrappleHandStruggleBreakAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGrappleHandStrugglePushBackAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleLockRollDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleHandStruggleStartFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleHandStrugglePushOffFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrappleHandStruggleLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrappleHandStruggleLoopFeedbackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrappleLeftHandDeathSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrappleRightHandDeathSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGrapplePlayerHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGrapplePlayerBothArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHeadGrappleSyncVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHeadGrappleSyncVerticalTranslationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleNeckDeltaDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeedingMoveLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRingMoveLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDStabBone> StabBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> StabStickBoneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StabLoopParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StabMovementParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabMeleeDurabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismemberMeleeDurabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitMeleeDurabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInStabState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSkipDeathBarkDueToHeadDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator PerceptionVisibilitySpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator ExternalNoiseSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WoundBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundedDeathDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeveredTorsoCrawlAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterHitRegion, FTWDDismemberData> DismemberData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportAdvancedDismember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportAdvancedDismemberDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAdvancedDismemberDebugInfoScopeEnabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallDamageAKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FallDamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> DeferredFallingDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthModeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StealthModeActivationApplicationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthModeApplicationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthModeApplicationDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthModeApplicationFalloffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* StealthModeFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StealthModeApplicationProgressSkinParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadThreatRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrespassExitTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrespassEnterIconTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepIsHeadTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector RepLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RepLookAtTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName RepLookAtTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHeadPerturbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookAtOffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookAtOffsetPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadLookAtOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeadLookAtOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaFloorPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaDecayFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StaminaRecoveryRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleWindedStaminaRecoveryRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingWindedStaminaRecoveryRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve WindedStaminaRecoveryRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindedStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendedStaminaDecayRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ExtendedStaminaDecayRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaBenefitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaBenefitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleGripStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStrugglePushOffStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandAttackPushOffStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandPushOffStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingOneHandStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingTwoHandStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingConsumeStaminaElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleUpStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleOverStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaConsumeEventMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryEventMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaIdleEventMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaConsumeStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaConsumeLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaConsumeLoopStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaWindedStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaWindedLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaWindedLoopStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaWindedEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaRecoveryStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaRecoveryLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaRecoveryLoopStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaIdleStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaIdleLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaIdleLoopStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaActionFailedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StaminaActionEndedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterPhysicsAssetLOD> PhysicsAssetLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshComponentHitHistoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintInputDoubletapMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVFlashlightToggleInputDoubletapMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTouchMovementActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSprintButtonHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMovementInputActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimeSprintInputHeldDownStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimeUVFlashlightToggleInputHeldDownStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlPhysicalCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCrouchEngagedByPhysicalCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicsAsset*, UPhysicsAsset*> RagdollPhysicsAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterDragEntry> GrappleDragEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UGrappleTokenSystem* GrappleTokenSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepGrappleAttackers, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterGrappleEntry> RepGrappleAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterGrappleEntry> LocalGrappleAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepGrappleTargets, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterGrappleEntry> RepGrappleTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterGrappleEntry> LocalGrappleTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGrapplePlayerArmCollisionRemoveRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* GrappleHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* StabOtherHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrapplePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleBleedOutTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GrappleLoopFeedbackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GrappleAttackLoopFeedbackLeftId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GrappleAttackLoopFeedbackRightId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GrappleAttackPushBackLoopFeedbackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand RepGrappleHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSDITransform_NetQuantize RepGrappleRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepGrappleState, meta=(AllowPrivateAccess=true))
    ETWDCharacterGrappleState RepGrappleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepGrapplePushBackDirection, meta=(AllowPrivateAccess=true))
    FVector RepGrapplePushBackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepGrappleAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RepGrappleAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepGrappleAttackHoldTime, meta=(AllowPrivateAccess=true))
    float RepGrappleAttackHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleAttackHoldTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleAttackPushBackBreakTimeSinceBreakMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleAdditionalLockHandAfterReleaseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleIgnorePushBackBreakMoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector GrappleHandStrugglePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector GrappleHandStruggleInterpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleStrengthLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleStrengthRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleStrengthDamageTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GrappleHandStruggleLoopFeedbackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bADSArmCollisionRemoveRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStuckWeapon> StuckWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RepPerceptionVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExternalNoiseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterDamageFX> CharacterDamageFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetDialogueSelectionLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueSkipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* DialogueRangeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalSpaceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalSpaceRadiusHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalSpaceRadiusChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalSpaceRadiusHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalSpaceRadiusHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubsequentBarkRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarkRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendSpaceBounds GrappleAnimBlendSpaceBoundStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendSpaceBounds GrappleAttackAnimBlendSpaceBoundStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacementSphere GrappleAttackArmStruggleSphereReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendSpaceBounds BrainedAnimBlendSpaceBoundStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement GrappleAttackSyncReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement NonVRGrappleAttackSyncReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement NonVRGrappleCrawlAttackSyncReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement GrappleAttackLeftArmSyncReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement GrappleAttackRightArmSyncReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform GrappleAttackLeftArmPushBackDirectionReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform GrappleAttackRightArmPushBackDirectionReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendSpaceBounds GrappleAttackArmAnimBlendSpaceBoundStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendSpaceBounds GrappleAttackArmBiteAnimBlendSpaceBoundStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement GrappleAttackPushBackDirectionReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitGrappleSyncHMD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector GrappleSyncHMDOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDYawTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrappleSyncHMDYawStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepCurrentStaminaMax, meta=(AllowPrivateAccess=true))
    float RepCurrentStaminaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepCurrentStamina, meta=(AllowPrivateAccess=true))
    float RepCurrentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalCurrentStaminaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalCurrentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExtendedStaminaDecayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StaminaTickRemainder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ConsumingStaminaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoveringStaminaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdlingStaminaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bRepWinded, meta=(AllowPrivateAccess=true))
    bool bRepWinded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bConsumingStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecoveringStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableStaminaCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CurrentStaminaLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepBreakingObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepHelpingBreakObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASDIStimAndResponseActor* RepObstacleToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsObstacleBroken;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, float> MeshComponentHitHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedDamageTakenDataValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedDamageTakenDataHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedDamageTakenDataHeadshotPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterHitRegion, FTWDDismemberedLimb> DismemberedLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterDelayedDismember> DelayedDismembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateSkinForDismemberedLimbsTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnQueuedDamageFXTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDCharacterQueuedDamageFX> QueuedDamageFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* SkinPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WindedGrappleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, FTWDHitReactSFX> HitReactSFXList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSupportsDeathPooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bControlsMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAltControlMapping;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_MeleeAttack>, FSDIAnimNotifyStateData> MeleeAttackNotifies;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_MeleeAttackDamageWindow>, FSDIAnimNotifyStateData> MeleeAttackDamageWindowNotifies;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UTWDAnimNotifyState_GunAction>, FSDIAnimNotifyStateData> GunActionNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAngleOfStrikeWeakpointEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAngleOfStrikeWeakpointIsDiseased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQFloat AngleOfStrikeWeakpointAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption AngleOfStrikeWeakpointAngleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleOfStrikeWeakpointAngleNormalCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AngleOfStrikeWeakpointSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AngleOfStrikeWeakpointWoundBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQVector AngleOfStrikeWeakpointWoundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeWeakpointWoundDistanceForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AngleOfStrikeWeakpointWoundSplashRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfStrikeWeakpointWoundOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQFloat AngleOfStrikeWeakpointWoundOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AngleOfStrikeWeakpointWoundMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngleOfStrikeWeakpointWoundMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngleOfStrikeWeakpointShapeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform AngleOfStrikeWeakpointRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AngleOfStrikeWeakpointWoundMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSkinArmorInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterSkinSection, FTWDSkinSkeletalMeshSetArmor> SkinArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDCharacterType CharacterType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlacedObjectId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HeadHitBoxBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BodyHitBoxBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadHitboxDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadHitboxNonPenetrationDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHitboxDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimbHitBoxDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ETWDCharacterHitRegion> AnimColliderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSicknessPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAccuracyMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OnMaxStaminaModified OnCharacterMaxStaminaModifiedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OnCharacterRevival OnCharacterRevivalDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OnCharacterDeath OnCharacterDeathDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterHealthUpdated CharacterHealthUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_WeaponFired OnCharacterWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_FeedingTokenDelegate FeedingTokenStolen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OuterRingTokenDelegate OuterRingTokenStolen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_GrappleTokenDelegate GrappleTokenStolen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_FeedingTokenDelegate FeedingTokenLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_GrappleTokenDelegate GrappleTokenLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OuterRingTokenDelegate OuterRingTokenLost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableRegen;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamNumber;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugHitData;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDCharacter> EnqueuedAssistAcknowledgeTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ETWDCharacterCoverState CoverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepCurrentHealth, meta=(AllowPrivateAccess=true))
    float RepCurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFallen;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> SpawnedFrom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OnWindedChanged OnWindedChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueStartedEvent DialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueFinishedEvent DialogueFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBehaviorEventCalled BehaviorEventCalled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDCharacterPersonality* Personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDDialogueWidgetSnapTarget* DialogueWidgetSnapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDInitialContext InitialContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDCharacterSkin> OverrideSkin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath PlatformOverrideSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDCharacterSkin> NonVROverrideSkin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTWDCharacterSkin> NonVRPlatformOverrideSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacterHandSlot* CharacterHandSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDCharacterArchetype* Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDRequiredInventory> RequiredInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASDIInventoryActor>> RewardInventoryClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle WoundedDeathTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UTWDTextToSpeechAkComponent* TextToSpeechComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDialogueLine PlayingDialogueLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> CharactersInDialogueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDDialogueOption> ResponseOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* DialogueResponseCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPSVRSelectDialogueOption1Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPSVRSelectDialogueOption2Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPSVRSelectDialogueOption3Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPSVRSelectDialogueOption4Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTWDDialogue>> PlayedDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDPlayerHand*> HandsInPersonalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDRequiredInventory> InventoryToReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASDIInventoryActor>> InventoryToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInventoryActor* InventoryBeingGiven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDBarkHistory> BarkHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadBoneForAIView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeathTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CorpseCleanupCanSpawnWalker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighPriorityCorpse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDCharacter> CorpseCleanupSpawnWalkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceCorpseCleanupFromPlayer;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDCharacter_OnPostSignificance OnCharacterPostSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSignificanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartialSignificanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullSignificanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SignificanceDistFromViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SignificanceGroupForce;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 SignificanceDescFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RequestNewSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSignificanceBlinkIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSignificanceFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceMaxDistanceFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceMaxDistanceUnfreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParticipateInSleepingAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNonsignificantUntilRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReapplyNonsignificantUntilRenderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetSightPeripheralAfterPushbackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSuspicionToBreakDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundStimReachedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilInitialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReHitDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HitTimestamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CoughAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoughSicknessPctThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoughRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCoughInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCoughInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SicknessMaxHealthPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomMinVignetteLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainHMDToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainHMDZ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TEMP_ShowDialogSelectionWidgetOverride_DoShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDWoundInterfaceData TWDWoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SplashColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SplashNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MeatColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MeatNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CapColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CapNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundSeverityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DraggedRagdollBodyMassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLastDraggedRagdollState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnDeathBeingDraggedRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstanceCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActualHeadForStableHead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugRecentBarkThreshold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterBehavior CurrentBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldAlwaysRunFromExplosives: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugSplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDebugSplayInfo;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint32> SplayBoneIndices;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint32> SplitBoneIndices;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<int32, uint32> BoneIndexSplaySideMap;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> SpawnedActorsForCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncMovement;
    
    ATWDCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterGrappleLocation WhichSideAmIAproachingFrom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponEndStab(ATWDCharacter* Attacker, ATWDWeaponActor* Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool WasVisualHintRecentlyRendered() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTrespassing(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateStandToCrawlTransition();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSkinForDismemberedLimbs();
    
    UFUNCTION(BlueprintCallable)
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
    UFUNCTION(BlueprintCallable)
    void UpdateCoughing(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdateAttackMoveTargetOffset(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void UnlockGrappleHandGrips();
    
    UFUNCTION(BlueprintCallable)
    void TEST_Splay(FName SplayBoneName, FVector ModelSplayLocationRelBone, FVector ModelSplayDirection, FVector ModelSplayNormal, FName DebugSplayShowMeshBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDismember(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintCallable)
    void StartAnimMove(FVector EndLoc, float moveDuration);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSeverBouquetElement(FSpawnableBouquetElement& E);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSeverBouquet(FVector SeverLocation, FVector SeverForward, FVector SeverUp, FName BoneName, ETWDCharacterHitRegion Region, bool bSpawnDeferred);
    
    UFUNCTION(BlueprintCallable)
    void SpawnQueuedDamageFXTimer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnQueuedDamageFX(bool bSpawnNewestFirst, bool bSpawnAll);
    
    UFUNCTION(BlueprintCallable)
    float SignificanceFunction(UObject* QueryObj, const FTransform& ViewerTransform);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldRunFromExplosives();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldCapSignificance();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceId(const FString& NewVoiceId);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusIconState(EStatusIconState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetStandGroundVolumes(TArray<AVolume*> Volumes);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariants(const TMap<ETWDCharacterSkinSection, FName>& Variants);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariant(ETWDCharacterSkinSection Section, FName Variant);
    
    UFUNCTION(BlueprintCallable)
    void SetSignificanceFreeze(bool bFrozen);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardInventoryClasses(TArray<TSubclassOf<ASDIInventoryActor>> NewRewardInventoryClasses);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredInventory(TArray<FTWDRequiredInventory> NewRequiredInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPooledDeathState(bool bDeathState);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonality(TSubclassOf<UTWDCharacterPersonality> NewPersonality);
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolPath(ATWDWaypointPath* Path);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    void SetAdvancedDismemberDebugInfoScopeEnabled(bool bTrue);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateGripPhysicsRotation(ATWDGripPhysicsActor* GripActor, FRotator NewRotator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateGripEnableDynamicObstacle(ATWDGripPhysicsDoor* GripActor, bool enable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseGrappleTarget(ATWDCharacter* GrappleTarget, FVector PushBackDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseGrappleAttacker(ATWDCharacter* GrappleAttacker, FVector PushBackDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseGrapple(bool bTargets, bool bAttackers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGrappleGrabWithHand(ATWDCharacter* Other, const FSDITransform_NetQuantize& GrappleRelTransform, EControllerHand GrappleHandEnum, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAlterStaminaMax(float Amount, bool bResetTimers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    void PostSignificanceFunction_EX(const float oldSignificance, const float newSignificance, bool forceAssignment);
    
    UFUNCTION(BlueprintCallable)
    void PostSignificanceFunction(const float oldSignificance, const float newSignificance);
    
    UFUNCTION(BlueprintCallable)
    int32 PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void OnWoundedDeathTimerFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWasStartled(ATWDCharacter* StartledBy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWasAssisted(ATWDCharacter* AssistedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStealthModeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStealthModeActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStaminaActionFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStaminaActionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStabStateChange(bool bStabbed, ATWDCharacter* Stabber);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpeechAudioEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepGrappleTargets(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleTargets);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepGrappleState(ETWDCharacterGrappleState OldRepGrappleState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepGrapplePushBackDirection(const FVector& OldRepGrapplePushBackDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepGrappleAttackHoldTime(float OldRepGrappleAttackHoldTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepGrappleAttackers(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleAttackers);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepCurrentStaminaMax(float OldRepCurrentStaminaMax);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepCurrentStamina(float OldRepCurrentStamina);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepCurrentHealth(float OldRepCurrentHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bRepWinded(bool OldbRepWinded);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReceivedInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPersonalSpace(AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKilledCharacter(ATWDCharacter* Killed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReactNative(FVector Direction, ETWDCharacterHitRegion Region, EHitReactType Type, bool bForceInterrupt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReaction(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* HitReactionInstigator, TSubclassOf<UDamageType> DamageTypeClass, float WithSpeed, float WithMass, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitByPhysicsActor(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* HitReactionInstigator, float WithSpeed, float WithMass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitAnimationRegion(ETWDCharacterHitRegion Region, FVector_NetQuantizeNormal ShotDirection);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(ETWDCharacterHitRegion Region, const FSDIReplicatedDamageData& DamageTakenData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthUpdated(float PrevHealth, float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnHandNearPocketInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnHandNearPocket();
    
    UFUNCTION(BlueprintCallable)
    void OnHandExitedPersonalRange(ATWDPlayerCharacter* HandOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnHandEnteredPersonalRange(ATWDPlayerCharacter* HandOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleReleasedTarget(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleReleasedByAttacker(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrapplePushBack(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleGrabbedTarget(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleGrabbedByAttacker(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGivenInventoryGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGivenInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDismemberedLimb(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogWidgetIsEnabledCallback(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueSelected(const FTWDDialogueOption& DialogueOption);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterRevival(float NewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDeath(float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBulletNearMiss(FVector Location, FVector FlyingDirection, AController* ShootingInstigator, bool IsOtherCharacterDamaged, bool IsLikelyFiredAt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBarkFinished(const FDialogueLine& DialogueLine, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NonVRWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NonVROnGrapplePushBackOthers();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintPure=false)
    void MulticastPlaySlotAnimation(UAnimSequenceBase* AnimSequence, FName SlotName, float PlayRate, int32 LoopCount, float InStartTime, bool ExecuteOnDedicatedServer) const;
    
    UFUNCTION(BlueprintCallable)
    void MovementAddControlRotation(FRotator ActorRotDelta, FRotator CtrlRotDelta, bool bApplyYaw, bool bApplyPitch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ModifyHealingTaken(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ModifyDamageTaken(float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintCallable)
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LimbRestored(ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LimbDismembered(ETWDCharacterHitRegion Region, int32 CutBoneIdx, const TArray<int32>& KeepBoneIndices, FVector WoundCenter, FVector WoundForward, FVector WoundUp, bool bDroppedLimb, ATWDDismemberLimbCap* LimbCap, ATWDDismemberDroppedLimb* DroppedLimb, FVector ImpulseDirection, bool bFromCopy, FVector RagdollBodyImpulse, FVector RagdollBodyImpulseLocation, FName RagdollBodyImpulseBone, float SplayDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool KillCharacterBy(ATWDCharacter* Killer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool KillCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsGrapplingTarget(ATWDCharacter* Target, ETWDCharacterGrappleLocation& OutGrappleLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsGrapplingAt(ETWDCharacterGrappleLocation GrappleLocation, TArray<ATWDCharacter*>& OutTargets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsBeingGrappledBy(ATWDCharacter* Attacker, ETWDCharacterGrappleLocation& OutGrappleLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsBeingGrappledAt(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2AttemptDismember(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWinded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarnTrespassing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrespassingIconDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrespassing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStealthModeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSignificant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeveredTorsoCrawler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollActiveOrQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMeleeAttackAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingGunActionAnim(ETWDGunAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDialogue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBark() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsParticipateInSleepingAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObstacleBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNonsignificantUntilRender() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNeverSignificant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbDismemberPending(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbDismembered(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStabState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideMeleeAttackAnimDamageWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGrappleBleedOutState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBrainedState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingAWeapon(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadPerturbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrapplingSomeone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappleLocationOnCooldown(ETWDCharacterGrappleLocation GrappleLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappleAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutingAttackMove(FVector& OutMoveLocation, AActor*& OutMoveTarget, FName& OutMoveTargetSocket, bool& bOutFaceTargetYaw, bool& bOutFaceTargetPitch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDraggingSomeone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsDraggedRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDismemberAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterWithinDialogueRange(ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreakingObstacle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingGrappled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingDragged(ASDIPlayerHand*& OutDragHand, ASDIPlayerHand*& OutOtherDragHand) const;
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSkinArmor(ETWDCharacterHitRegion HitRegion, int32& OutAmount, float& OutTimeSinceDestroyed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRewardInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOuterRingTokenForTarget(ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOuterRingToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFeedingTokenForTarget(ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFeedingToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAngleOfStrikeWeakpoint(bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GrappleSyncToAttacker() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrappleGrab(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveInventory(TArray<TSubclassOf<ASDIInventoryActor>> InRewardInventoryClasses, const FInventoryGiven& InInventoryGiven, const FInventoryExchanged& InInventoryExchanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindedRecoveryPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWindedGrappleCount() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDWaypointPatrolComponent* GetWaypointPatrolComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetTargetBoxForAIRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDSuspiciousStates GetSuspicionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthModeRemainingPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthModeAppliedPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetStabOtherHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetStableHeadLocationProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSkinSectionVariant(ETWDCharacterSkinSection Section) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkinSectionInfo(ETWDCharacterSkinSection Section, int32& OutIndex, FName& OutVariant, TMap<FName, float>& OutScalarParams, TMap<FName, FLinearColor>& OutColorParams, TMap<FName, TSoftObjectPtr<UTexture>>& OutTextureParams, FSDISkinSkeletalMeshSet& OutSkinMeshSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetRightHipInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<ASDIInventoryActor>> GetRewardInventoryClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDRequiredInventory> GetRequiredInventory() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UTWDDialogue> GetReadyDialogue(FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDCharacterPersonality* GetPersonality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerceptionVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerceptionNoiseLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPeakStaminaPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOuterRingSlotLocation(int32 Index, ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOuterRingRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOuterRingLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOuterRingIndexBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable)
    ASDIStimAndResponseActor* GetObstacleToBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOuterRingTokens(const ATWDCharacter* OuterRingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGrappleTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGrappleAttackers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFeedingTokens(const ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetNotebookInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDNotebook* GetNotebook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoiseLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStaminaFloor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxNoiseLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetLeftHipInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTrespassingTime() const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetInventorySlotByIdx(uint8 slotIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDHMDCameraActor* GetHMDCameraActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterHitRegion GetHitRegion(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHitReactSFX(TSubclassOf<UDamageType> DamageType, FTWDHitReactSFX& HitReactSFX);
    
    UFUNCTION(BlueprintCallable)
    ETWDCharacterGrappleLocation GetHeldTokenLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadLookAtLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGrappleUIInfo(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker, float& GrappleStrengthPct, float& GrappleStrugglePct) const;
    
    UFUNCTION(BlueprintCallable)
    UGrappleTokenSystem* GetGrappleTokenSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetGrappleTokenHolder(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterGrappleLocation GetGrappleTargetLocation(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetGrappleTarget(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterGrappleState GetGrappleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGrappleSlotLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetGrappleSlotLocation(ETWDCharacterGrappleLocation Location, const ATWDCharacter* TargetCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrapplePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetGrappleOrientationRightVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetGrappleHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetGrappleAttackTargetTransform(ATWDCharacter* GrappleAttacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterGrappleLocation GetGrappleAttackerLocation(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetGrappleAttacker(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UObject* GetFootstepSound(UPhysicalMaterial* PhysMat, UObject* CurrentSound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetFlashlightInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDFlashlight* GetFlashlight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeedingSlotLocation(int32 Index, ATWDCharacter* FeedingTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFeedingRingRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeedingLocationBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeedingIndexBasedOnHeldToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetFaction() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDCharacter* GetEnqueuedAssistAcknowledgeTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterHitRegion GetDismemberRegion(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueRange() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UTWDDialogue> GetDialogue(FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UTWDCharacterArchetype> GetDesiredArchetypeBlueprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsAsset* GetDefaultPhysicsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStaminaPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStaminaMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSicknessMaxHealthPenalty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPeakMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPeakMaxHealthValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxStaminaPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxHealthValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ETWDCharacterGrappleLocation> GetCurrentGrappleTokenLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ATWDCharacter> GetCorpseCleanupSpawnWalkerClass(EFaction CorpseFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterType GetCharacterType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterBehaviorFlag(ECharacterBehaviorFlags Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterBehavior GetCharacterBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBeingSeenPerceptionModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseMaxHealthValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetBackpackInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    ATWDBackpack* GetBackpack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetBackInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDCharacterArchetype* GetArchetype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITransformCollisionShape GetAngleOfStrikeWeakpointShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAngleOfStrikeWeakpoint(FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintCallable)
    ATWDAmmoPouch* GetAmmoPouch();
    
    UFUNCTION(BlueprintCallable)
    bool GetAdvancedDismemberDebugInfoScopeEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    void EnableVisualHint(bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableHealthRegen(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableHandSlot(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAngleOfStrikeWeakpoint(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DumpSurvivorConfig();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CorpseCleanupCopyAppearance(const ATWDCharacter* FromOldCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGrappleGrabWithHandFail(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlterStaminaMax(float Amount, bool bResetTimers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlterStamina(float Amount, bool bAllowExtended, bool bResetTimers);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckForSignificanceChange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStealGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Stealer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReviveFromHeal(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser);
    
    UFUNCTION(BlueprintCallable)
    bool CanReapplyNonsignificantUntilRender(const FTransform& ViewerTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGrappleTarget(const ATWDCharacter* Target, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGetOuterRingTokenOnTarget(const ATWDCharacter* OuterRingTarget, TArray<int32>& OutValidOuterRingIndexes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGetFeedingTokenOnTarget(const ATWDCharacter* FeedingTarget, TArray<int32>& OutValidFeedingIndexes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDismemberLimb(ETWDCharacterHitRegion Region) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDieFromDamage(float PreDeathHealth, float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration);
    
    UFUNCTION(BlueprintCallable)
    void CancelGrappleAttack();
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCallBehaviorEvent(FName EventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeGrappledByHand(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeGrappledBy(const ATWDCharacter* Attacker, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const;
    
    UFUNCTION(BlueprintCallable)
    void CallBehaviorEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void BreaksStealthForViewers();
    
    UFUNCTION(BlueprintCallable)
    bool BeginGrappleAttack(float Speed, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void BeginBreakingObstacle(ASDIStimAndResponseActor* Obstacle, bool bIsAssisting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AmIOnTheCorrectGrappleSide() const;
    
    UFUNCTION(BlueprintCallable)
    void AlterStaminaMax(float Amount, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void AlterStamina(float Amount, bool bAllowExtended, bool bResetTimers, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    float AlterSickness(float Delta, ESicknessSourceType SourceType);
    
    UFUNCTION(BlueprintCallable)
    void AlterBaseHealthMax(float Amount, bool bRetainCurrentHealthPct, bool bWithHealthUpdatedCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo) const;
    
    UFUNCTION(BlueprintCallable)
    bool AllowStaminaRecovery(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowNonVRWeaponShove(ASDIHeldActor* Weapon, const FVector& ShoveDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void ActiveRagdollComponentDeactivated(AActor* Actor, USDIActiveRagdollComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
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

