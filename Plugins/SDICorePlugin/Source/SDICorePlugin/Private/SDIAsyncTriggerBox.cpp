#include "SDIAsyncTriggerBox.h"
#include "SDIAsyncOverlapEventGeneratorComponent.h"

ASDIAsyncTriggerBox::ASDIAsyncTriggerBox() {
    this->OverlapGenerator = CreateDefaultSubobject<USDIAsyncOverlapEventGeneratorComponent>(TEXT("OverlapGenerator"));
}

