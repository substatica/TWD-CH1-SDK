#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIObjectPool.generated.h"

class UObject;

UCLASS()
class SDICOREPLUGIN_API ASDIObjectPool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StartingPoolSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxPoolSize;
    
private:
    UPROPERTY(Transient)
    TArray<UObject*> PooledObjects;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UObject>, FName> ActiveObjects;
    
public:
    ASDIObjectPool();
    UFUNCTION(BlueprintPure)
    int32 K2GetPoolSize(int32& Active, int32& Pooled) const;
    
    UFUNCTION(BlueprintPure)
    static bool IsInsideAPool(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static bool IsFromAPool(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    UObject* AcquireFromPool(FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary);
    
};

