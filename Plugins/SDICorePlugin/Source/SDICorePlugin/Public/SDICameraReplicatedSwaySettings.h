#pragma once
#include "CoreMinimal.h"
#include "SDICameraSwaySettings.h"
#include "SDICameraReplicatedSwaySettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraReplicatedSwaySettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDICameraSwaySettings Settings;
    
public:
    FSDICameraReplicatedSwaySettings();
};

