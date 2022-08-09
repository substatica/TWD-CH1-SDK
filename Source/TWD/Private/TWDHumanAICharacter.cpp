#include "TWDHumanAICharacter.h"
#include "Templates/SubclassOf.h"
#include "Components/StaticMeshComponent.h"

class ASDIInventoryActor;

void ATWDHumanAICharacter::UpdateRotation_PostRM(const FTransform& NewRotation) {
}

void ATWDHumanAICharacter::UpdateLocation_PostRM(const FTransform& NewLocation) {
}

void ATWDHumanAICharacter::SetWeaponClass(TSubclassOf<ASDIInventoryActor> NewWeaponClass) {
}

void ATWDHumanAICharacter::ReloadWeapon(EControllerHand hand) {
}

void ATWDHumanAICharacter::OnStun_Implementation(EHitReactType Type, ETWDCharacterHitDirection Direction, FVector Vector) {
}

void ATWDHumanAICharacter::OnPersonalSpacePushback_Implementation() {
}

void ATWDHumanAICharacter::OnKnockBack_Implementation() {
}

void ATWDHumanAICharacter::OnHitReactEnd_Implementation() {
}


void ATWDHumanAICharacter::Native_UpdateTranslateToDestination(float DeltaSeconds) {
}



bool ATWDHumanAICharacter::IsDefaultBehaviorPatrol_Implementation() const {
    return false;
}

bool ATWDHumanAICharacter::IsDefaultBehaviorGuard_Implementation() const {
    return false;
}

void ATWDHumanAICharacter::GetWeaponAnimationType(EWeaponAnimation& WeaponAnimType, bool& bIsRevolver) const {
}

FVector ATWDHumanAICharacter::GetGuardPointLocation_Implementation(bool& ValidLocation) {
    return FVector{};
}

void ATWDHumanAICharacter::FireWeapon(EControllerHand hand, const FOnFiredRound& OnFiredRound) {
}

void ATWDHumanAICharacter::DeactivateEphemeralKnife() {
}

void ATWDHumanAICharacter::ActivateEphemeralKnifeAtAttachment(FName SocketName, FTransform RelativeTransform) {
}

void ATWDHumanAICharacter::ActivateEphemeralKnife() {
}

ATWDHumanAICharacter::ATWDHumanAICharacter() {
    this->PushBackDistance = 130.00f;
    this->PushbackMaxSpeed = 340282346638528859811704183484516925440.00f;
    this->PushBackTime = 0.15f;
    this->KnockBackDistance = 100.00f;
    this->KnockBackMaxSpeed = 340282346638528859811704183484516925440.00f;
    this->KnockBackInterpSpeed = 10.00f;
    this->KnockBackTime = 0.50f;
    this->StunTimeKey = TEXT("StunTime");
    this->bDebugShowKnockBackVector = false;
    this->ABP_TurnSpeed = 1.00f;
    this->ABP_ExitSpeed = 1.00f;
    this->RequestedCharacterAnimationSet = ECharacterAnimationSet::None;
    this->WeaponClass = NULL;
    this->EphemeralKnifeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EphemeralKnifeComponent"));
    this->Native_AggroMeterIconRef = NULL;
    this->Native_AggroMeterDMI = NULL;
    this->TotalSeconds = 0.00f;
    this->Duration = 0.00f;
    this->AggroMeterAlertHoldTime = 1.00f;
    this->AggroMeterAlertFadeTime = 0.20f;
    this->InTranslateProgress = false;
    this->DEBUG_ShowReactionInfo = false;
}

