#pragma once
#include "CoreMinimal.h"
#include "SDISkinChildComponentSkeletalMesh.h"
#include "SDISkinChildComponentMaterial.h"
#include "SDISkinObject.h"
#include "SDISkinChildComponentStaticMesh.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDISkinAttachment.h"
#include "SDIRandomSkinScalarParam.h"
#include "SDIRandomSkinTextureParam.h"
#include "SDIRandomSkinColorParam.h"
#include "SDIRandomSkinParamSet.h"
#include "SDISkinBasic.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkinBasic : public USDISkinObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinStitchedSkeletalMesh> StitchedSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinStitchedStaticMesh> StitchedStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinChildComponentSkeletalMesh> ChildComponentSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinChildComponentStaticMesh> ChildComponentStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinChildComponentMaterial> ChildComponentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinAttachment> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIRandomSkinScalarParam> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIRandomSkinColorParam> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIRandomSkinTextureParam> TextureParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDIRandomSkinParamSet> ParamSetMap;
    
    USDISkinBasic();
};

