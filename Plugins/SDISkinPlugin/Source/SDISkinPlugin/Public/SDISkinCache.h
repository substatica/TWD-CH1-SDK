#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESDISkinCacheScope.h"
#include "SDICoreGameInstanceSubObject.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinCacheScope.h"
#include "SDISkinCache.generated.h"

class USDISkinCompositeSkeletalMesh;
class USkeletalMesh;
class AActor;
class USDISkinObject;
class UObject;

UCLASS(Config=Game)
class SDISKINPLUGIN_API USDISkinCache : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    bool bEnableCaching;
    
    UPROPERTY(Config)
    bool bCheckForMissingPreAuthoredMeshes;
    
    UPROPERTY(Config)
    TArray<FSoftClassPath> GlobalSkins;
    
    UPROPERTY(Config)
    TArray<FSoftObjectPath> GlobalSkinResources;
    
    UPROPERTY(Config)
    TArray<TSoftObjectPtr<USkeletalMesh>> IncompatibleFeatureLevelFallbackMeshes;
    
    UPROPERTY(Config)
    TMap<TSoftClassPtr<AActor>, TSoftObjectPtr<USkeletalMesh>> IncompatibleFeatureLevelFallbackMeshesByClass;
    
    UPROPERTY(Transient)
    TMap<ESDISkinCacheScope, FSDISkinCacheScope> SkinCacheScopes;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<USDISkinObject>, ESDISkinCacheScope> CachedSkins;
    
    UPROPERTY(Transient)
    TSet<UObject*> HandledObjects;
    
    UPROPERTY(Transient)
    TSet<TSubclassOf<USDISkinObject>> VerifiedCachedSkins;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<USDISkinCompositeSkeletalMesh>> WeakCompositeMeshReferences;
    
public:
    USDISkinCache();
    UFUNCTION(BlueprintCallable)
    static void CacheMapSkins(const UObject* WorldContextObject, const TArray<UClass*>& Templates, bool bAsync);
    
};

