#pragma once
#include "CoreMinimal.h"
#include "SDISkinSkeletalMeshSet.h"
#include "SDISkinSectionalVariantSkeletalMeshSet.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSectionalVariantSkeletalMeshSet : public FSDISkinSkeletalMeshSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDISkinSkeletalMeshSet> Variants;
    
    FSDISkinSectionalVariantSkeletalMeshSet();
};

