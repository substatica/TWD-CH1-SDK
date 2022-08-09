#pragma once
#include "CoreMinimal.h"
#include "SDISkinStaticMesh.h"
#include "SDISkinBasic.h"
#include "SDIStaticMeshSkin.generated.h"

UCLASS()
class SDISKINPLUGIN_API USDIStaticMeshSkin : public USDISkinBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDISkinStaticMesh StaticMesh;
    
    USDIStaticMeshSkin();
};

