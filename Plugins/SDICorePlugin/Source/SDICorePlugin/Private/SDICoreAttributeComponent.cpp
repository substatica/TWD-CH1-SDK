#include "SDICoreAttributeComponent.h"
#include "Net/UnrealNetwork.h"

void USDICoreAttributeComponent::SetRegenAllowed(bool bRegenAllowed) {
}

int32 USDICoreAttributeComponent::SetAttrPctNonZeroMinimum(float Pct, int32 NonZeroMinimumValue) {
    return 0;
}

int32 USDICoreAttributeComponent::SetAttrPct(float Pct) {
    return 0;
}

int32 USDICoreAttributeComponent::SetAttr(int32 NewValue, bool bInitial) {
    return 0;
}

void USDICoreAttributeComponent::RemoveAllRegens() {
}

void USDICoreAttributeComponent::RemoveAllBoostsAndRegens() {
}

void USDICoreAttributeComponent::RemoveAllBoosts() {
}

void USDICoreAttributeComponent::OnRep_RepValue(int32 OldRepValue) {
}

void USDICoreAttributeComponent::OnRep_RepBoost(int32 OldRepBoost) {
}

int32 USDICoreAttributeComponent::IncAttr(int32 Amount) {
    return 0;
}

int32 USDICoreAttributeComponent::GetValue() const {
    return 0;
}

int32 USDICoreAttributeComponent::GetTotalValue() const {
    return 0;
}

float USDICoreAttributeComponent::GetTotalPercent() const {
    return 0.0f;
}

float USDICoreAttributeComponent::GetPercent() const {
    return 0.0f;
}

int32 USDICoreAttributeComponent::GetMax() const {
    return 0;
}

int32 USDICoreAttributeComponent::GetBoost() const {
    return 0;
}

int32 USDICoreAttributeComponent::DecAttrWithEffectiveness(int32& InOutAmount, float Effectiveness) {
    return 0;
}

int32 USDICoreAttributeComponent::DecAttr(int32 Amount) {
    return 0;
}

int32 USDICoreAttributeComponent::AlterAttr(int32 Amount) {
    return 0;
}

void USDICoreAttributeComponent::AddRegen(FDecayInt Regen) {
}

bool USDICoreAttributeComponent::AddBoost(FDecayInt Boost, bool bApplyToValueFirst) {
    return false;
}

void USDICoreAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USDICoreAttributeComponent, RepSettings);
    DOREPLIFETIME(USDICoreAttributeComponent, RepValue);
    DOREPLIFETIME(USDICoreAttributeComponent, RepBoost);
    DOREPLIFETIME(USDICoreAttributeComponent, bRepRegenAllowed);
}

USDICoreAttributeComponent::USDICoreAttributeComponent() {
    this->RepValue = 0;
    this->RepBoost = 0;
    this->RegenFraction = 0.00f;
    this->RegenTimer = 0.00f;
    this->bRepRegenAllowed = true;
}

