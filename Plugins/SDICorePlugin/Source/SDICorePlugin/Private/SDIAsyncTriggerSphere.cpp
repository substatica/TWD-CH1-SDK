#include "SDIAsyncTriggerSphere.h"
#include "SDIAsyncOverlapEventGeneratorComponent.h"

ASDIAsyncTriggerSphere::ASDIAsyncTriggerSphere() {
    this->OverlapGenerator = CreateDefaultSubobject<USDIAsyncOverlapEventGeneratorComponent>(TEXT("OverlapGenerator"));
}

