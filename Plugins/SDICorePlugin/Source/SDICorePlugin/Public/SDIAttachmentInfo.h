#pragma once
#include "CoreMinimal.h"
#include "SDITransform_NetQuantize.h"
#include "SDIAttachmentInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* AttachParent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite)
    FSDITransform_NetQuantize RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FSDITransform_NetQuantize WorldTransform;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAttachmentSet;
    
    FSDIAttachmentInfo();
};

