#include "TWDNonVRBackpackWidget.h"

class ASDIInventoryActor;

void UTWDNonVRBackpackWidget::OnSelectedItemChanged(ASDIInventoryActor* NewItem) {
}

UTWDNonVRBackpackWidget::UTWDNonVRBackpackWidget() {
    this->BackpackActor = NULL;
    this->CurrentlySelectedItem = NULL;
}

