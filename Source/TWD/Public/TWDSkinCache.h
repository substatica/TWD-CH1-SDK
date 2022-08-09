#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDSkinCacheLimits.h"
#include "SDISkinCache.h"
#include "TWDSkinCache.generated.h"

class ATWDCharacter;
class USDISkinObject;

UCLASS()
class TWD_API UTWDSkinCache : public USDISkinCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, VisibleAnywhere)
    TArray<FTWDSkinCacheLimits> SkinCacheLimits;
    
    UPROPERTY(Transient)
    bool bSkinCacheLimitMapInitialized;
    
    UPROPERTY(Transient)
    TMap<TSoftClassPtr<USDISkinObject>, FTWDSkinCacheLimits> SkinCacheLimitMap;
    
    UPROPERTY(Transient)
    TSet<ATWDCharacter*> HandledCharacters;
    
    UPROPERTY(Transient)
    TSet<TSubclassOf<USDISkinObject>> HandledCharacterSkins;
    
public:
    UTWDSkinCache();
};

