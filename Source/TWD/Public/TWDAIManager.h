#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "UObject/Object.h"
#include "EGlobalPerceptionSortOrder.h"
#include "EGlobalPerceptionSortSubject.h"
#include "ETWDCharacterGrappleLocation.h"
#include "TWDGlobalPerceptionNode.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "ActorStimData.h"
#include "TWDAIManager.generated.h"

class ATWDCharacter;
class UDamageType;
class UTWDAIHumanTargetTracker;
class ATWDWalkerAICharacter;
class AActor;
class ATWDAICharacter;

UCLASS(Blueprintable)
class TWD_API UTWDAIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<ATWDCharacter*, UTWDAIHumanTargetTracker*> WalkerToHumanTrackers;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AINavMeshWalkingList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AISurvivorsList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AIWalkersList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AICharactersNeedTick;
    
    UPROPERTY(Transient)
    int32 AICharacterMovement_CurrentIndex;
    
    UPROPERTY(Transient)
    int32 AICharacterMovementProjectNavMesh_CurrentIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerGrappleLockDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRPlayerWalkerDistScoreOnlyRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRPlayerWalkerAngleCutoff;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRPlayerWalkerFacingWeight;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRPlayerWalkerNormalDistWeight;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRPlayerWalkerCloseDistWeight;
    
    UPROPERTY(EditAnywhere)
    int32 InitialRingCount;
    
    UPROPERTY(EditAnywhere)
    float SpaceBetweenRings;
    
    UPROPERTY(EditAnywhere)
    float SpaceBetweenSlots;
    
    UPROPERTY(EditAnywhere)
    float SlotAngleShift;
    
    UPROPERTY(EditAnywhere)
    float SlotRadius;
    
    UPROPERTY(EditAnywhere)
    float AttackAngleThickness;
    
    UPROPERTY(EditAnywhere)
    float RingEvalTime;
    
    UPROPERTY(EditAnywhere)
    float RingEvalDistance;
    
    UPROPERTY(EditAnywhere)
    float AIRingHeightExtent;
    
    UPROPERTY(EditAnywhere)
    int32 AIOptimizationCycleNum;
    
    UPROPERTY(EditAnywhere)
    float MinGroundTimePenetration;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDraw;
    
    UPROPERTY(Transient)
    TArray<FString> TextBuffer;
    
    UPROPERTY(Transient)
    TMap<ATWDCharacter*, FTWDGlobalPerceptionNode> GlobalPerceptionDesc;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDisplayGlobalPerception;
    
    UPROPERTY(EditAnywhere)
    int32 MaxDisplayGlobalPerception;
    
    UPROPERTY(EditAnywhere)
    EGlobalPerceptionSortSubject GPSortSubject;
    
    UPROPERTY(EditAnywhere)
    EGlobalPerceptionSortOrder GPSortOrder;
    
    UPROPERTY(EditAnywhere)
    ETWDCharacterGrappleLocation VsNPCGrappleStartLocation;
    
    UPROPERTY(EditAnywhere)
    ETWDCharacterGrappleLocation VsNPCGrappleEndLocation;
    
    UPROPERTY(Transient)
    float Menace;
    
    UPROPERTY(Transient)
    bool bPauseMenace;
    
    UPROPERTY(EditAnywhere)
    FRFloat MenaceDistance;
    
    UPROPERTY(EditAnywhere)
    float MenaceLOSModifier;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve MenaceDistanceAccCurve;
    
    UPROPERTY(EditAnywhere)
    FName MenaceKeySelectorName;
    
    UPROPERTY(EditAnywhere)
    FName MenaceRateKeySelectorName;
    
    UPROPERTY(EditAnywhere)
    FRFloat MenanceRandomDeviation;
    
    UPROPERTY(Transient)
    FRFloat MenaceClamp;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> MenaceList;
    
public:
    UPROPERTY(EditAnywhere)
    bool bWaveModeBehavior;
    
    UTWDAIManager();
    UFUNCTION(BlueprintCallable)
    void ToggleGPSortOrder();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetMenaceClamp(float Min, float Max);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMaxGPDisplay(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetGPSortSubject(EGlobalPerceptionSortSubject SortSubject);
    
    UFUNCTION(BlueprintCallable)
    void SetGPSortOrder(EGlobalPerceptionSortOrder SortOrder);
    
private:
    UFUNCTION(BlueprintCallable)
    void PauseMenace(bool bPause);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OnWalkerLostGenericTarget(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    bool OnWalkerFoundGenericTarget(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target);
    
private:
    UFUNCTION()
    void OnAIDestroyed(AActor* CharacterActor);
    
    UFUNCTION()
    void OnAIDeath(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseMenace();
    
    UFUNCTION(BlueprintCallable)
    bool GetMenaceLocation(const ATWDAICharacter* Character, FVector& MenaceLocation);
    
    UFUNCTION(BlueprintCallable)
    float GetMenace();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetGrappleScore(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target, ETWDCharacterGrappleLocation GrappleLocation, bool bCheckLocationIsOnNavMesh, float FarthestDistance);
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayGlobalPerception() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDisplayDebugGlobalPerception(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool DoesTargetHaveAttackers(ATWDCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void AddPerceptionDesc(AActor* AIActor, AActor* StimActor, bool bIsSound, FActorStimData Data);
    
};

