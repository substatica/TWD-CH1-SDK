#pragma once
#include "CoreMinimal.h"
#include "SDIRenderSettingOverrides.h"
#include "SDICollisionSettingOverrides.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinAttachment.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UObject> Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDICollisionSettingOverrides CollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRenderSettingOverrides RenderOverrides;
    
    FSDISkinAttachment();
};

