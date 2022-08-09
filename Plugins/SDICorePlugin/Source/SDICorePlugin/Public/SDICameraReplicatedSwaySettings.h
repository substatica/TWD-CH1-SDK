#pragma once
#include "CoreMinimal.h"
#include "SDICameraSwaySettings.h"
#include "SDICameraReplicatedSwaySettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraReplicatedSwaySettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    FSDICameraSwaySettings Settings;
    
public:
    FSDICameraReplicatedSwaySettings();
};

