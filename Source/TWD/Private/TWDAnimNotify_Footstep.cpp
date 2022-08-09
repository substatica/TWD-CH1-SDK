#include "TWDAnimNotify_Footstep.h"

UTWDAnimNotify_Footstep::UTWDAnimNotify_Footstep() {
    this->Sound = NULL;
    this->bAttenuateBasedOnNoiseLevel = true;
    this->NoiseLevelAttenuationExponent = 1.00f;
    this->AKVolumeName = TEXT("FS_Vol");
}

