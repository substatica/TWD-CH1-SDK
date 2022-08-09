#include "SDIRigidBodyRadialImpulse.h"

FSDIRigidBodyRadialImpulse::FSDIRigidBodyRadialImpulse() {
    this->Radius = 0.00f;
    this->Strength = 0.00f;
    this->Falloff = RIF_Constant;
    this->bVelChange = false;
}

