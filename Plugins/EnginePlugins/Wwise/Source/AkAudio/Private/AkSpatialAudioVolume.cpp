#include "AkSpatialAudioVolume.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkRoomComponent.h"
#include "AkLateReverbComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume() {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    this->bInterior = true;
}

