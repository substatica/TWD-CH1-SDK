#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIRigidBodyImpulse.generated.h"

USTRUCT()
struct SDICOREPLUGIN_API FSDIRigidBodyImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector Impulse;
    
    UPROPERTY(Transient)
    bool bUseLocation;
    
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(Transient)
    FName BoneName;
    
    UPROPERTY(Transient)
    bool bVelChange;
    
    FSDIRigidBodyImpulse();
};

