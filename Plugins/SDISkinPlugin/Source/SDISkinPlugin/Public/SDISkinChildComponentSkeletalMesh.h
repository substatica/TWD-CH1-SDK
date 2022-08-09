#pragma once
#include "CoreMinimal.h"
#include "SDISkinSkeletalMesh.h"
#include "SDISkinChildComponentSkeletalMesh.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinChildComponentSkeletalMesh : public FSDISkinSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildComponentName;
    
    FSDISkinChildComponentSkeletalMesh();
};

