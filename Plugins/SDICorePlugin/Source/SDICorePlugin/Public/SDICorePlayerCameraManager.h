#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SDICameraSettings.h"
#include "Engine/Scene.h"
#include "SDICorePlayerCameraManager.generated.h"

class UMatineeCameraShake;
class UObject;

UCLASS(NonTransient)
class SDICOREPLUGIN_API ASDICorePlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSDICameraSettings> CameraSettings;
    
public:
    ASDICorePlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    bool UpdateCameraPostProcessSettings(int32 ID, const FPostProcessSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraSettingsWeight(int32 ID, float Weight);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraSettingsInterpolatedAlphaByDistance(int32 ID, float Distance, bool bIgnoreInterpolatedBlend);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraSettingsInterpolatedAlpha(int32 ID, float NewAlpha, bool bIgnoreInterpolatedBlend);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraSettingsFieldOfView(int32 ID, float FieldOfView);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraPostProcessSettings(int32 ID, const FPostProcessSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOwnedCameraSettingsOverrideBlendOut(UObject* InOwner, float OverrideBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOwnedCameraSettings(UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraSettingsOverrideBlendOut(int32 ID, float OverrideBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraSettings(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool ReactivateCameraSettingsOverrideWeight(int32 ID, float Weight, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    bool ReactivateCameraSettingsOverrideBlendIn(int32 ID, float BlendInTime, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    bool ReactivateCameraSettings(int32 ID, UObject* InOwner);
    
    UFUNCTION(BlueprintPure)
    bool IsCameraShakeActive(UMatineeCameraShake* ShakeInst) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraSettingsWeight(int32 ID, float& OutWeight) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraSettingsInterpolatedAlpha(int32 ID, float& OutAlpha, bool bFinalAlpha) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraSettingsFieldOfView(int32 ID, float& OutFieldOfView) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraPostProcessSettings(int32 ID, FPostProcessSettings& OutPostProcessSettings) const;
    
    UFUNCTION(BlueprintPure)
    bool CameraSettingsActive(int32 ID, bool bAllowBlendingOut) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraSettingsOverrideWeight(const FSDICameraSettings& Settings, float Weight, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraSettingsOverrideBlendIn(const FSDICameraSettings& Settings, float BlendInTime, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraSettings(const FSDICameraSettings& Settings, UObject* InOwner);
    
};

