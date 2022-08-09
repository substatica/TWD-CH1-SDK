#include "TWDGuardPoint.h"

class ATWDCharacter;

void ATWDGuardPoint::SetLeashes(TArray<FTWDGuardPointLeash> NewLeashes) {
}

bool ATWDGuardPoint::IsReactionSupportedByGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey) {
    return false;
}

bool ATWDGuardPoint::IsReactionSupported(ECharacterReaction Reaction) const {
    return false;
}

bool ATWDGuardPoint::IsLocationWithinLeash(FVector Location, ATWDCharacter* Character) const {
    return false;
}

bool ATWDGuardPoint::IsLocationWithinGuardPointLeash(FVector Location, ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey, FName GuardLeashDistanceKey) {
    return false;
}

bool ATWDGuardPoint::IsLocationInLeash(FVector Location, const FTWDGuardPointLeash& Leash, ATWDCharacter* Character) const {
    return false;
}

bool ATWDGuardPoint::HasGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey) {
    return false;
}

TArray<FTWDGuardPointLeash> ATWDGuardPoint::GetLeashes() const {
    return TArray<FTWDGuardPointLeash>();
}

bool ATWDGuardPoint::DoesLeashSupportReaction(const FTWDGuardPointLeash& Leash, ECharacterReaction Reaction) const {
    return false;
}

ATWDGuardPoint::ATWDGuardPoint() {
}

