#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDIPooledObjectBlueprintInterface.generated.h"

UINTERFACE(Blueprintable)
class SDICOREPLUGIN_API USDIPooledObjectBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIPooledObjectBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAcquiredFromPool();
    
};

