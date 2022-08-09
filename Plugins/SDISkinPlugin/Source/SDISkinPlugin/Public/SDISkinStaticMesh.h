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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICollisionSettingOverrides CollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIRenderSettingOverrides RenderOverrides;
    
    FSDISkinStaticMesh();
};

