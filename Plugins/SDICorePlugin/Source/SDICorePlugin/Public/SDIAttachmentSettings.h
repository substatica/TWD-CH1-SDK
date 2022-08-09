#pragma once
#include "CoreMinimal.h"
#include "SDIAttachmentSettingsEntry.h"
#include "SDIAttachmentSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAttachmentSettings : public FSDIAttachmentSettingsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<AActor>, FSDIAttachmentSettingsEntry> Overrides;
    
    FSDIAttachmentSettings();
};

