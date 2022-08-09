#pragma once
#include "CoreMinimal.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDISkinAttachment.h"
#include "SDIRandomSkinScalarParam.h"
#include "SDIRandomSkinTextureParam.h"
#include "SDIRandomSkinColorParam.h"
#include "SDIRandomSkinParamSet.h"
#include "SDISkinSkeletalMeshSet.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSkeletalMeshSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinStitchedSkeletalMesh> StitchedSkeletalMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinStitchedStaticMesh> StitchedStaticMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinAttachment> Attachments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSDIRandomSkinScalarParam> ScalarParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSDIRandomSkinColorParam> ColorParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSDIRandomSkinTextureParam> TextureParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FSDIRandomSkinParamSet> ParamSetMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    FSDISkinSkeletalMeshSet();
};

