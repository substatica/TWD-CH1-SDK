#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIObjectPool.generated.h"

class UObject;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIObjectPool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoolSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PooledObjects;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UObject>, FName> ActiveObjects;
    
public:
    ASDIObjectPool();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2GetPoolSize(int32& Active, int32& Pooled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInsideAPool(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFromAPool(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    UObject* AcquireFromPool(FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary);
    
};

