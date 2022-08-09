#pragma once
#include "CoreMinimal.h"
#include "SDICoreAttributeComponentSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreAttributeComponentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxBoost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRegenEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowRegenFromZero;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RegenDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RegenRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RegenPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RegenMinPerInterval;
    
    FSDICoreAttributeComponentSettings();
};

