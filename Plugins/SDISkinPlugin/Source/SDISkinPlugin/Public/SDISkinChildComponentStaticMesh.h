#pragma once
#include "CoreMinimal.h"
#include "SDISkinStaticMesh.h"
#include "SDISkinChildComponentStaticMesh.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinChildComponentStaticMesh : public FSDISkinStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ChildComponentName;
    
    FSDISkinChildComponentStaticMesh();
};

