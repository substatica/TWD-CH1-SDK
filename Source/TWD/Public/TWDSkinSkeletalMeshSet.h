#pragma once
#include "CoreMinimal.h"
#include "SDISkinSectionalVariantSkeletalMeshSet.h"
#include "TWDSkinSkeletalMeshSetArmor.h"
#include "TWDSkinSkeletalMeshSet.generated.h"

USTRUCT(BlueprintType)
struct FTWDSkinSkeletalMeshSet : public FSDISkinSectionalVariantSkeletalMeshSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinGoreLevelWaveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDSkinSkeletalMeshSetArmor Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDSkinSkeletalMeshSetArmor NonVRArmor;
    
    TWD_API FTWDSkinSkeletalMeshSet();
};

