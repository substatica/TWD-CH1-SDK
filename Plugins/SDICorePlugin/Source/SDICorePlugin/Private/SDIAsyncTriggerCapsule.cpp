#include "SDIAsyncTriggerCapsule.h"
#include "SDIAsyncOverlapEventGeneratorComponent.h"

ASDIAsyncTriggerCapsule::ASDIAsyncTriggerCapsule() {
    this->OverlapGenerator = CreateDefaultSubobject<USDIAsyncOverlapEventGeneratorComponent>(TEXT("OverlapGenerator"));
}

