#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SDIVRGameUserSettings.generated.h"

class USDIVRGameUserSettings;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIVRGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeferredSaveSettingsRequested;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMicEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMicPermissionRequestedEver;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOculusSteamVR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USDIVRGameUserSettings* GetSDIVRGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMicPermissionRequestedEver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMicPermission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMicEnabled() const;
    
};

