#pragma once
#include "CoreMinimal.h"
#include "SDISkinMaterial.h"
#include "SDIRenderSettingOverrides.h"
#include "SDICollisionSettingOverrides.h"
#include "SDISkinSkeletalMesh.generated.h"

class UObject;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSkeletalMesh : public FSDISkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICollisionSettingOverrides CollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIRenderSettingOverrides RenderOverrides;
    
    FSDISkinSkeletalMesh();
};

