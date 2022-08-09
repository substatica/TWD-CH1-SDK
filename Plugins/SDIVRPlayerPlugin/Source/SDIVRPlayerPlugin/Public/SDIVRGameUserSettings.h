#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SDIVRGameUserSettings.generated.h"

class USDIVRGameUserSettings;

UCLASS()
class SDIVRPLAYERPLUGIN_API USDIVRGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bDeferredSaveSettingsRequested;
    
    UPROPERTY(Config)
    bool bMicEnabled;
    
    UPROPERTY(Config)
    bool bMicPermissionRequestedEver;
    
    UPROPERTY(Config)
    bool bMicPermission;
    
    USDIVRGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetMicPermissionRequestedEver(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMicPermission(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMicEnabled(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void RequestDeferredSaveSettings();
    
    UFUNCTION(BlueprintPure)
    bool IsEnableOculusSteamVR() const;
    
    UFUNCTION(BlueprintPure)
    static USDIVRGameUserSettings* GetSDIVRGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    bool GetMicPermissionRequestedEver() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMicPermission() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMicEnabled() const;
    
};

