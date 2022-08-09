#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncDriverPose.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISyncDriverPose {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    uint32 FrameNumber;
    
    UPROPERTY(Transient)
    float Alpha;
    
    UPROPERTY(Transient)
    TArray<FTransform> Bones;
    
public:
    FSDISyncDriverPose();
};

