#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDICoreUtilityAIAction.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ESDIUtilityAIDifficulty.h"
#include "GenericTeamAgentInterface.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAITargetList.h"
#include "SDICoreUtilityAIAimSettings.h"
#include "SpringFloat.h"
#include "SDITimestampInputButton.h"
#include "SDICoreUtilityAIMovementTarget.h"
#include "Navigation/PathFollowingComponent.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "SDICoreUtilityAI.generated.h"

class AHUD;
class USDICoreUtilityAIState;
class UNavigationQueryFilter;
class UPathFollowingComponent;
class APawn;
class AActor;
class ASDICoreCharacter;
class AController;
class ACharacter;
class UCanvas;

UCLASS(Blueprintable, NotPlaceable)
class SDICOREPLUGIN_API USDICoreUtilityAI : public UObject, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_FourParams(FSDICoreUtilityAITargetPriorityDynamic, const FSDICoreUtilityAITargetEntry&, Entry, const FSDICoreUtilityAITargetList&, List, int32, Index, float&, Priority);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESDIUtilityAIDifficulty, FSDICoreUtilityAIAimSettings> AimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationQueryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanWander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAITargetList TargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USDICoreUtilityAIState>> StateClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpringFloat YawAimSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpringFloat PitchAimSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DebugAimPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICoreUtilityAIAction> ActionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDITimestampInputButton> ActionButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDIUtilityAIDifficulty DesiredDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDIUtilityAIDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestingRepath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAIMovementTarget MovementTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StuckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StuckLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USDICoreUtilityAIState*> AllStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDICoreUtilityAIState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyInsideTick;
    
public:
    USDICoreUtilityAI();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickUtilityAI(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopMovement(bool bClearMovementTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetSprinting(bool bSprinting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPawn(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementTargetLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementTargetActor(AActor* inTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementAcceleration(const FVector& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    bool SetCrouching(bool bCrouching);
    
    UFUNCTION(BlueprintCallable)
    void RequestRepath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectPointToNavigation(FVector InLoc, FVector& OutLoc) const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToTarget(const FSDICoreUtilityAIMovementTarget& Target, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTarget(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStuck(float MinStuckTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting(bool bCheckVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InsideTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitUtilityAI(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedMovementLocation(FVector Dest, float AcceptanceRadius, bool bProjectDestinationToNavigation) const;
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWanderDestinationFromLocation(const FVector& Location, float TestDistance, AActor* RefActor);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWanderDestinationFromActor(AActor* Act, float TestDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetWanderDestination(float TestDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetViewPoint(FVector& Loc, FRotator& Rot) const;
    
    UFUNCTION(BlueprintPure)
    void GetTeamAttitudes(AActor* Target, TEnumAsByte<ETeamAttitude::Type>& OutAttitudeTowards, TEnumAsByte<ETeamAttitude::Type>& OutAttitudeFrom) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTargetsByTeamId(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, const FGenericTeamId& TeamID, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTargetsByDelegate(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, USDICoreUtilityAI::FSDICoreUtilityAITargetPriorityDynamic PriorityDelegate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTargetsByAttitudeTowards(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTargetsByAttitudeFrom(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTarget(const FSDICoreUtilityAITargetList& InTargetList, AActor* Actor, FSDICoreUtilityAITargetEntry& OutTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSprintSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPathDistanceTo(const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPathDistance(const FVector& Start, const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTargetsByTeamId(const FSDICoreUtilityAITargetList& InTargetList, const FGenericTeamId& TeamID, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTargetsByAttitudeTowards(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTargetsByAttitudeFrom(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeedWithoutSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIUtilityAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouchSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDICoreCharacter* GetCoreChar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetChar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffsetRot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetDeg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreUtilityAIState* GetActiveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRandomLocationAroundPoint(const FVector& Loc, float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D DrawHUD(AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyUtilityAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector DeltaBetweenCharacterCapsules(ACharacter* A, ACharacter* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowWander() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void AimTowardsPoint(const FVector& Point);
    
    UFUNCTION(BlueprintCallable)
    void AimTowardsDir(const FVector& Dir);
    
    
    // Fix for true pure virtual functions not being implemented
};

