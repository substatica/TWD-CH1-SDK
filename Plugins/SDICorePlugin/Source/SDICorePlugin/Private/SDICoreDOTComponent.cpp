#include "SDICoreDOTComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDICoreDOTComponent;
class AActor;
class AController;

int32 USDICoreDOTComponent::RemoveDOT(TSubclassOf<USDICoreDOTComponent> DOTClass, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser) {
    return 0;
}

void USDICoreDOTComponent::ReApplyWith_Implementation(const USDICoreDOTComponent* BaseDOT, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) {
}

void USDICoreDOTComponent::ProcessCustomData_Implementation(bool bIsReApply, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) {
}

void USDICoreDOTComponent::OnRep_RepTotalDuration(float OldRepTotalDuration) {
}

void USDICoreDOTComponent::OnRep_RepDamageCauser(AActor* OldRepDamageCauser) {
}



bool USDICoreDOTComponent::HasAuthority() const {
    return false;
}

float USDICoreDOTComponent::GetTimeLeft() const {
    return 0.0f;
}

bool USDICoreDOTComponent::CanApplyTo_Implementation(AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) const {
    return false;
}

USDICoreDOTComponent* USDICoreDOTComponent::ApplyDOT(TSubclassOf<USDICoreDOTComponent> DOTClass, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) {
    return NULL;
}

bool USDICoreDOTComponent::AddCheckExistingDOT_Implementation(USDICoreDOTComponent* DOTComp, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) const {
    return false;
}

void USDICoreDOTComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USDICoreDOTComponent, RepTotalDuration);
    DOREPLIFETIME(USDICoreDOTComponent, RepDurationTimer);
    DOREPLIFETIME(USDICoreDOTComponent, RepDamageCauser);
}

USDICoreDOTComponent::USDICoreDOTComponent() {
    this->bAffectedByTimeDilation = true;
    this->IntervalTimer = 0.01f;
    this->RepTotalDuration = 0.00f;
    this->RepDurationTimer = 0.00f;
    this->DelayTimer = 0.00f;
    this->AttachedTime = 0.00f;
    this->EventInstigator = NULL;
    this->RepDamageCauser = NULL;
}

