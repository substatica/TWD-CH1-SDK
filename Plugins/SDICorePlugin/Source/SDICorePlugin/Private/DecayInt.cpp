#include "DecayInt.h"

FDecayInt::FDecayInt() {
    this->Value = 0;
    this->Delay = 0.00f;
    this->Duration = 0.00f;
    this->Rate = 0.00f;
    this->Acc = 0.00f;
    this->ClassReference = NULL;
    this->bMergeResetDelay = false;
    this->bMergeAddDuration = false;
    this->bMergeResetDuration = false;
    this->bMergeResetAcc = false;
    this->FXObject = NULL;
    this->Fraction = 0.00f;
    this->Timer = 0.00f;
}

