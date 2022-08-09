#pragma once
#include "CoreMinimal.h"
#include "SDISkinObject.h"
#include "SDISkinChildComponentStaticMesh.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDISkinChildComponentSkeletalMesh.h"
#include "SDISkinChildComponentMaterial.h"
#include "SDISkinAttachment.h"
#include "SDIRandomSkinScalarParam.h"
#include "SDIRandomSkinTextureParam.h"
#include "SDIRandomSkinColorParam.h"
#include "SDIRandomSkinParamSet.h"
#include "SDISkinBasic.generated.h"

UCLASS()
class SDISKINPLUGIN_API USDISkinBasic : public USDISkinObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinStitchedSkeletalMesh> StitchedSkeletalMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinStitchedStaticMesh> StitchedStaticMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinChildComponentSkeletalMesh> ChildComponentSkeletalMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinChildComponentStaticMesh> ChildComponentStaticMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinChildComponentMaterial> ChildComponentMaterials;
    
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
    
    USDISkinBasic();
};

