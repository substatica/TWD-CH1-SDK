#include "SDIDamageType.h"

class USDIDamageType;

USDIDamageType* USDIDamageType::GetSDIDamageType(UClass* DamageTypeClass, bool& bValid) const {
    return NULL;
}

FGameplayTagContainer USDIDamageType::GetGameplayTagContainer() const {
    return FGameplayTagContainer{};
}

USDIDamageType::USDIDamageType() {
}

