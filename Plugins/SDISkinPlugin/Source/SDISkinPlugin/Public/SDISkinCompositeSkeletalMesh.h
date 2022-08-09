#pragma once
#include "CoreMinimal.h"
#include "Engine/SkeletalMesh.h"
#include "SDISkinCompositeSkeletalMeshMaterialMapping.h"
#include "SDISkinCompositeSkeletalMesh.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkinCompositeSkeletalMesh : public USkeletalMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<USkeletalMesh>> SourceMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<USkeletalMesh>, FSDISkinCompositeSkeletalMeshMaterialMapping> MeshComponentMaterialMapping;
    
public:
    USDISkinCompositeSkeletalMesh();
};

