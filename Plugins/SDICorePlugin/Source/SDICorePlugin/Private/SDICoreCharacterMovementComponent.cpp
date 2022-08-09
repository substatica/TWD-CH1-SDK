#include "SDICoreCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

void USDICoreCharacterMovementComponent::SetBaseGroundMovementSpeedType(EAIBaseGroundMovementSpeedType NewBaseGroundMovementSpeedType) {
}

bool USDICoreCharacterMovementComponent::IsSprinting(bool bCheckVelocity) const {
    return false;
}

bool USDICoreCharacterMovementComponent::IsRagdoll(bool& bOutOnFloor, float& OutLowVelocityTime) const {
    return false;
}

float USDICoreCharacterMovementComponent::GetMaxSprintSpeed() const {
    return 0.0f;
}

float USDICoreCharacterMovementComponent::GetMaxSpeedWithoutSprinting() const {
    return 0.0f;
}

EAIBaseGroundMovementSpeedType USDICoreCharacterMovementComponent::GetBaseGroundMovementSpeedType() const {
    return EAIBaseGroundMovementSpeedType::Walk;
}

void USDICoreCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USDICoreCharacterMovementComponent, bRepWantsToSprint);
}

USDICoreCharacterMovementComponent::USDICoreCharacterMovementComponent() {
    this->MaxJogSpeed = 225.00f;
    this->MaxRunSpeed = 300.00f;
    this->MaxDashSpeed = 500.00f;
    this->MaxStrollSpeed = 115.00f;
    this->MaxSprintSpeed = 900.00f;
    this->bCanSprint = true;
    this->MinAnalogWalkSpeedCrouched = 0.00f;
    this->MinAnalogWalkSpeedSprint = 0.00f;
    this->RagdollLowVelocityThreshold = 32.00f;
    this->BaseGroundMovementSpeedType = EAIBaseGroundMovementSpeedType::Walk;
    this->MovementModeTime = 0.00f;
    this->bRepWantsToSprint = false;
    this->RagdollLowVelocityTime = 0.00f;
}

