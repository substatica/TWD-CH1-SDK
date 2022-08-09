#pragma once
#include "CoreMinimal.h"
#include "TWDStabModifierSphere.h"
#include "TWDStabBone.generated.h"

USTRUCT(BlueprintType)
struct FTWDStabBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPushMotionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPullMotionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDStabModifierSphere> ModifierSpheres;
    
    TWD_API FTWDStabBone();
};

