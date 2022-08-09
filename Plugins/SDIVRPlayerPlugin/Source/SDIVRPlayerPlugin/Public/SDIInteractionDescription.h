#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIInteractionDescription.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInteractionDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName InputAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FKey Input;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableIcon;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bShowDescription;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bShowHoldIndicator;
    
    FSDIInteractionDescription();
};

