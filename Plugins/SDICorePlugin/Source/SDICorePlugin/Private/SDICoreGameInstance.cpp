#include "SDICoreGameInstance.h"
#include "Templates/SubclassOf.h"

class USDICoreGameInstanceSubObject;
class UObject;
class UTexture;

USDICoreGameInstanceSubObject* USDICoreGameInstance::K2GetSubObject(const UObject* WorldContextObject, TSubclassOf<USDICoreGameInstanceSubObject> SubObjectClass) {
    return NULL;
}

bool USDICoreGameInstance::IsInitialized() const {
    return false;
}

UTexture* USDICoreGameInstance::GetInputKeyTexture(const FKey& Key) const {
    return NULL;
}

USDICoreGameInstance::USDICoreGameInstance() {
    this->bInitialized = false;
}

