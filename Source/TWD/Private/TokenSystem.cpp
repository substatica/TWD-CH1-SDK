#include "TokenSystem.h"

class ATWDCharacter;
class UToken;

void UTokenSystem::SetTokenNum(int32 Count) {
}

void UTokenSystem::SetTokenAtIndex(int32 Index, UToken* Token) {
}

UToken* UTokenSystem::ReserveTokenAtIndex(int32 Index, const ATWDCharacter* Character) {
    return NULL;
}

void UTokenSystem::ReleaseTokenAtIndex(int32 Index, const ATWDCharacter* Character) {
}

bool UTokenSystem::IsTokenValidAtIndex(int32 Index) const {
    return false;
}

bool UTokenSystem::IsTokenAvailableAtIndex(int32 Index) const {
    return false;
}

int32 UTokenSystem::GetTokensInUseCount() const {
    return 0;
}

int32 UTokenSystem::GetTokenNum() const {
    return 0;
}

ATWDCharacter* UTokenSystem::GetTokenHolderAtIndex(int32 Index) const {
    return NULL;
}

UToken* UTokenSystem::GetTokenAtIndex(int32 Index) const {
    return NULL;
}

bool UTokenSystem::DoesCharacterHoldTokenAtIndex(int32 Index, const ATWDCharacter* Character) const {
    return false;
}

UTokenSystem::UTokenSystem() {
    this->MaximumTokensAvailable = 0;
}

