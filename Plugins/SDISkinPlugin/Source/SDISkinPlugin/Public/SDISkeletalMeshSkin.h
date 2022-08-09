#pragma once
#include "CoreMinimal.h"
#include "SDISkinBasic.h"
#include "SDISkinSkeletalMesh.h"
#include "SDISkeletalMeshSkin.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkeletalMeshSkin : public USDISkinBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISkinSkeletalMesh BaseSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBaseSkeletalMeshForMerging;
    
    USDISkeletalMeshSkin();
};

