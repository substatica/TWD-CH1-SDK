#pragma once
#include "CoreMinimal.h"
#include "EAkCommSystem.h"
#include "AkCommunicationSettings.h"
#include "AkCommunicationSettingsWithCommSelection.generated.h"

USTRUCT(BlueprintType)
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EAkCommSystem CommunicationSystem;
    
    AKAUDIO_API FAkCommunicationSettingsWithCommSelection();
};

