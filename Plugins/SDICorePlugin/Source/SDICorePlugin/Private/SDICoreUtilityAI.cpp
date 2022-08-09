#include "SDICoreUtilityAI.h"
#include "Templates/SubclassOf.h"

class APawn;
class UNavigationQueryFilter;
class AActor;
class USDICoreUtilityAIState;
class ASDICoreCharacter;
class AController;
class ACharacter;
class AHUD;
class UCanvas;

void USDICoreUtilityAI::TickUtilityAI_Implementation(float DeltaSeconds) {
}

void USDICoreUtilityAI::StopMovement(bool bClearMovementTarget) {
}

bool USDICoreUtilityAI::SetSprinting(bool bSprinting) {
    return false;
}

void USDICoreUtilityAI::SetPawn_Implementation(APawn* InPawn) {
}

void USDICoreUtilityAI::SetMovementTargetLocation(const FVector& InLocation) {
}

void USDICoreUtilityAI::SetMovementTargetActor(AActor* inTarget) {
}

void USDICoreUtilityAI::SetMovementAcceleration(const FVector& Input) {
}

void USDICoreUtilityAI::SetDifficulty(ESDIUtilityAIDifficulty NewDifficulty) {
}

bool USDICoreUtilityAI::SetCrouching(bool bCrouching) {
    return false;
}

void USDICoreUtilityAI::RequestRepath() {
}

bool USDICoreUtilityAI::ProjectPointToNavigation(FVector InLoc, FVector& OutLoc) const {
    return false;
}

TEnumAsByte<EPathFollowingRequestResult::Type> USDICoreUtilityAI::MoveToTarget(const FSDICoreUtilityAIMovementTarget& Target, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

TEnumAsByte<EPathFollowingRequestResult::Type> USDICoreUtilityAI::MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure) {
    return EPathFollowingRequestResult::Failed;
}

TEnumAsByte<EPathFollowingRequestResult::Type> USDICoreUtilityAI::MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure) {
    return EPathFollowingRequestResult::Failed;
}

bool USDICoreUtilityAI::IsValidTarget(AActor* Target) const {
    return false;
}

bool USDICoreUtilityAI::IsStuck(float MinStuckTime) const {
    return false;
}

bool USDICoreUtilityAI::IsSprinting(bool bCheckVelocity) const {
    return false;
}

bool USDICoreUtilityAI::IsPlayer() const {
    return false;
}

bool USDICoreUtilityAI::IsMoving() const {
    return false;
}

bool USDICoreUtilityAI::IsCrouching() const {
    return false;
}

bool USDICoreUtilityAI::IsAI() const {
    return false;
}

bool USDICoreUtilityAI::InsideTick() const {
    return false;
}

void USDICoreUtilityAI::InitUtilityAI_Implementation(ESDIUtilityAIDifficulty NewDifficulty) {
}

bool USDICoreUtilityAI::HasReachedMovementLocation(FVector Dest, float AcceptanceRadius, bool bProjectDestinationToNavigation) const {
    return false;
}

FVector USDICoreUtilityAI::GetWanderDestinationFromLocation(const FVector& Location, float TestDistance, AActor* RefActor) {
    return FVector{};
}

FVector USDICoreUtilityAI::GetWanderDestinationFromActor(AActor* Act, float TestDistance) {
    return FVector{};
}

FVector USDICoreUtilityAI::GetWanderDestination(float TestDistance) const {
    return FVector{};
}

float USDICoreUtilityAI::GetWalkSpeed() const {
    return 0.0f;
}

bool USDICoreUtilityAI::GetViewPoint(FVector& Loc, FRotator& Rot) const {
    return false;
}

void USDICoreUtilityAI::GetTeamAttitudes(AActor* Target, TEnumAsByte<ETeamAttitude::Type>& OutAttitudeTowards, TEnumAsByte<ETeamAttitude::Type>& OutAttitudeFrom) const {
}

int32 USDICoreUtilityAI::GetTargetsByTeamId(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, const FGenericTeamId& TeamID, float MaxTimeSinceLostLOS) const {
    return 0;
}

int32 USDICoreUtilityAI::GetTargetsByDelegate(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, USDICoreUtilityAI::FSDICoreUtilityAITargetPriorityDynamic PriorityDelegate) const {
    return 0;
}

