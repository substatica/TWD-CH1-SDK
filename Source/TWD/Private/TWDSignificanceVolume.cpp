#include "TWDSignificanceVolume.h"

class AActor;

void ATWDSignificanceVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ATWDSignificanceVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

ATWDSignificanceVolume::ATWDSignificanceVolume() {
    this->MaxSignificanceHumanTier2 = -1;
    this->MaxSignificanceAICharactersTier2 = -1;
    this->MaxSignificanceHumanTier1 = -1;
    this->MaxSignificanceAICharactersTier1 = -1;
    this->MaxSignificanceHumanTier0 = -1;
    this->MaxSignificanceAICharactersTier0 = -1;
    this->MaxSignificanceHumanTier0HiSpec = -1;
    this->MaxSignificanceAICharactersTier0HiSpec = -1;
}

