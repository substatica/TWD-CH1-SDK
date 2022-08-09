#include "SDIPathComponent.h"

int32 USDIPathComponent::FindClosestPoint(const FVector& Loc, FVector& ClosestPoint) {
    return 0;
}

USDIPathComponent::USDIPathComponent() {
    this->PathNodes.AddDefaulted(2);
    this->StarterId = 0;
    this->NodeDescDataTable = NULL;
    this->NodeAnimationEnumData = NULL;
    this->CounterId = 2;
}

