#pragma once
#include "CoreMinimal.h"
#include "DefaultAttachment.h"
#include "Attachmentset.generated.h"

USTRUCT(BlueprintType)
struct FAttachmentset {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FDefaultAttachment> Attachments;
    
    TWD_API FAttachmentset();
};

