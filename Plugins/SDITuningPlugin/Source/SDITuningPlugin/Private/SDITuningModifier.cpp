#include "SDITuningModifier.h"

FSDITuningModifier::FSDITuningModifier() {
    this->BaseOwnerDef = NULL;
    this->OwnerDef = NULL;
    this->PreModifier = 0.00f;
    this->Add = 0.00f;
    this->PostModifier = 0.00f;
    this->bReplicated = false;
}

