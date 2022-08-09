#include "SDIAsyncOverlapEventGeneratorComponent.h"

class UPrimitiveComponent;
class USDIAsyncOverlapEventGeneratorComponent;
class AActor;

void USDIAsyncOverlapEventGeneratorComponent::SetRouteActorOverlapsToOwner(bool bRouteToOwner) {
}

void USDIAsyncOverlapEventGeneratorComponent::SetReciprocateOverlapDelegates(bool bReciprocateComponents, bool bReciprocateActors) {
}

void USDIAsyncOverlapEventGeneratorComponent::SetComponent(UPrimitiveComponent* InComp) {
}

void USDIAsyncOverlapEventGeneratorComponent::SetCanOverlapOwner(bool bOverlapOwner) {
}

void USDIAsyncOverlapEventGeneratorComponent::RemoveActorClassOverlapFilter(TSoftClassPtr<AActor> ActorClass) {
}

void USDIAsyncOverlapEventGeneratorComponent::OnComponentCollisionSettingsChanged(UPrimitiveComponent* ChangedComponent) {
}

void USDIAsyncOverlapEventGeneratorComponent::OnActorDestroyed(AActor* DestroyedActor) {
}

bool USDIAsyncOverlapEventGeneratorComponent::IsOverlappingComponent(const UPrimitiveComponent* OtherComp) const {
    return false;
}

bool USDIAsyncOverlapEventGeneratorComponent::IsOverlappingActor(const AActor* Other) const {
    return false;
}

UPrimitiveComponent* USDIAsyncOverlapEventGeneratorComponent::GetComponent() const {
    return NULL;
}

USDIAsyncOverlapEventGeneratorComponent* USDIAsyncOverlapEventGeneratorComponent::GetAsyncOverlapEventGeneratorComponentFor(UPrimitiveComponent* Component, bool bCreate) {
    return NULL;
}

void USDIAsyncOverlapEventGeneratorComponent::ClearActorClassOverlapFilter() {
}

void USDIAsyncOverlapEventGeneratorComponent::AddActorClassOverlapFilter(TSoftClassPtr<AActor> ActorClass, bool bAllowOverlap) {
}

USDIAsyncOverlapEventGeneratorComponent::USDIAsyncOverlapEventGeneratorComponent() {
    this->PrimitiveComponent = NULL;
    this->bDynamicallyCreated = false;
    this->bIsUpdatingOverlaps = false;
    this->bClearOverlapsRequested = false;
    this->bAsyncOverlapHandlePending = false;
    this->bCanOverlapOwner = false;
    this->bRouteActorOverlapsToOwner = false;
    this->bReciprocateComponentOverlapDelegates = false;
    this->bReciprocateActorOverlapDelegates = false;
}

