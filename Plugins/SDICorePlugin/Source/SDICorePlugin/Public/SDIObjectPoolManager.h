#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDICoreGameInstanceSubObject.h"
#include "SDIObjectPoolManagerEntry.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIObjectPoolManager.generated.h"

class UObject;
class ASDIObjectPool;

UCLASS(Blueprintable, Config=Game)
class SDICOREPLUGIN_API USDIObjectPoolManager : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePooling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIObjectPoolManagerEntry> Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, ASDIObjectPool*> PoolMap;
    
public:
    USDIObjectPoolManager();
    UFUNCTION(BlueprintCallable)
    static void AddPoolStatic(const UObject* WorldContextObject, UClass* InObjectClass, int32 InStartingPoolSize, int32 InMaxPoolSize, TSubclassOf<ASDIObjectPool> InPoolClass);
    
    UFUNCTION(BlueprintCallable)
    static UObject* AcquireFromPoolStatic(const UObject* WorldContextObject, /*const*/ UClass*& ObjectClass, FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary);
    
};

