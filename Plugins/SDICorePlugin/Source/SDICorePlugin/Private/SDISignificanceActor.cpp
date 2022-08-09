#include "SDISignificanceActor.h"

class UObject;

float ASDISignificanceActor::SignificanceFunction(UObject* QueryObj, const FTransform& ViewerTransform) {
    return 0.0f;
}

ASDISignificanceActor::ASDISignificanceActor() {
    this->SignificanceTag = TEXT("SDISignificanceActor");
}

