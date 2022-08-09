#include "SDICoreFXManager.h"

class ULightComponent;
class UCurveFloat;
class UObject;
class ASDICoreFXManager;

void ASDICoreFXManager::RemoveLightFlicker(ULightComponent* LightComponent) {
}

ASDICoreFXManager* ASDICoreFXManager::GetFXManager(const UObject* WorldContextObject) {
    return NULL;
}

void ASDICoreFXManager::AddLightFlicker(ULightComponent* LightComponent, UCurveFloat* IntensityCurve, float StartTime, bool bLooping) {
}

ASDICoreFXManager::ASDICoreFXManager() {
    this->MaxLightFlickerUpdatesPerFrame = 0;
    this->LightFlickerUpdateIndex = 0;
}

