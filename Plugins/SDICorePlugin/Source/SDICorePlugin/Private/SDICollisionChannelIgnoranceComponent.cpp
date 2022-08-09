#include "SDICollisionChannelIgnoranceComponent.h"

class UPrimitiveComponent;
class AActor;
class USDICollisionChannelIgnoranceComponent;

int32 USDICollisionChannelIgnoranceComponent::SetComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps) {
    return 0;
}

bool USDICollisionChannelIgnoranceComponent::SetComponentIgnorance(UPrimitiveComponent* OtherComp) {
    return false;
}

void USDICollisionChannelIgnoranceComponent::SetCollisionComponent(UPrimitiveComponent* InComp) {
}

int32 USDICollisionChannelIgnoranceComponent::RemoveChannelIgnorance(TEnumAsByte<ECollisionChannel> Channel, bool bWaitForClearance) {
    return 0;
}

bool USDICollisionChannelIgnoranceComponent::K2IsWaitingForClearance(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>& OutResponse) const {
    return false;
}

bool USDICollisionChannelIgnoranceComponent::K2IsIgnoringChannel(TEnumAsByte<ECollisionChannel> Channel, int32& OutRefCount) const {
    return false;
}

bool USDICollisionChannelIgnoranceComponent::IsIgnoringComponent(UPrimitiveComponent* OtherComp) const {
    return false;
}

void USDICollisionChannelIgnoranceComponent::IgnoreComponentUntilClear(UPrimitiveComponent* OtherComp) {
}

void USDICollisionChannelIgnoranceComponent::IgnoreComponentsUntilClear(TArray<UPrimitiveComponent*> OtherComps) {
}

void USDICollisionChannelIgnoranceComponent::IgnoreChannelUntilClear(TEnumAsByte<ECollisionChannel> Channel) {
}

void USDICollisionChannelIgnoranceComponent::IgnoreActorUntilClear(AActor* OtherActor) {
}

TArray<UPrimitiveComponent*> USDICollisionChannelIgnoranceComponent::GetIgnoredComponents() const {
    return TArray<UPrimitiveComponent*>();
}

UPrimitiveComponent* USDICollisionChannelIgnoranceComponent::GetCollisionComponent() const {
    return NULL;
}

USDICollisionChannelIgnoranceComponent* USDICollisionChannelIgnoranceComponent::GetCollisionChannelIgnoranceComponentFor(UPrimitiveComponent* PrimitiveComponent, bool bCreate) {
    return NULL;
}

void USDICollisionChannelIgnoranceComponent::ClearComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bWaitForClearance) {
}

void USDICollisionChannelIgnoranceComponent::ClearComponentIgnorance(UPrimitiveComponent* OtherComp, bool bWaitForClearance) {
}

void USDICollisionChannelIgnoranceComponent::ClearAllComponentIgnorances(bool bWaitForClearance) {
}

void USDICollisionChannelIgnoranceComponent::CleanupStaleIgnorancesCallback() {
}

void USDICollisionChannelIgnoranceComponent::CleanupStaleIgnorances(bool bWaitForClearance) {
}

void USDICollisionChannelIgnoranceComponent::CancelWaitForClearance(TEnumAsByte<ECollisionChannel> Channel) {
}

int32 USDICollisionChannelIgnoranceComponent::AddChannelIgnorance(TEnumAsByte<ECollisionChannel> Channel) {
    return 0;
}

USDICollisionChannelIgnoranceComponent::USDICollisionChannelIgnoranceComponent() {
    this->bDynamicallyCreated = false;
}

