#pragma once
#include "CoreMinimal.h"
#include "SDIRecoilSettings.h"
#include "RFloatExp.h"
#include "UObject/NoExportTypes.h"
#include "RVector.h"
#include "RRotator.h"
#include "SDIRecoil.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIRecoil {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRecoilSettings PrimaryRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRecoilSettings SecondaryRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLinkSecondaryDurationToPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTwoHandedOverridePrimaryWithSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPhysicsBasedRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp PhysicsImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform PhysicsImpulseRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRVector PhysicsImpulseOffsetVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRRotator PhysicsImpulseOffsetRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTwoHandedPhysicsImpulseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp TwoHandPhysicsImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TwoHandPhysicsImpulseRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRVector TwoHandPhysicsImpulseOffsetVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRRotator TwoHandPhysicsImpulseOffsetRot;
    
    FSDIRecoil();
};

