#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "UObject/Object.h"
#include "AkCommunicationSettingsWithCommSelection.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkSwitchInitializationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AKAUDIO_API UAkSwitchInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommunicationSettingsWithCommSelection CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UAkSwitchInitializationSettings();
    UFUNCTION(BlueprintCallable)
    void MigrateMultiCoreRendering(bool NewValue);
    
};

