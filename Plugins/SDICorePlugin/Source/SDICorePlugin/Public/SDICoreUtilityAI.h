#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDICoreUtilityAIAimSettings.h"
#include "UObject/Object.h"
#include "SDICoreUtilityAIMovementTarget.h"
#include "ESDIUtilityAIDifficulty.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAITargetList.h"
#include "SDICoreUtilityAIAction.h"
#include "SpringFloat.h"
#include "Navigation/PathFollowingComponent.h"
#include "SDITimestampInputButton.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "SDICoreUtilityAI.generated.h"

class UNavigationQueryFilter;
class USDICoreUtilityAIState;
class AHUD;
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
    UPROPERTY(EditAnywhere)
    TMap<ESDIUtilityAIDifficulty, FSDICoreUtilityAIAimSettings> AimSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationQueryClass;
    
    UPROPERTY(EditAnywhere)
    bool bCanAttack;
    
    UPROPERTY(EditAnywhere)
    bool bCanWander;
    
    UPROPERTY(EditAnywhere)
    float StuckVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICoreUtilityAITargetList TargetList;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USDICoreUtilityAIState>> StateClasses;
    
    UPROPERTY(Transient)
    FSpringFloat YawAimSpring;
    
    UPROPERTY(Transient)
    FSpringFloat PitchAimSpring;
    
    UPROPERTY(Transient)
    FVector DebugAimPoint;
    
    UPROPERTY(Transient)
    FVector MovementAcceleration;
    
    UPROPERTY(Transient)
    FVector MovementInputVector;
    
    UPROPERTY(Transient)
    TArray<FSDICoreUtilityAIAction> ActionQueue;
    
    UPROPERTY(Transient)
    TMap<FName, FSDITimestampInputButton> ActionButtons;
    
    UPROPERTY(Export, Transient)
    UPathFollowingComponent* PathFollowingComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDIUtilityAIDifficulty DesiredDifficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDIUtilityAIDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bRequestingRepath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAIMovementTarget MovementTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasFalling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StuckTimer;
    
    UPROPERTY(Transient)
    FVector StuckLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<USDICoreUtilityAIState*> AllStates;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USDICoreUtilityAIState* ActiveState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCurrentlyInsideTick;
    
public:
    USDICoreUtilityAI();
    UFUNCTION(BlueprintNativeEvent)
    void TickUtilityAI(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopMovement(bool bClearMovementTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetSprinting(bool bSprinting);
    
    UFUNCTION(BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintPure)
    bool ProjectPointToNavigation(FVector InLoc, FVector& OutLoc) const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToTarget(const FSDICoreUtilityAIMovementTarget& Target, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
    
    UFUNCTION(BlueprintPure)
    bool IsValidTarget(AActor* Target) const;
    
    UFUNCTION(BlueprintPure)
    bool IsStuck(float MinStuckTime) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting(bool bCheckVelocity) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAI() const;
    
    UFUNCTION(BlueprintPure)
    bool InsideTick() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void InitUtilityAI(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintPure)
    bool HasReachedMovementLocation(FVector Dest, float AcceptanceRadius, bool bProjectDestinationToNavigation) const;
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWanderDestinationFromLocation(const FVector& Location, float TestDistance, AActor* RefActor);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWanderDestinationFromActor(AActor* Act, float TestDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetWanderDestination(float TestDistance) const;
    
    UFUNCTION(BlueprintPure)
    float GetWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    float GetSprintSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPathDistanceTo(const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPathDistance(const FVector& Start, const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTargetsByTeamId(const FSDICoreUtilityAITargetList& InTargetList, const FGenericTeamId& TeamID, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTargetsByAttitudeTowards(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTargetsByAttitudeFrom(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMovementInputVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeedWithoutSprinting() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    ESDIUtilityAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrouchSpeed() const;
    
    UFUNCTION(BlueprintPure)
    ASDICoreCharacter* GetCoreChar() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetChar() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffsetRot() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimOffsetDeg() const;
    
    UFUNCTION(BlueprintPure)
    USDICoreUtilityAIState* GetActiveState() const;
    
    UFUNCTION(BlueprintPure)
    FVector FindRandomLocationAroundPoint(const FVector& Loc, float Radius) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector2D DrawHUD(AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize);
    
    UFUNCTION(BlueprintNativeEvent)
    void DestroyUtilityAI();
    
    UFUNCTION(BlueprintPure)
    static FVector DeltaBetweenCharacterCapsules(ACharacter* A, ACharacter* B);
    
    UFUNCTION(BlueprintPure)
    bool CanSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEverSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEverCrouch() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowWander() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void AimTowardsPoint(const FVector& Point);
    
    UFUNCTION(BlueprintCallable)
    void AimTowardsDir(const FVector& Dir);
    
    
    // Fix for true pure virtual functions not being implemented
};

