#include "SDIImpactEffectsComponent.h"

class UPrimitiveComponent;
class AActor;

void USDIImpactEffectsComponent::UnregisterOnComponentHit(UPrimitiveComponent* Component) {
}

void USDIImpactEffectsComponent::UnregisterOnActorHit() {
}

void USDIImpactEffectsComponent::ServerRequestImpactSound_Implementation(const FSDISyncedImpactInfo& ImpactInfo) {
}
bool USDIImpactEffectsComponent::ServerRequestImpactSound_Validate(const FSDISyncedImpactInfo& ImpactInfo) {
    return true;
}

void USDIImpactEffectsComponent::RegisterPendingComponents() {
}

void USDIImpactEffectsComponent::RegisterOnComponentHit(UPrimitiveComponent* Component) {
}

void USDIImpactEffectsComponent::RegisterOnActorHit() {
}

void USDIImpactEffectsComponent::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USDIImpactEffectsComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void USDIImpactEffectsComponent::MulticastPlayImpactSound_Implementation(const FSDISyncedImpactInfo& ImpactInfo) {
}

USDIImpactEffectsComponent::USDIImpactEffectsComponent() {
    this->ImpactSoundEvent = NULL;
    this->bIsSynced = true;
    this->MinTimeSinceCreation = 1.50f;
    this->MinImpactVelocity = 300.00f;
    this->MaxImpactVelocity = 1000.00f;
    this->MinImpactInterval = 0.20f;
    this->MagnitudeRTPCParam = TEXT("Impact_Magnitude");
    this->bEnableActorImpactCallback = false;
    this->MinActorCallbackImpactVelocity = 256.00f;
    this->LastImpactSoundTimestamp = 0.00f;
}

