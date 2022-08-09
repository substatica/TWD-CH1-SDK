#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraReplicatedRecoilSettings.h"
#include "SDICameraRecoilEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraRecoilEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDICameraReplicatedRecoilSettings Settings;
    
    UPROPERTY(Transient)
    FRotator DesiredRotation;
    
    UPROPERTY(Transient)
    FRotator DesiredRotationSign;
    
    UPROPERTY(Transient)
    FRotator CurrentRotation;
    
    UPROPERTY(Transient)
    FRotator InputCompensation;
    
    UPROPERTY(Transient)
    float Timer;
    
public:
    FSDICameraRecoilEntry();
};