int32 USDICoreUtilityAI::GetTargetsByAttitudeTowards(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const {
    return 0;
}

int32 USDICoreUtilityAI::GetTargetsByAttitudeFrom(const FSDICoreUtilityAITargetList& InTargetList, TArray<FSDICoreUtilityAITargetEntry>& OutTargets, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const {
    return 0;
}

int32 USDICoreUtilityAI::GetTarget(const FSDICoreUtilityAITargetList& InTargetList, AActor* Actor, FSDICoreUtilityAITargetEntry& OutTarget) const {
    return 0;
}

float USDICoreUtilityAI::GetSprintSpeed() const {
    return 0.0f;
}

float USDICoreUtilityAI::GetServerTimestamp() const {
    return 0.0f;
}

bool USDICoreUtilityAI::GetPathDistanceTo(const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const {
    return false;
}

bool USDICoreUtilityAI::GetPathDistance(const FVector& Start, const FVector& End, float& Distance, TSubclassOf<UNavigationQueryFilter> FilterClass) const {
    return false;
}

int32 USDICoreUtilityAI::GetNumTargetsByTeamId(const FSDICoreUtilityAITargetList& InTargetList, const FGenericTeamId& TeamID, float MaxTimeSinceLostLOS) const {
    return 0;
}

int32 USDICoreUtilityAI::GetNumTargetsByAttitudeTowards(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const {
    return 0;
}

int32 USDICoreUtilityAI::GetNumTargetsByAttitudeFrom(const FSDICoreUtilityAITargetList& InTargetList, TEnumAsByte<ETeamAttitude::Type> Attitude, float MaxTimeSinceLostLOS) const {
    return 0;
}

FVector USDICoreUtilityAI::GetMovementInputVector() const {
    return FVector{};
}

float USDICoreUtilityAI::GetMaxSpeedWithoutSprinting() const {
    return 0.0f;
}

float USDICoreUtilityAI::GetMaxSpeed() const {
    return 0.0f;
}

ESDIUtilityAIDifficulty USDICoreUtilityAI::GetDifficulty() const {
    return ESDIUtilityAIDifficulty::Easy;
}

float USDICoreUtilityAI::GetCrouchSpeed() const {
    return 0.0f;
}

ASDICoreCharacter* USDICoreUtilityAI::GetCoreChar() const {
    return NULL;
}

AController* USDICoreUtilityAI::GetController() const {
    return NULL;
}

ACharacter* USDICoreUtilityAI::GetChar() const {
    return NULL;
}

FRotator USDICoreUtilityAI::GetAimOffsetRot() const {
    return FRotator{};
}

float USDICoreUtilityAI::GetAimOffsetDeg() const {
    return 0.0f;
}

USDICoreUtilityAIState* USDICoreUtilityAI::GetActiveState() const {
    return NULL;
}

FVector USDICoreUtilityAI::FindRandomLocationAroundPoint(const FVector& Loc, float Radius) const {
    return FVector{};
}

FVector2D USDICoreUtilityAI::DrawHUD_Implementation(AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize) {
    return FVector2D{};
}

void USDICoreUtilityAI::DestroyUtilityAI_Implementation() {
}

FVector USDICoreUtilityAI::DeltaBetweenCharacterCapsules(ACharacter* A, ACharacter* B) {
    return FVector{};
}

bool USDICoreUtilityAI::CanSprint() const {
    return false;
}

bool USDICoreUtilityAI::CanEverSprint() const {
    return false;
}

bool USDICoreUtilityAI::CanEverCrouch() const {
    return false;
}

bool USDICoreUtilityAI::CanCrouch() const {
    return false;
}

bool USDICoreUtilityAI::AllowWander_Implementation() const {
    return false;
}

bool USDICoreUtilityAI::AllowAttack_Implementation() const {
    return false;
}

void USDICoreUtilityAI::AimTowardsPoint(const FVector& Point) {
}

void USDICoreUtilityAI::AimTowardsDir(const FVector& Dir) {
}

USDICoreUtilityAI::USDICoreUtilityAI() {
    this->DefaultNavigationQueryClass = NULL;
    this->bCanAttack = true;
    this->bCanWander = true;
    this->StuckVelocity = 128.00f;
    this->PathFollowingComp = NULL;
    this->DesiredDifficulty = ESDIUtilityAIDifficulty::Medium;
    this->CurrentDifficulty = ESDIUtilityAIDifficulty::Medium;
    this->bRequestingRepath = false;
    this->bWasFalling = false;
    this->StuckTimer = 0.00f;
    this->ActiveState = NULL;
    this->bCurrentlyInsideTick = false;
}

