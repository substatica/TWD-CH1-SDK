#pragma once
#include "CoreMinimal.h"
#include "SDICorePlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerCameraManager.generated.h"

class UMaterialParameterCollectionInstance;
class UCurveFloat;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NonTransient)
class SDIVRPLAYERPLUGIN_API ASDIPlayerCameraManager : public ASDICorePlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TurnVignetteCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveVignetteCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* VignetteParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteAttackExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteDecayExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteOpacityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteComfort;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UMaterialParameterCollectionInstance> VignetteParameterCollectionInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VignetteStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VignetteHoldTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastCameraParentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLastCameraParentTransformValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVignetteSettings(float& StrengthMultiplier, float& OpacityMultiplier, float& Comfort) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCameraParentTransform() const;
    
};

