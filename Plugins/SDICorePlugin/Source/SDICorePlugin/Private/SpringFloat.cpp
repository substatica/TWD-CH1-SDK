#include "SpringFloat.h"

FSpringFloat::FSpringFloat() {
    this->Target = 0.00f;
    this->Current = 0.00f;
    this->Velocity = 0.00f;
    this->SpringK = 0.00f;
    this->SpringDamp = 0.00f;
    this->bAllowOvershoot = false;
}

