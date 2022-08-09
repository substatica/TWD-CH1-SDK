#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreGameInstanceSubObject.h"
#include "SDIObjectPoolManagerEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDIObjectPoolManager.generated.h"

class UObject;
class ASDIObjectPool;

UCLASS(Config=Game)
class SDICOREPLUGIN_API USDIObjectPoolManager : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, VisibleAnywhere)
    bool bEnablePooling;
    
    UPROPERTY(Config, VisibleAnywhere)
    TArray<FSDIObjectPoolManagerEntry> Pools;
    
    UPROPERTY(Transient)
    TMap<UClass*, ASDIObjectPool*> PoolMap;
    
public:
    USDIObjectPoolManager();
    UFUNCTION(BlueprintCallable)
    static void AddPoolStatic(const UObject* WorldContextObject, UClass* InObjectClass, int32 InStartingPoolSize, int32 InMaxPoolSize, TSubclassOf<ASDIObjectPool> InPoolClass);
    
    UFUNCTION(BlueprintCallable)
    static UObject* AcquireFromPoolStatic(const UObject* WorldContextObject, const UClass*& ObjectClass, FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary);
    
};

