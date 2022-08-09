#include "SDICoreAssetDatabase.h"

class UObject;
class UTexture2D;

bool USDICoreAssetDatabase::IsGuidChildOfClass(const FGuid& Child, UClass* Parent) const {
    return false;
}

bool USDICoreAssetDatabase::IsGuidChildOf(const FGuid& Child, const FGuid& Parent) const {
    return false;
}

bool USDICoreAssetDatabase::IsClassChildOfGuid(UClass* Child, const FGuid& Parent) const {
    return false;
}

bool USDICoreAssetDatabase::IsAssetGuid(const FGuid& Guid, bool bUseLoadingFallback) const {
    return false;
}

FText USDICoreAssetDatabase::GetText(const FGuid& Guid, FName Key) const {
    return FText::GetEmpty();
}

FString USDICoreAssetDatabase::GetPath(const FGuid& Guid) const {
    return TEXT("");
}

TArray<UObject*> USDICoreAssetDatabase::GetObjects(const TArray<FGuid>& Guids) const {
    return TArray<UObject*>();
}

UObject* USDICoreAssetDatabase::GetObject(const FGuid& Guid) const {
    return NULL;
}

float USDICoreAssetDatabase::GetNumber(const FGuid& Guid, FName Key) const {
    return 0.0f;
}

FString USDICoreAssetDatabase::GetName(const FGuid& Guid) const {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> USDICoreAssetDatabase::GetImage(const FGuid& Guid, FName Key) const {
    return NULL;
}

int32 USDICoreAssetDatabase::GetGuidReferences(const FGuid& Guid, FName Key, TArray<FGuid>& GuidRefs) const {
    return 0;
}

FGuid USDICoreAssetDatabase::GetGuidByName(const FString& Name, UClass* ClassFilter, bool bAllowSubstr, bool bCaseSensitive) const {
    return FGuid{};
}

FGuid USDICoreAssetDatabase::GetGuidByAsset(const TSoftObjectPtr<UObject>& Asset) const {
    return FGuid{};
}

FText USDICoreAssetDatabase::GetClassExportDisplayName(UClass* Class) const {
    return FText::GetEmpty();
}

FText USDICoreAssetDatabase::GetClassExportDescription(UClass* Class) const {
    return FText::GetEmpty();
}

TArray<UClass*> USDICoreAssetDatabase::GetClasses(const TArray<FGuid>& Guids) const {
    return TArray<UClass*>();
}

UClass* USDICoreAssetDatabase::GetClass(const FGuid& Guid) const {
    return NULL;
}

UClass* USDICoreAssetDatabase::GetAssetType(const FGuid& Guid) const {
    return NULL;
}

TArray<TSoftObjectPtr<UObject>> USDICoreAssetDatabase::GetAssets(const TArray<FGuid>& Guids) const {
    return TArray<TSoftObjectPtr<UObject>>();
}

TSoftObjectPtr<UObject> USDICoreAssetDatabase::GetAsset(const FGuid& Guid) const {
    return NULL;
}

int32 USDICoreAssetDatabase::GetAllAssetGuids(TArray<FGuid>& Guids, UClass* ClassFilter) const {
    return 0;
}

bool USDICoreAssetDatabase::FindText(const FGuid& Guid, FName Key, FText& OutText) const {
    return false;
}

void USDICoreAssetDatabase::ClearResolvedText() {
}

USDICoreAssetDatabase::USDICoreAssetDatabase() {
}

