#pragma once
#include "CoreMinimal.h"
#include "SDISurfaceSound.h"
#include "SDISurfaceSoundBoneFilter.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDISurfaceSoundBoneFilter : public FSDISurfaceSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    FSDISurfaceSoundBoneFilter();
};

