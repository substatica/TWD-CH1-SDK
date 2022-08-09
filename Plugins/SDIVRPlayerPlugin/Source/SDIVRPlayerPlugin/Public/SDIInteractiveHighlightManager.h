#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDIInteractiveHighlightManager.generated.h"

class ASDIInteractiveHighlightManager;
class UObject;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInteractiveHighlightManager : public AActor {
    GENERATED_BODY()
public:
    ASDIInteractiveHighlightManager();
    UFUNCTION(BlueprintCallable)
    static ASDIInteractiveHighlightManager* GetInteractiveHighlightManager(const UObject* WorldContextObject);
    
};

