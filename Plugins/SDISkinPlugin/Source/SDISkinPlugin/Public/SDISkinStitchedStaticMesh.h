#pragma once
#include "CoreMinimal.h"
#include "SDISkinStaticMesh.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinStitchedStaticMesh.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinStitchedStaticMesh : public FSDISkinStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRedirectComponentHitCallbacks;
    
    FSDISkinStitchedStaticMesh();
};

