#pragma once
#include "CoreMinimal.h"
#include "SDISkinSectionalVariantSkeletalMeshSet.h"
#include "TWDSkinSkeletalMeshSetArmor.h"
#include "TWDSkinSkeletalMeshSet.generated.h"

USTRUCT(BlueprintType)
struct FTWDSkinSkeletalMeshSet : public FSDISkinSectionalVariantSkeletalMeshSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinGoreLevelWaveMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDSkinSkeletalMeshSetArmor Armor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDSkinSkeletalMeshSetArmor NonVRArmor;
    
    TWD_API FTWDSkinSkeletalMeshSet();
};

