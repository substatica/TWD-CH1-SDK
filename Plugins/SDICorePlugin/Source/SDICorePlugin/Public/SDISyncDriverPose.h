#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncDriverPose.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISyncDriverPose {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    uint32 FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Bones;
    
public:
    FSDISyncDriverPose();
};

