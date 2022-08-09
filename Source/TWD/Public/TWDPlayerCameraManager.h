#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIPlayerCameraManager.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDPlayerCameraManager.generated.h"

class ATWDHMDCameraActor;
class ATWDPlayerCage;
class UStaticMesh;
class AActor;
class UStaticMeshComponent;
class UCameraComponent;
class UMaterialInterface;

UCLASS(NonTransient)
class ATWDPlayerCameraManager : public ASDIPlayerCameraManager, public ITWDSeamlessTravelActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* CageMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* CageMeshMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDPlayerCage> PlayerCageBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAttachPlayerCageToCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ATWDHMDCameraActor> HMDCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ATWDHMDCameraActor> NonVRHMDCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoUpdateCachedUserHeight;
    
    UPROPERTY(Transient)
    ATWDHMDCameraActor* HMDCamera;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UStaticMeshComponent> CageMeshComponent;
    
    UPROPERTY(Transient)
    ATWDPlayerCage* PlayerCage;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> HMDCameraAttachActor;
    
    UPROPERTY(Transient)
    bool bHMDCameraFrozen;
    
    UPROPERTY(Transient)
    float HMDCameraFrozenFadeOutTime;
    
    UPROPERTY(Transient)
    float HMDCameraFrozenFadeInTime;
    
    UPROPERTY(Transient)
    bool bHMDCameraFrozenApplyRotation;
    
    UPROPERTY(Transient)
    float HMDCameraFrozenYaw;
    
    UPROPERTY(Transient)
    FTransform HMDCameraFrozenLerpStart;
    
    UPROPERTY(Transient)
    bool bHMDCameraFrozenLerping;
    
    UPROPERTY(Transient)
    bool bVRWasReset;
    
    UPROPERTY(Transient)
    bool bManualCameraResetLocationSet;
    
    UPROPERTY(Transient)
    bool bManualCameraResetLocationOverrideHMDHeight;
    
    UPROPERTY(Transient)
    FVector ManualCameraResetLocation;
    
    UPROPERTY(Transient)
    FRotator ManualCameraResetRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector HMDCameraOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 HMDCameraOffsetWasResetCounter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HMDCameraHeightAboveFloor;
    
    UPROPERTY(Transient)
    float CachedHeightAdjustTimer;
    
public:
    ATWDPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintCallable)
    void SetManualHMDCameraResetPosition(bool bSet, bool bOverrideHeight, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetHMDCamera(bool bResetLocation, bool bResetRotation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnApplyGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    bool IsUnfreezingHMDCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnfreezeLerpingHMDCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHMDCameraFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerCage* GetPlayerCage() const;
    
    UFUNCTION(BlueprintPure)
    ATWDHMDCameraActor* GetHMDCamera(bool bCreate) const;
    
    UFUNCTION(BlueprintCallable)
    FColor GetFadeColor();
    
    UFUNCTION(BlueprintPure)
    FTransform GetCameraTransform() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeHMDCamera();
    
    
    // Fix for true pure virtual functions not being implemented
};

