#include "SDICorePlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "SDICoreUtilityAIPathFollowingComponent.h"

class AController;
class AActor;
class USDICoreDOTComponent;
class UDamageType;
class APawn;
class ASDICoreCharacter;
class APlayerState;
class USDICoreUtilityAI;
class UCurveFloat;

bool ASDICorePlayerController::UtilityAIConsumingInput() const {
    return false;
}

void ASDICorePlayerController::StopStatFileRecording() {
}

void ASDICorePlayerController::StopSDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback) {
}

void ASDICorePlayerController::StopSDICameraShake(const FSDICameraShakeSettings& Shake, bool bImmediately) {
}

void ASDICorePlayerController::StartStatFileRecording() {
}

bool ASDICorePlayerController::SetSpectating(bool bWaitingForStartOrSpawn) {
    return false;
}

bool ASDICorePlayerController::SetInactive(bool bWaitingForStartOrSpawn) {
    return false;
}

void ASDICorePlayerController::ServerCheatForceServerCrash_Implementation() {
}
bool ASDICorePlayerController::ServerCheatForceServerCrash_Validate() {
    return true;
}

void ASDICorePlayerController::ServerApplySDIRadialDamageEventTo_Implementation(AActor* Actor, float Damage, const FSDIRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
}
bool ASDICorePlayerController::ServerApplySDIRadialDamageEventTo_Validate(AActor* Actor, float Damage, const FSDIRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
    return true;
}

void ASDICorePlayerController::ServerApplySDIPointDamageEventTo_Implementation(AActor* Actor, float Damage, const FSDIPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
}
bool ASDICorePlayerController::ServerApplySDIPointDamageEventTo_Validate(AActor* Actor, float Damage, const FSDIPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
    return true;
}

void ASDICorePlayerController::ServerApplyRadialDamageEventTo_Implementation(AActor* Actor, float Damage, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
}
bool ASDICorePlayerController::ServerApplyRadialDamageEventTo_Validate(AActor* Actor, float Damage, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
    return true;
}

void ASDICorePlayerController::ServerApplyPointDamageEventTo_Implementation(AActor* Actor, float Damage, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
}
bool ASDICorePlayerController::ServerApplyPointDamageEventTo_Validate(AActor* Actor, float Damage, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass) {
    return true;
}

void ASDICorePlayerController::RemoveSway(int32 SwayId) {
}

bool ASDICorePlayerController::ProjectWorldShapeToWidgetPositionWithDimensions(const FSDITransformCollisionShape& Shape, FVector& OutViewportPosition, FVector2D& OutViewportDimensions) {
    return false;
}

bool ASDICorePlayerController::ProjectWorldLocationToWidgetPositionWithDistance(const FVector& WorldLocation, FVector& OutViewportPosition) {
    return false;
}

void ASDICorePlayerController::PlaySDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback) {
}

void ASDICorePlayerController::PlaySDICameraShake(const FSDICameraShakeSettings& Shake) {
}

void ASDICorePlayerController::PawnDetached_Implementation(APawn* InPawn) {
}

void ASDICorePlayerController::PawnAttached_Implementation(APawn* InPawn) {
}

void ASDICorePlayerController::OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData) {
}

void ASDICorePlayerController::OnADSChanged_Implementation(ASDICoreCharacter* Char, bool bIsADS) {
}

bool ASDICorePlayerController::IsUsingGamepad() const {
    return false;
}

bool ASDICorePlayerController::IsUnderCameraControl() const {
    return false;
}

bool ASDICorePlayerController::IsThirdPerson() const {
    return false;
}

bool ASDICorePlayerController::IsSmartMonkey() const {
    return false;
}

bool ASDICorePlayerController::IsRecenteringCamera() const {
    return false;
}

bool ASDICorePlayerController::IsMonkey() const {
    return false;
}

bool ASDICorePlayerController::IsLockonEngaged(FHitResult& OutTarget, float& OutTime) const {
    return false;
}

bool ASDICorePlayerController::IsFirstPerson() const {
    return false;
}

bool ASDICorePlayerController::IsAimAssistEnabled_Implementation() const {
    return false;
}

bool ASDICorePlayerController::IsADS() const {
    return false;
}

void ASDICorePlayerController::InputStatFileReleased() {
}

void ASDICorePlayerController::InputStatFilePressed() {
}

void ASDICorePlayerController::InputDeviceChanged_Implementation(bool bIsUsingGamePad) {
}

bool ASDICorePlayerController::InCinematicMode() const {
    return false;
}

APlayerState* ASDICorePlayerController::GetViewPlayerState() const {
    return NULL;
}

APawn* ASDICorePlayerController::GetViewPawn() const {
    return NULL;
}

USDICoreUtilityAI* ASDICorePlayerController::GetUtilityAI() const {
    return NULL;
}

FRotator ASDICorePlayerController::GetPureControlRotation() const {
    return FRotator{};
}

ESDIUtilityAIDifficulty ASDICorePlayerController::GetMonkeyDifficulty() const {
    return ESDIUtilityAIDifficulty::Easy;
}

