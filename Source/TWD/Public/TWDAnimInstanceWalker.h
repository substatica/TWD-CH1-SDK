#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "TWDAnimInstanceCharacter.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterGrappleLocation.h"
#include "TWDAnimInstanceWalker.generated.h"

class ATWDWalkerAICharacter;
class UAnimSequenceBase;
class UTWDCharacterMovementComponent;
class ATWDAIController;

UCLASS(NonTransient)
class TWD_API UTWDAnimInstanceWalker : public UTWDAnimInstanceCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NearTargetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LungeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleAttackMinDistanceHandToClavicle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrappleAttackMaxDistanceHandToClavicle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve GrappleLungeHandIkAlphaCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve GrappleArmDistanceCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve FidgetProbabilityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequenceBase*> FidgetAnimations;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ATWDWalkerAICharacter* TWDWalker;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UTWDCharacterMovementComponent* TWDWalkerMovementComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float SpeedHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWasBreakingObsticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPlayingStumbleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMovingAndAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float locomotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float locomotionAggroPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTurnInPlaceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopTurnInPlaceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWasAggroLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFrustrated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsBreakingObstacle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsObstacleBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHeadTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEyeTrackingOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CurrentLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATWDAIController* AICTWDWalker;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bNearTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAboutToLunge;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsLunging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsFailedLunge;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleLungeHandIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleArmDistanceAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleAttackClavicleRotationAlphaLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrappleAttackClavicleRotationAlphaRight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDCharacterGrappleLocation GrappleArm;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsPlayerDead;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequenceBase* CurrentFidgetAnimation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AdditiveFidgetAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInAnyCombatRing;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bSurpriseDoorBreaking;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsGrapplePushBackTrigger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsGrapplePushBack;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float TimeSinceLastFidget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFidgeting;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float GrappleMontageBodyAlpha;
    
    UPROPERTY(Transient)
    float TimeInGrappleAttackState;
    
public:
    UTWDAnimInstanceWalker();
protected:
    UFUNCTION(BlueprintCallable)
    void TWDAnimBP_CompleteIdleFidget();
    
    UFUNCTION(BlueprintCallable)
    void TWDAnimBP_CalculateDirection();
    
    UFUNCTION(BlueprintCallable)
    void TurnInPlace_SetFlags();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterValues();
    
public:
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetRandomAnimation(const TArray<UAnimSequenceBase*>& inArray) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CombatAndLookAtValues_SetAggroValues();
    
    UFUNCTION(BlueprintCallable)
    bool CombatAndLookAtValues_HeadTracking();
    
    UFUNCTION(BlueprintCallable)
    float AverageFloatArrayNativized(TArray<float> inArray);
    
    UFUNCTION(BlueprintCallable)
    void AnimGraphValues_Locomotion();
    
};

