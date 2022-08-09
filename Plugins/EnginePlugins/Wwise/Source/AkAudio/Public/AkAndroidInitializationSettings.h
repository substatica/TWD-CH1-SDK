#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "UObject/Object.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAndroidAdvancedInitializationSettings.h"
#include "AkAndroidInitializationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AKAUDIO_API UAkAndroidInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;
    
    UAkAndroidInitializationSettings();
    UFUNCTION(BlueprintCallable)
    void MigrateMultiCoreRendering(bool NewValue);
    
};

