#pragma once
#include "CoreMinimal.h"
#include "SDISkinSkeletalMesh.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinStitchedSkeletalMesh.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinStitchedSkeletalMesh : public FSDISkinSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    FSDISkinStitchedSkeletalMesh();
};

