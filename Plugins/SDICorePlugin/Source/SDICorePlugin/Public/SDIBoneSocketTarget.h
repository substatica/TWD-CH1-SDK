#pragma once
#include "CoreMinimal.h"
#include "SDISocketReference.h"
#include "BoneContainer.h"
#include "SDIBoneSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct FSDIBoneSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISocketReference SocketReference;
    
    SDICOREPLUGIN_API FSDIBoneSocketTarget();
};

