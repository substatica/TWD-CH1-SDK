#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RFloat.h"
#include "ETWDCharacterGrappleLocation.h"
#include "UObject/Object.h"
#include "EGlobalPerceptionSortOrder.h"
#include "TWDGlobalPerceptionNode.h"
#include "EGlobalPerceptionSortSubject.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "ActorStimData.h"
#include "TWDAIManager.generated.h"

class ATWDCharacter;
class UTWDAIHumanTargetTracker;
class ATWDAICharacter;
class ATWDWalkerAICharacter;
class AActor;
class UDamageType;

UCLASS(Blueprintable)
class TWD_API UTWDAIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ATWDCharacter*, UTWDAIHumanTargetTracker*> WalkerToHumanTrackers;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AINavMeshWalkingList;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AISurvivorsList;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AIWalkersList;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> AICharactersNeedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AICharacterMovement_CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AICharacterMovementProjectNavMesh_CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGrappleLockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlayerWalkerDistScoreOnlyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlayerWalkerAngleCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlayerWalkerFacingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlayerWalkerNormalDistWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlayerWalkerCloseDistWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialRingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenRings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotAngleShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackAngleThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingEvalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingEvalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIRingHeightExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIOptimizationCycleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGroundTimePenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> TextBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ATWDCharacter*, FTWDGlobalPerceptionNode> GlobalPerceptionDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisplayGlobalPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayGlobalPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalPerceptionSortSubject GPSortSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalPerceptionSortOrder GPSortOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDCharacterGrappleLocation VsNPCGrappleStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDCharacterGrappleLocation VsNPCGrappleEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Menace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPauseMenace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat MenaceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenaceLOSModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MenaceDistanceAccCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MenaceKeySelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MenaceRateKeySelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat MenanceRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRFloat MenaceClamp;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> MenaceList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnAIDestroyed(AActor* CharacterActor);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayGlobalPerception() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDisplayDebugGlobalPerception(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool DoesTargetHaveAttackers(ATWDCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void AddPerceptionDesc(AActor* AIActor, AActor* StimActor, bool bIsSound, FActorStimData Data);
    
};

