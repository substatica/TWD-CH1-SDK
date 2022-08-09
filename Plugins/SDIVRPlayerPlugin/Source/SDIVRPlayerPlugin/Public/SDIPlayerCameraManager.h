#pragma once
#include "CoreMinimal.h"
#include "SDICorePlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerCameraManager.generated.h"

class UCurveFloat;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(NonTransient)
class SDIVRPLAYERPLUGIN_API ASDIPlayerCameraManager : public ASDICorePlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* TurnVignetteCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* MoveVignetteCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* VignetteParameterCollection;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteAttackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteAttackExp;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteDecaySpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteDecayExp;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteHoldTime;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteStrengthMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteOpacityMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float VignetteComfort;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialParameterCollectionInstance> VignetteParameterCollectionInst;
    
    UPROPERTY(Transient)
    float VignetteStrength;
    
    UPROPERTY(Transient)
    float VignetteHoldTimer;
    
    UPROPERTY(Transient)
    FTransform LastCameraParentTransform;
    
    UPROPERTY(Transient)
    bool bLastCameraParentTransformValid;
    
    UPROPERTY(Transient)
    bool bInitialHMDReset;
    
public:
    ASDIPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void SetVignetteSettings(float StrengthMultiplier, float OpacityMultiplier, float Comfort);
    
    UFUNCTION(BlueprintCallable)
    void ResetVR(bool bRotation, bool bPosition, bool bHeight);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetHMDTrackingOrigin();
    
public:
    UFUNCTION(BlueprintPure)
    void GetVignetteSettings(float& StrengthMultiplier, float& OpacityMultiplier, float& Comfort) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetCameraParentTransform() const;
    
};

