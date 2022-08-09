#include "SDIGameSingleton.h"

class USDICoreAssetDatabase;
class UTexture2D;
class UTexture;
class UObject;

void USDIGameSingleton::UpdateAsyncLoadingReferences() {
}

UTexture* USDIGameSingleton::SyncLoadTexture(const TSoftObjectPtr<UTexture>& TextureToLoad) {
    return NULL;
}

UTexture2D* USDIGameSingleton::SyncLoadImage(const TSoftObjectPtr<UTexture2D>& ImageToLoad) {
    return NULL;
}

UClass* USDIGameSingleton::SyncLoadClass(const TSoftObjectPtr<UObject>& AssetToLoad) {
    return NULL;
}

UObject* USDIGameSingleton::SyncLoadAsset(const TSoftObjectPtr<UObject>& AssetToLoad) {
    return NULL;
}

bool USDIGameSingleton::RemoveReference(UObject* Object) {
    return false;
}

USDICoreAssetDatabase* USDIGameSingleton::K2GetAssetDatabase() const {
    return NULL;
}

bool USDIGameSingleton::HasReference(UObject* Object) const {
    return false;
}

bool USDIGameSingleton::AddReference(UObject* Object) {
    return false;
}

USDIGameSingleton::USDIGameSingleton() {
    this->AssetDatabase = NULL;
}

