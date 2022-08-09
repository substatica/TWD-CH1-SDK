#include "TWDAnimInstanceHeadLook.h"

UTWDAnimInstanceHeadLook::UTWDAnimInstanceHeadLook() {
    this->CharacterType = EAnimInstanceHeadLookCharacterType::EHeadLookCharType_Walker;
    this->bIsHeadTracking = false;
    this->HeadInterpolateSpeed = 4.00f;
    this->HeadLookAtLocationMaxPitch = 70.00f;
    this->HeadLookAtLocationMinPitch = -40.00f;
    this->HeadLookAtLocationMaxYaw = 90.00f;
    this->HeadLookAtLocationMinYaw = -90.00f;
    this->LookAtAlpha_Head = 0.00f;
    this->LookAtAlpha_Neck02 = 0.00f;
    this->LookAtAlpha_Neck01 = 0.00f;
    this->LookAtAlpha_Spine03 = 0.00f;
    this->LookAtAlpha_Spine02 = 0.00f;
    this->LookAtAlpha_Spine01 = 0.00f;
    this->PlayerCapsuleHalfHeight = 88.00f;
    this->bUseIsEyeTrackingOnly = false;
    this->EyeTrackingOnlyInterpSpeed = 10.00f;
    this->Character = NULL;
    this->EyeUpDown = 0.00f;
    this->EyeLeftRight = 0.00f;
    this->LookAtAlpha_Head_Normalized = 0.00f;
    this->LookAtAlpha_Neck02_Normalized = 0.00f;
    this->LookAtAlpha_Neck01_Normalized = 0.00f;
    this->LookAtAlpha_Spine03_Normalized = 0.00f;
    this->LookAtAlpha_Spine02_Normalized = 0.00f;
    this->LookAtAlpha_Spine01_Normalized = 0.00f;
    this->EyeTrackingOnlyMultiplier = 0.00f;
}

