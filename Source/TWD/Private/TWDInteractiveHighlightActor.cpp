#include "TWDInteractiveHighlightActor.h"
#include "TWDInteractionWidgetComponent.h"


ATWDInteractiveHighlightActor::ATWDInteractiveHighlightActor() {
    this->WidgetComponent = CreateDefaultSubobject<UTWDInteractionWidgetComponent>(TEXT("WidgetComponent"));
    this->HighlightSpeed = 5.00f;
    this->UnHighlightSpeed = 5.00f;
    this->ScaleCurve = NULL;
}

