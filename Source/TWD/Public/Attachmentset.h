#pragma once
#include "CoreMinimal.h"
#include "DefaultAttachment.h"
#include "Attachmentset.generated.h"

USTRUCT(BlueprintType)
struct FAttachmentset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDefaultAttachment> Attachments;
    
    TWD_API FAttachmentset();
};

