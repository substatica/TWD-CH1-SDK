#pragma once
#include "CoreMinimal.h"
#include "SDISkinStaticMesh.h"
#include "SDISkinBasic.h"
#include "SDIStaticMeshSkin.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDIStaticMeshSkin : public USDISkinBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISkinStaticMesh StaticMesh;
    
    USDIStaticMeshSkin();
};

