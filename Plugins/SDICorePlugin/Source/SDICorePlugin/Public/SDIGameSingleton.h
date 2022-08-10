#pragma once
#include "CoreMinimal.h"
#include "SDIObjectReferences.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SDIGameSingleton.generated.h"

class UTexture2D;
class UTexture;
class USDICoreAssetDatabase;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SDICOREPLUGIN_API USDIGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath AssetDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FName> ReplicatedNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDICoreAssetDatabase* AssetDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIObjectReferences References;
    
public:
    USDIGameSingleton();
private:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreAssetDatabase* K2GetAssetDatabase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReference(UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddReference(UObject* Object);
    
};

