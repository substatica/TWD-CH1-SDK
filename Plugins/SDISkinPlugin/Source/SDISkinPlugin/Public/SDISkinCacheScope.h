#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinCacheScope.generated.h"

class USDISkinCompositeSkeletalMesh;
class UObject;
class USDISkinObject;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinCacheScope {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSoftObjectPath> LoadingReferences;
    
    UPROPERTY(Transient)
    TMap<FSoftObjectPath, UObject*> References;
    
    UPROPERTY(Transient)
    TSet<USDISkinCompositeSkeletalMesh*> CompositeMeshes;
    
    UPROPERTY(Transient)
    TSet<TSubclassOf<USDISkinObject>> Skins;
    
    UPROPERTY(Transient)
    bool bCaching;
    
    UPROPERTY(Transient)
    int32 LoadingCounter;
    
public:
    FSDISkinCacheScope();
};

