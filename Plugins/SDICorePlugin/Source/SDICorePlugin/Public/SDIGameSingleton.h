#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDIObjectReferences.h"
#include "UObject/NoExportTypes.h"
#include "SDIGameSingleton.generated.h"

class USDICoreAssetDatabase;
class UTexture2D;
class UTexture;

UCLASS(BlueprintType)
class SDICOREPLUGIN_API USDIGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(GlobalConfig)
    FSoftClassPath AssetDatabaseClass;
    
    UPROPERTY(GlobalConfig)
    TArray<FName> ReplicatedNames;
    
    UPROPERTY(Transient)
    USDICoreAssetDatabase* AssetDatabase;
    
    UPROPERTY(Transient)
    FSDIObjectReferences References;
    
public:
    USDIGameSingleton();
private:
    UFUNCTION()
    void UpdateAsyncLoadingReferences();
    
public:
    UFUNCTION(BlueprintCallable)
    static UTexture* SyncLoadTexture(const TSoftObjectPtr<UTexture>& TextureToLoad);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* SyncLoadImage(const TSoftObjectPtr<UTexture2D>& ImageToLoad);
    
    UFUNCTION(BlueprintCallable)
    static UClass* SyncLoadClass(const TSoftObjectPtr<UObject>& AssetToLoad);
    
    UFUNCTION(BlueprintCallable)
    static UObject* SyncLoadAsset(const TSoftObjectPtr<UObject>& AssetToLoad);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveReference(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    USDICoreAssetDatabase* K2GetAssetDatabase() const;
    
    UFUNCTION(BlueprintPure)
    bool HasReference(UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddReference(UObject* Object);
    
};

