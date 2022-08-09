#include "TWDMovementTargetActor.h"
#include "Components/ArrowComponent.h"

class AActor;

void ATWDMovementTargetActor::SetOccupied(AActor* occupingActor) {
}

bool ATWDMovementTargetActor::IsValidCover() {
    return false;
}

bool ATWDMovementTargetActor::GetPopoutPositionValid(FVector TargetPos, EPopoutLocation popoutSide, FVector& PopoutPosition) {
    return false;
}

bool ATWDMovementTargetActor::GetOccupied(AActor*& occupingActor) {
    return false;
}

void ATWDMovementTargetActor::ClearOccupied() {
}

ATWDMovementTargetActor::ATWDMovementTargetActor() {
    this->LeftArrowPopout = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftCoverArrow"));
    this->RightArrowPopout = CreateDefaultSubobject<UArrowComponent>(TEXT("RightCoverArrow"));
    this->MoveTargetType = EMovementTargetType::MTT_Both;
    this->CoverType = ECoverType::CT_FULLCOVER;
    this->CoverHeightCheck = 0.00f;
    this->CoverWidthCheck = 0.00f;
    this->CoverDistanceCheck = 0.00f;
    this->DisplayDebug = false;
    this->OccupingAgent = NULL;
}

