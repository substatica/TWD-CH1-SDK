#pragma once
#include "CoreMinimal.h"
#include "SDISkinStaticMesh.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinStitchedStaticMesh.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinStitchedStaticMesh : public FSDISkinStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedirectComponentHitCallbacks;
    
    FSDISkinStitchedStaticMesh();
};

