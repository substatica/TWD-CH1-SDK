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

class AActor;
class ATWDHMDCameraActor;
class ATWDPlayerCage;
class UStaticMesh;
class UStaticMeshComponent;
class UCameraComponent;
class UMaterialInterface;

UCLASS(Blueprintable, NonTransient)
class ATWDPlayerCameraManager : public ASDIPlayerCameraManager, public ITWDSeamlessTravelActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CageMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CageMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDPlayerCage> PlayerCageBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachPlayerCageToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATWDHMDCameraActor> HMDCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATWDHMDCameraActor> NonVRHMDCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateCachedUserHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDHMDCameraActor* HMDCamera;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UStaticMeshComponent> CageMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDPlayerCage* PlayerCage;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> HMDCameraAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHMDCameraFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HMDCameraFrozenFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HMDCameraFrozenFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHMDCameraFrozenApplyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HMDCameraFrozenYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform HMDCameraFrozenLerpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHMDCameraFrozenLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVRWasReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bManualCameraResetLocationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bManualCameraResetLocationOverrideHMDHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ManualCameraResetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ManualCameraResetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HMDCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HMDCameraOffsetWasResetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HMDCameraHeightAboveFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedHeightAdjustTimer;
    
public:
    ATWDPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintCallable)
    void SetManualHMDCameraResetPosition(bool bSet, bool bOverrideHeight, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetHMDCamera(bool bResetLocation, bool bResetRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfreezingHMDCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfreezeLerpingHMDCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHMDCameraFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerCage* GetPlayerCage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDHMDCameraActor* GetHMDCamera(bool bCreate) const;
    
    UFUNCTION(BlueprintCallable)
    FColor GetFadeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCameraTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeHMDCamera();
    
    
    // Fix for true pure virtual functions not being implemented
};

