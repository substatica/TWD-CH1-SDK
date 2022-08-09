#pragma once
#include "CoreMinimal.h"
#include "TWDStabModifierSphere.h"
#include "TWDStabBone.generated.h"

USTRUCT(BlueprintType)
struct FTWDStabBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float StabPushMotionMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StabPullMotionMultiplier;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FTWDStabModifierSphere> ModifierSpheres;
    
    TWD_API FTWDStabBone();
};

