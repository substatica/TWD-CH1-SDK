#pragma once
#include "CoreMinimal.h"
#include "TWDSkinSkeletalMeshSet.h"
#include "SDISkinSectionalVariant.h"
#include "TWDCharacterSkin.generated.h"

UCLASS(Config=Game)
class UTWDCharacterSkin : public USDISkinSectionalVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTWDSkinSkeletalMeshSet> PreAuthored;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PreAuthoredDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTWDSkinSkeletalMeshSet> hair;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTWDSkinSkeletalMeshSet> head;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTWDSkinSkeletalMeshSet> Torso;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTWDSkinSkeletalMeshSet> Leg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HairDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeadDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TorsoDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LegDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> ScalarDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScalarDuplicateTolerance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> ColorDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ColorChannelDuplicateTolerance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> TextureDuplicateWeightMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRestrictHairDuplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRestrictHeadDuplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRestrictTorsoDuplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRestrictLegDuplication;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> RestrictScalarParams;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> RestrictColorParams;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> RestrictTextureParams;
    
public:
    UTWDCharacterSkin();
};

