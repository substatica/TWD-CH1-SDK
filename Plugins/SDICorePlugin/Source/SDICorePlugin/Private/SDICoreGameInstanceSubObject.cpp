#include "SDICoreGameInstanceSubObject.h"

class USDICoreGameInstance;

void USDICoreGameInstanceSubObject::Shutdown_Implementation() {
}

bool USDICoreGameInstanceSubObject::IsInitialized() const {
    return false;
}

void USDICoreGameInstanceSubObject::Init_Implementation() {
}

USDICoreGameInstance* USDICoreGameInstanceSubObject::GetGameInstance() const {
    return NULL;
}

USDICoreGameInstanceSubObject::USDICoreGameInstanceSubObject() {
    this->bInitialized = false;
}

