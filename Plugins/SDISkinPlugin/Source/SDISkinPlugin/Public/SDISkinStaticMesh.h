#pragma once
#include "CoreMinimal.h"
#include "SDISkinMaterial.h"
#include "SDIRenderSettingOverrides.h"
#include "SDICollisionSettingOverrides.h"
#include "SDISkinStaticMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinStaticMesh : public FSDISkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDICollisionSettingOverrides CollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRenderSettingOverrides RenderOverrides;
    
    FSDISkinStaticMesh();
};

