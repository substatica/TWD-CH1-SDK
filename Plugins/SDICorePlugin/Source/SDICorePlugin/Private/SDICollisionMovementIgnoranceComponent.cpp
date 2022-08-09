#include "SDICollisionMovementIgnoranceComponent.h"

class UPrimitiveComponent;
class USDICollisionMovementIgnoranceComponent;
class AActor;

int32 USDICollisionMovementIgnoranceComponent::SetComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bReciprocate) {
    return 0;
}

bool USDICollisionMovementIgnoranceComponent::SetComponentIgnorance(UPrimitiveComponent* OtherComp, bool bReciprocate) {
    return false;
}

void USDICollisionMovementIgnoranceComponent::SetCollisionComponent(UPrimitiveComponent* InComp) {
}

int32 USDICollisionMovementIgnoranceComponent::SetActorIgnorances(const TArray<AActor*>& OtherActors) {
    return 0;
}

bool USDICollisionMovementIgnoranceComponent::SetActorIgnorance(AActor* OtherActor) {
    return false;
}

bool USDICollisionMovementIgnoranceComponent::K2IsIgnoringComponent(UPrimitiveComponent* OtherComp, bool& bOutReciprocate) const {
    return false;
}

bool USDICollisionMovementIgnoranceComponent::K2IsComponentWaitingForClearance(UPrimitiveComponent* OtherComp, bool& bOutReciprocate) const {
    return false;
}

bool USDICollisionMovementIgnoranceComponent::IsIgnoringActor(AActor* OtherActor) const {
    return false;
}

bool USDICollisionMovementIgnoranceComponent::IsActorWaitingForClearance(AActor* OtherActor) const {
    return false;
}

void USDICollisionMovementIgnoranceComponent::IgnoreComponentUntilClear(UPrimitiveComponent* OtherComp, bool bReciprocate) {
}

void USDICollisionMovementIgnoranceComponent::IgnoreActorUntilClear(AActor* OtherActor) {
}

TMap<UPrimitiveComponent*, bool> USDICollisionMovementIgnoranceComponent::GetIgnoredComponents() const {
    return TMap<UPrimitiveComponent*, bool>();
}

TArray<AActor*> USDICollisionMovementIgnoranceComponent::GetIgnoredActors() const {
    return TArray<AActor*>();
}

TMap<UPrimitiveComponent*, bool> USDICollisionMovementIgnoranceComponent::GetComponentsWaitingForClearance() const {
    return TMap<UPrimitiveComponent*, bool>();
}

USDICollisionMovementIgnoranceComponent* USDICollisionMovementIgnoranceComponent::GetCollisionMovementIgnoranceComponentFor(UPrimitiveComponent* PrimitiveComponent, bool bCreate) {
    return NULL;
}

UPrimitiveComponent* USDICollisionMovementIgnoranceComponent::GetCollisionComponent() const {
    return NULL;
}

TArray<AActor*> USDICollisionMovementIgnoranceComponent::GetActorsWaitingForClearance() const {
    return TArray<AActor*>();
}

void USDICollisionMovementIgnoranceComponent::ClearComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::ClearComponentIgnorance(UPrimitiveComponent* OtherComp, bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::ClearAllComponentIgnorances(bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::ClearAllActorIgnorances(bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::ClearActorIgnorances(const TArray<AActor*>& OtherActors, bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::ClearActorIgnorance(AActor* OtherActor, bool bWaitForClearance) {
}

void USDICollisionMovementIgnoranceComponent::CancelComponentWaitForClearances(const TArray<UPrimitiveComponent*>& OtherComps) {
}

void USDICollisionMovementIgnoranceComponent::CancelComponentWaitForClearance(UPrimitiveComponent* OtherComp) {
}

void USDICollisionMovementIgnoranceComponent::CancelAllComponentWaitForClearances() {
}

void USDICollisionMovementIgnoranceComponent::CancelAllActorWaitForClearances() {
}

void USDICollisionMovementIgnoranceComponent::CancelActorWaitForClearances(const TArray<AActor*>& OtherActors) {
}

void USDICollisionMovementIgnoranceComponent::CancelActorWaitForClearance(AActor* OtherActor) {
}

USDICollisionMovementIgnoranceComponent::USDICollisionMovementIgnoranceComponent() {
    this->bDynamicallyCreated = false;
}

