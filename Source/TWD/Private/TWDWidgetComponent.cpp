#include "TWDWidgetComponent.h"

void UTWDWidgetComponent::SetUseStereoLayer(bool _bUseStereoLayer) {
}

UTWDWidgetComponent::UTWDWidgetComponent() {
    this->bUseLightingChannelOverrides = false;
    this->bUseStereoLayer = false;
    this->bStereoLayerIgnoreDepth = true;
    this->StereoLayerPriority = 0;
    this->StereoLayerID = 4294967295;
    this->bWorldSpace = false;
}

