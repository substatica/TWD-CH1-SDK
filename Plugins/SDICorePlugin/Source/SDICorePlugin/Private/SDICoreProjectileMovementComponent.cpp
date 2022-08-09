#include "SDICoreProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

class ASDICoreProjectileActor;

void USDICoreProjectileMovementComponent::Launch(FVector InitialVelocity) {
}

float USDICoreProjectileMovementComponent::GetServerTimestamp() const {
    return 0.0f;
}

ASDICoreProjectileActor* USDICoreProjectileMovementComponent::GetSDIProjectileOwner() const {
    return NULL;
}

void USDICoreProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USDICoreProjectileMovementComponent, RepMaxBounces);
    DOREPLIFETIME(USDICoreProjectileMovementComponent, RepBounceCount);
    DOREPLIFETIME(USDICoreProjectileMovementComponent, RepServerLocation);
    DOREPLIFETIME(USDICoreProjectileMovementComponent, RepServerVelocity);
    DOREPLIFETIME(USDICoreProjectileMovementComponent, RepServerLocationTimestamp);
}

USDICoreProjectileMovementComponent::USDICoreProjectileMovementComponent() {
    this->bReplicateProjectileMovement = false;
    this->BounceRotationRateDecel = 0.00f;
    this->bBounceRoll = true;
    this->bBounceCountFloorOnly = false;
    this->bHomingAccelerationXYOnly = false;
    this->RepMaxBounces = -1;
    this->RepBounceCount = 0;
    this->LocalBounceCount = 0;
    this->BounceRotationRate = 0.00f;
    this->RepServerLocationTimestamp = 0.00f;
    this->LastServerLocationTimestamp = 0.00f;
}

