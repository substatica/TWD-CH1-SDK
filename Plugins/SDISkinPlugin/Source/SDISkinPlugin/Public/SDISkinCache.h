#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreGameInstanceSubObject.h"
#include "ESDISkinCacheScope.h"
#include "SDISkinCacheScope.h"
#include "SDISkinCache.generated.h"

class USkeletalMesh;
class AActor;
class USDISkinObject;
class UObject;
class USDISkinCompositeSkeletalMesh;

UCLASS(Blueprintable, Config=Game)
class SDISKINPLUGIN_API USDISkinCache : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCaching;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForMissingPreAuthoredMeshes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> GlobalSkins;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> GlobalSkinResources;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> IncompatibleFeatureLevelFallbackMeshes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, TSoftObjectPtr<USkeletalMesh>> IncompatibleFeatureLevelFallbackMeshesByClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESDISkinCacheScope, FSDISkinCacheScope> SkinCacheScopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USDISkinObject>, ESDISkinCacheScope> CachedSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> HandledObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USDISkinObject>> VerifiedCachedSkins;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<USDISkinCompositeSkeletalMesh>> WeakCompositeMeshReferences;
    
public:
    USDISkinCache();
    UFUNCTION(BlueprintCallable)
    static void CacheMapSkins(const UObject* WorldContextObject, const TArray<UClass*>& Templates, bool bAsync);
    
};

