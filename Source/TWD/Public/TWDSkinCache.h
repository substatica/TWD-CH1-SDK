#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinCache.h"
#include "TWDSkinCacheLimits.h"
#include "TWDSkinCache.generated.h"

class ATWDCharacter;
class USDISkinObject;

UCLASS(Blueprintable)
class TWD_API UTWDSkinCache : public USDISkinCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDSkinCacheLimits> SkinCacheLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSkinCacheLimitMapInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<USDISkinObject>, FTWDSkinCacheLimits> SkinCacheLimitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ATWDCharacter*> HandledCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USDISkinObject>> HandledCharacterSkins;
    
public:
    UTWDSkinCache();
};

