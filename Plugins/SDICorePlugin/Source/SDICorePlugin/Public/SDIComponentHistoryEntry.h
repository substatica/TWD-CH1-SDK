#pragma once
#include "CoreMinimal.h"
#include "SDIComponentHistoryEntry.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIComponentHistoryEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> HitComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName BodyName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timestamp;
    
public:
    FSDIComponentHistoryEntry();
};

