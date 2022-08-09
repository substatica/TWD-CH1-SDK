#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIDamageData.h"
#include "TWDAICharacter.h"
#include "TWDBehaviorTreeVars.h"
#include "UObject/NoExportTypes.h"
#include "TWDWalkerAICharacter.generated.h"

class AActor;
class UTWDCharacterSkin;

UCLASS()
class TWD_API ATWDWalkerAICharacter : public ATWDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float DistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsLungeAttack;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFailedLungeAttack;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* CurrentTarget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTWDCharacterSkin> FemaleSkin;
    
    UPROPERTY(EditDefaultsOnly)
    float FemaleChance;
    
    UPROPERTY(Transient)
    bool bSurpriseDoorBreaking;
    
    UPROPERTY(Transient)
    float SurpriseDoorBreakingTimeStamp;
    
    UPROPERTY(EditAnywhere)
    float SurpriseDoorBreakingTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsAbleToBreakAllDoors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTutorialFightCircleIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEliteWalker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIDamageData SwipePlayerOnTopOfCar;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasHelmet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasSpawnedFromHuman;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bShadowMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowMovementEnableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowMovementDisableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerOnCarDamageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerOnCarDamageTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerOnCarDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerOnCarStaminaDamage;
    
    UPROPERTY(Transient)
    float PlayerOnCarDamageDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 BP_PlayingGrappleLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 isDumb: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 hasAgro: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTWDBehaviorTreeVars BTVariablesVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTWDBehaviorTreeVars BTVariables;
    
    UPROPERTY(Transient)
    float NonVRNonGrappleSpeedMultipier;
    
    ATWDWalkerAICharacter();
    UFUNCTION(BlueprintCallable)
    void SetSurpriseDoorBreaking(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Native_CheckPlayerOnTopOfCarDamage();
    
    UFUNCTION(BlueprintCallable)
    bool GetSurpriseDoorBreaking();
    
    UFUNCTION(BlueprintCallable)
    float GetShadowMovementModifier();
    
    UFUNCTION(BlueprintPure)
    float GetNonGrappleSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasAgro() const;
    
    UFUNCTION(BlueprintPure)
    FTWDBehaviorTreeVars GetCurrentBTVars() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAssignedCombatRingLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentTarget();
    
};

