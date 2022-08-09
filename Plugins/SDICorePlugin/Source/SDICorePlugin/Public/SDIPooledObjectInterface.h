#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDIPooledObjectInterface.generated.h"

class ASDIObjectPool;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDICOREPLUGIN_API USDIPooledObjectInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIPooledObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ReturnToPoolNextFrame() PURE_VIRTUAL(ReturnToPoolNextFrame,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ReturnToPool() PURE_VIRTUAL(ReturnToPool,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsInsidePool() const PURE_VIRTUAL(IsInsidePool, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFromPool() const PURE_VIRTUAL(IsFromPool, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsBeingReturnedToPoolNextFrame() const PURE_VIRTUAL(IsBeingReturnedToPoolNextFrame, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIObjectPool* GetPool() const PURE_VIRTUAL(GetPool, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetAcquiredTimestamp() const PURE_VIRTUAL(GetAcquiredTimestamp, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual void CancelReturnToPoolNextFrame() PURE_VIRTUAL(CancelReturnToPoolNextFrame,);
    
};