TArray<FKey> ASDICorePlayerController::GetInputAxisKeys(FName Axis, bool bGamepad, bool bNonGamepad) const {
    return TArray<FKey>();
}

TArray<FName> ASDICorePlayerController::GetInputAxes() const {
    return TArray<FName>();
}

TArray<FName> ASDICorePlayerController::GetInputActions() const {
    return TArray<FName>();
}

TArray<FKey> ASDICorePlayerController::GetInputActionKeys(FName Action, bool bGamepad, bool bNonGamepad) const {
    return TArray<FKey>();
}

FRotator ASDICorePlayerController::GetControlRotationWithoutAnimatedOffset() const {
    return FRotator{};
}

TArray<FKey> ASDICorePlayerController::GetActiveInputAxisKeys(FName Axis) const {
    return TArray<FKey>();
}

TArray<FKey> ASDICorePlayerController::GetActiveInputActionKeys(FName Action) const {
    return TArray<FKey>();
}

void ASDICorePlayerController::ClientStopRecenterCamera_Implementation() {
}

void ASDICorePlayerController::ClientRemoveSway_Implementation(int32 SwayId) {
}

void ASDICorePlayerController::ClientRecenterCameraToPawn_Implementation(float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll) {
}

void ASDICorePlayerController::ClientRecenterCamera_Implementation(FRotator Rotation, float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll) {
}

void ASDICorePlayerController::ClientAddSway_Implementation(const FSDICameraReplicatedSwaySettings& Sway) {
}

void ASDICorePlayerController::ClientAddRecoil_Implementation(const FSDICameraReplicatedRecoilSettings& Recoil) {
}

void ASDICorePlayerController::ClientAddFlinch_Implementation(const FSDICameraReplicatedRecoilSettings& Flinch) {
}

void ASDICorePlayerController::AddYawInputAtRate(float Rate) {
}

int32 ASDICorePlayerController::AddSway(const FSDICameraSwaySettings& Sway, FRotator InScale) {
    return 0;
}

void ASDICorePlayerController::AddRollInputAtRate(float Rate) {
}

void ASDICorePlayerController::AddRecoil(const FSDICameraRecoilSettings& Recoil, FRotator InScale) {
}

void ASDICorePlayerController::AddPitchInputAtRate(float Rate) {
}

void ASDICorePlayerController::AddFlinch(const FSDICameraRecoilSettings& Flinch, FRotator InScale) {
}

void ASDICorePlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICorePlayerController, RepDamageInflictedData);
}

ASDICorePlayerController::ASDICorePlayerController() {
    this->bRecoilUseInputCompensation = true;
    this->bFlinchUseInputCompensation = true;
    this->bEnableAimAssistOnGamepad = true;
    this->bEnableAimAssistOnNonGamepad = false;
    this->AimAssistDistance = 2048.00f;
    this->AimAssistLOSTraceChannel = ECC_Visibility;
    this->AimAssistOverlapChannel = ECC_Pawn;
    this->AimAssistGravityNoInputScale = 0.25f;
    this->AimAssistGravityWithInputScale = 1.00f;
    this->AimAssistGravityAgainstInputScale = 0.50f;
    this->AimAssistEngageDuration = 0.50f;
    this->AimAssistEngageDecayRate = 0.50f;
    this->InputYawRateScale = 120.00f;
    this->InputPitchRateScale = 120.00f;
    this->InputRollRateScale = 120.00f;
    this->SmartUtilityAIClass = NULL;
    this->DumbUtilityAIClass = NULL;
    this->UtilityAIPathFollowingComponentClass = USDICoreUtilityAIPathFollowingComponent::StaticClass();
    this->MinStatFileRecordTime = 3.00f;
    this->LockonEngageTime = 0.50f;
    this->LockonYawMaxOffsetByRadius = 180.00f;
    this->LockonYawMaxOffsetByPitch = 180.00f;
    this->AnimatedControlRotationOffsetRecoverTime = 0.50f;
    this->AimAssistEngageTime = 0.00f;
    this->bWasAimAssistEnabled = false;
    this->bIsAimAssistEnabled = false;
    this->RecenterCameraTimer = 0.00f;
    this->RecenterCameraDuration = -1.00f;
    this->RecenterCameraBlend = EAlphaBlendOption::Linear;
    this->RecenterCameraBlendCustomCurve = NULL;
    this->bRecenterCameraPitch = false;
    this->bRecenterCameraYaw = false;
    this->bRecenterCameraRoll = false;
    this->LastCharacterUtilityAIClass = NULL;
    this->UtilityAI = NULL;
    this->bGamepadInput = false;
    this->bNonGamepadInput = false;
    this->bUsingGamepad = false;
    this->bRecordingStats = false;
    this->bRecordingStatsUntilStopped = false;
    this->SwayControlRotationOffsetRecoverSpeed = 0.00f;
    this->LockonTime = 0.00f;
    this->AnimatedControlRotationBlendTime = 0.00f;
    this->AnimatedControlRotationBlendDuration = 0.00f;
}

