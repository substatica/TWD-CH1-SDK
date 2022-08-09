#pragma once
#include "CoreMinimal.h"
#include "Engine/SkeletalMesh.h"
#include "SDISkinCompositeSkeletalMeshMaterialMapping.h"
#include "SDISkinCompositeSkeletalMesh.generated.h"

UCLASS()
class SDISKINPLUGIN_API USDISkinCompositeSkeletalMesh : public USkeletalMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSet<TSoftObjectPtr<USkeletalMesh>> SourceMeshes;
    
    UPROPERTY(Transient)
    TMap<TSoftObjectPtr<USkeletalMesh>, FSDISkinCompositeSkeletalMeshMaterialMapping> MeshComponentMaterialMapping;
    
public:
    USDISkinCompositeSkeletalMesh();
};

