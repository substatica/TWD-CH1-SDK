#include "GrappleTokenSystem.h"
#include "TokenSystem.h"

class ATWDCharacter;
class UOuterRingToken;
class UFeedingToken;
class UGrappleToken;

void UGrappleTokenSystem::SetNumOuterRingTokens(int32 Count) {
}

void UGrappleTokenSystem::SetNumFeedingTokens(int32 Count) {
}

void UGrappleTokenSystem::SetMaximumTokensAvailable(int32 Count) {
}

void UGrappleTokenSystem::SetMaximumOuterRingTokensAvailable(int32 Count) {
}

void UGrappleTokenSystem::SetMaximumFeedingTokensAvailable(int32 Count) {
}

UOuterRingToken* UGrappleTokenSystem::ReserveOuterRingToken(int32 Index, const ATWDCharacter* Character) {
    return NULL;
}

UGrappleToken* UGrappleTokenSystem::ReserveGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character) {
    return NULL;
}

UFeedingToken* UGrappleTokenSystem::ReserveFeedingToken(int32 Index, const ATWDCharacter* Character) {
    return NULL;
}

void UGrappleTokenSystem::ReleaseOuterRingToken(int32 Index, const ATWDCharacter* Character) {
}

void UGrappleTokenSystem::ReleaseGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character) {
}

void UGrappleTokenSystem::ReleaseFeedingToken(int32 Index, const ATWDCharacter* Character) {
}

bool UGrappleTokenSystem::IsTokenValid(ETWDCharacterGrappleLocation Location) const {
    return false;
}

bool UGrappleTokenSystem::IsTokenHeldByGrappleCooldown(ETWDCharacterGrappleLocation Location) const {
    return false;
}

bool UGrappleTokenSystem::IsTokenAvailable(ETWDCharacterGrappleLocation Location) const {
    return false;
}

bool UGrappleTokenSystem::IsOuterRingTokenValid(int32 Index) const {
    return false;
}

bool UGrappleTokenSystem::IsOuterRingTokenAvailable(int32 Index) const {
    return false;
}

bool UGrappleTokenSystem::IsFeedingTokenValid(int32 Index) const {
    return false;
}

bool UGrappleTokenSystem::IsFeedingTokenAvailable(int32 Index) const {
    return false;
}

ATWDCharacter* UGrappleTokenSystem::GetTokenHolder(ETWDCharacterGrappleLocation Location) {
    return NULL;
}

int32 UGrappleTokenSystem::GetOuterRingTokensInUse(TArray<int32>& OutValidOuterRingIndexes) const {
    return 0;
}

FVector UGrappleTokenSystem::GetOuterRingTokenLocation(int32 Index, float OuterRingMoveLocationOffset) const {
    return FVector{};
}

ATWDCharacter* UGrappleTokenSystem::GetOuterRingTokenHolder(int32 Index) const {
    return NULL;
}

UOuterRingToken* UGrappleTokenSystem::GetOuterRingToken(int32 Index) {
    return NULL;
}

int32 UGrappleTokenSystem::GetNumOuterRingTokensInUse() const {
    return 0;
}

int32 UGrappleTokenSystem::GetNumOuterRingTokens() const {
    return 0;
}

int32 UGrappleTokenSystem::GetNumGrappleTokensInUse() const {
    return 0;
}

int32 UGrappleTokenSystem::GetNumFeedingTokensInUse() const {
    return 0;
}

int32 UGrappleTokenSystem::GetNumFeedingTokens() const {
    return 0;
}

int32 UGrappleTokenSystem::GetMaximumTokensAvailable() const {
    return 0;
}

int32 UGrappleTokenSystem::GetMaximumOuterRingTokensAvailable() const {
    return 0;
}

int32 UGrappleTokenSystem::GetMaximumFeedingTokensAvailable() const {
    return 0;
}

int32 UGrappleTokenSystem::GetFeedingTokensInUse(TArray<int32>& OutValidFeedingIndexes) const {
    return 0;
}

FVector UGrappleTokenSystem::GetFeedingTokenLocation(int32 Index, float FeedingMoveLocationOffset) const {
    return FVector{};
}

ATWDCharacter* UGrappleTokenSystem::GetFeedingTokenHolder(int32 Index) const {
    return NULL;
}

UFeedingToken* UGrappleTokenSystem::GetFeedingToken(int32 Index) {
    return NULL;
}

bool UGrappleTokenSystem::DoesCharacterHoldToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character) const {
    return false;
}

bool UGrappleTokenSystem::DoesCharacterHoldOuterRingToken(const ATWDCharacter* Character) const {
    return false;
}

bool UGrappleTokenSystem::DoesCharacterHoldFeedingToken(const ATWDCharacter* Character) const {
    return false;
}

UGrappleToken* UGrappleTokenSystem::AddGrappleToken(ETWDCharacterGrappleLocation Location) {
    return NULL;
}

UGrappleTokenSystem::UGrappleTokenSystem() {
    this->GrappleTokens = CreateDefaultSubobject<UTokenSystem>(TEXT("GrappleTokens"));
    this->FeedingTokens = CreateDefaultSubobject<UTokenSystem>(TEXT("FeedingTokens"));
    this->OuterRingTokens = CreateDefaultSubobject<UTokenSystem>(TEXT("OuterRingTokens"));
}

