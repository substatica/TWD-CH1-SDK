#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TWDAnimNotify_Footstep.generated.h"

class UObject;

UCLASS(CollapseCategories)
class UTWDAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* Sound;
    
    UPROPERTY(EditAnywhere)
    bool bAttenuateBasedOnNoiseLevel;
    
    UPROPERTY(EditAnywhere)
    float NoiseLevelAttenuationExponent;
    
    UPROPERTY(EditAnywhere)
    FName FootBone;
    
    UPROPERTY(EditAnywhere)
    FString AKVolumeName;
    
    UPROPERTY(EditAnywhere)
    FString AKSwitchGroup;
    
    UTWDAnimNotify_Footstep();
};

