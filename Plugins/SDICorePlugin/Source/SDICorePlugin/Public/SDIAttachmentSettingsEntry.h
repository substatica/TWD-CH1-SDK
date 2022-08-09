#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAttachmentSettingsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LocalAttachPoint;
    
    UPROPERTY(EditAnywhere)
    FName ParentAttachPoint;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    FSDIAttachmentSettingsEntry();
};

