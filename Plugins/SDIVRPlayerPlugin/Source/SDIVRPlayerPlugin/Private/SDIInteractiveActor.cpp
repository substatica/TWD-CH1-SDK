#include "SDIInteractiveActor.h"

class UTexture2D;

UTexture2D* ASDIInteractiveActor::GetUIIcon_Implementation() const {
    return NULL;
}

FText ASDIInteractiveActor::GetFlavorText_Implementation() const {
    return FText::GetEmpty();
}

FText ASDIInteractiveActor::GetDisplayName_Implementation() const {
    return FText::GetEmpty();
}

FText ASDIInteractiveActor::GetDescription_Implementation() const {
    return FText::GetEmpty();
}

ASDIInteractiveActor::ASDIInteractiveActor() {
}

