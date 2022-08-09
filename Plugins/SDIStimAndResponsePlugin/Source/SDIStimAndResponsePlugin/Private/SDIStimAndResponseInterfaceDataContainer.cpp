#include "SDIStimAndResponseInterfaceDataContainer.h"

FSDIStimAndResponseInterfaceDataContainer::FSDIStimAndResponseInterfaceDataContainer() {
    this->StimulusTickInterval = 0.00f;
    this->bStartStimulusTickWhenStimulated = false;
    this->bStopStimulusTickWhenNotStimulated = false;
    this->bUpdateStimuliOnTick = false;
    this->LastTickTimeStamp = 0.00f;
}

