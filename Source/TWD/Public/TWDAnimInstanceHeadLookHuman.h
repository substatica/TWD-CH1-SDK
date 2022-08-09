#pragma once
#include "CoreMinimal.h"
#include "TWDAnimInstanceHeadLook.h"
#include "UObject/NoExportTypes.h"
#include "TWDAnimInstanceHeadLookHuman.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWD_API UTWDAnimInstanceHeadLookHuman : public UTWDAnimInstanceHeadLook {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat HeadLookRotation;
    
    UTWDAnimInstanceHeadLookHuman();
};

