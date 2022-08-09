#include "TWDLookAtComponent.h"

class ASDIHeldActor;
class ATWDPlayerController;
class AActor;
class UCameraComponent;

bool UTWDLookAtComponent::TrySaveToNotebook() {
    return false;
}

bool UTWDLookAtComponent::IsLookInProgress() const {
    return false;
}

void UTWDLookAtComponent::HideLookAtActor() {
}

bool UTWDLookAtComponent::CanActivateLookAt_Implementation(const ATWDPlayerController* PlayerController, const UCameraComponent* Camera) {
    return false;
}

void UTWDLookAtComponent::BeginNoteConsumption(ASDIHeldActor* HeldActor, AActor* DroppedBy) {
}

UTWDLookAtComponent::UTWDLookAtComponent() {
    this->DetectionRadius = 100.00f;
    this->DetectionDelay = 0.50f;
    this->bUseDetectionCone = true;
    this->DetectionConeAngle = 60.00f;
    this->bUseForwardFacingCone = true;
    this->ForwardFacingConeAngle = 20.00f;
    this->bSingleActivationEvent = true;
    this->bDisabled = false;
    this->bAllowLookingWhenNotHeld = false;
    this->bLookActorAutomaticHide = true;
    this->bDebugVisualization = false;
    this->bSaveToNotebook = false;
    this->bDestroyOwnerAfterSave = false;
    this->InterpDuration = 0.25f;
    this->LookActor = NULL;
    this->InterpActor = NULL;
    this->InterpTargetCharacter = NULL;
}

