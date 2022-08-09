#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIComponentReplacement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> Parent;
    
    UPROPERTY(VisibleDefaultsOnly)
    FName ParentName;
    
    UPROPERTY(VisibleDefaultsOnly)
    FName ParentSocket;
    
    UPROPERTY()
    FTransform RelTransform;
    
public:
    FSDIComponentReplacement();
};

