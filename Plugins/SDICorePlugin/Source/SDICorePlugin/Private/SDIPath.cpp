#include "SDIPath.h"
#include "SDIPathComponent.h"

int32 ASDIPath::GetStarterId() {
    return 0;
}

bool ASDIPath::GetPathNode(int32 ID, FVector& Location, FString& Name) {
    return false;
}

int32 ASDIPath::GetNumPathNodes() {
    return 0;
}

int32 ASDIPath::GetNextPathNodeByDirection(FVector Direction, int32 ID, FVector& Location, int32 PreviousId) {
    return 0;
}

int32 ASDIPath::GetNextPathNode(int32 ID, FVector& Location, int32 PreviousId) {
    return 0;
}

float ASDIPath::GetBranchWeight(const FString& PathNode1, const FString& PathNode2) {
    return 0.0f;
}

int32 ASDIPath::ClosestPathNodeToLocationByLinkDistance(FVector InputLocation, float& OutputDist, FVector BiasDirection) {
    return 0;
}

int32 ASDIPath::ClosestPathNodeToLocation(FVector InputLocation, FVector& OutputLocation) {
    return 0;
}

void ASDIPath::ChangeBranchWeight(const FString& PathNode1, const FString& PathNode2, float Weight) {
}

ASDIPath::ASDIPath() {
    this->PathComponent = CreateDefaultSubobject<USDIPathComponent>(TEXT("PathComponent"));
}

