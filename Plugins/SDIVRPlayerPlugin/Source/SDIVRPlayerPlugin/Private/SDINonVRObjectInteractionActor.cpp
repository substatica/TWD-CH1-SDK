#include "SDINonVRObjectInteractionActor.h"
#include "Components/SceneComponent.h"

class ASDIPlayerController;
class ASDIInteractiveActor;
class APlayerCameraManager;
class AActor;
class APawn;
class ASDIHeldActor;
class UCameraComponent;

void ASDINonVRObjectInteractionActor::StopInteraction() {
}

bool ASDINonVRObjectInteractionActor::StartInteraction(ASDIInteractiveActor* Actor) {
    return false;
}

void ASDINonVRObjectInteractionActor::ShowInteractionUI_Implementation() {
}

void ASDINonVRObjectInteractionActor::ResetMovement_Implementation() {
}

bool ASDINonVRObjectInteractionActor::IsInteracting() const {
    return false;
}

void ASDINonVRObjectInteractionActor::InputMoveUp(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotateYawAtRate(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotateYaw(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotateRollAtRate(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotateRoll(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotatePitchAtRate(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRotatePitch(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveRight(float Value) {
}

void ASDINonVRObjectInteractionActor::InputMoveForward(float Value) {
}

void ASDINonVRObjectInteractionActor::InputCancelReleased() {
}

void ASDINonVRObjectInteractionActor::InputCancelPressed() {
}

void ASDINonVRObjectInteractionActor::HideInteractionUI_Implementation() {
}

ASDIPlayerController* ASDINonVRObjectInteractionActor::GetPlayerController() const {
    return NULL;
}

APlayerCameraManager* ASDINonVRObjectInteractionActor::GetPlayerCameraManager() const {
    return NULL;
}

APawn* ASDINonVRObjectInteractionActor::GetPawn() const {
    return NULL;
}

FSDITimestampInputButton ASDINonVRObjectInteractionActor::GetInputCancelButton() const {
    return FSDITimestampInputButton{};
}

FTransform ASDINonVRObjectInteractionActor::GetGripTransform_Implementation(ASDIHeldActor* HeldActor) const {
    return FTransform{};
}

ASDIInteractiveActor* ASDINonVRObjectInteractionActor::GetCurrentActor() const {
    return NULL;
}

AActor* ASDINonVRObjectInteractionActor::GetCameraActor() const {
    return NULL;
}

UCameraComponent* ASDINonVRObjectInteractionActor::GetCamera() const {
    return NULL;
}

void ASDINonVRObjectInteractionActor::EndInteraction_Implementation(ASDIInteractiveActor* Actor) {
}

void ASDINonVRObjectInteractionActor::BeginInteraction_Implementation(ASDIInteractiveActor* Actor) {
}

void ASDINonVRObjectInteractionActor::AdjustRotation(FRotator Rot) {
}

void ASDINonVRObjectInteractionActor::AdjustPosition(FVector Offset) {
}

ASDINonVRObjectInteractionActor::ASDINonVRObjectInteractionActor() {
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovementRoot"));
    this->AttachmentRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AttachmentRoot"));
    this->DefaultDistance = 32.00f;
    this->InputMovementRate = 32.00f;
    this->InputRotationScale = 2.50f;
    this->InputRotationRate = 45.00f;
    this->bCachedActorSimulatingPhysics = false;
    this->bCachedActorCollision = false;
    this->bCachedActorInsideInventory = false;
    this->bCachedActorTickEnabled = false;
    this->bIsInteracting = false;
}

