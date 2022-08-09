#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "SDISDIActiveRagdollComponentRagdollDeactivatedSignatureDelegate.h"
#include "SDISDIActiveRagdollComponentRagdollActivatedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIActiveRagdollComponent.generated.h"

class UPhysicsAsset;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIActiveRagdollComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoneChainMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ActiveBoneOverrideMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicalAnimationDataProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalAnimationData OverridePhysicalAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEngageOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionActiveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHackRecreatePhysicsStateOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultStrengthMultiplyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ActiveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bToggledOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlendWeightInterpolating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollActive;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UPhysicsAsset> CachedPhysicsAsset;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<int16> InstanceBoneIndices;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<int16> ActiveInstanceBoneIndices;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<UPrimitiveComponent>, TEnumAsByte<ECollisionChannel>> IgnoredCollisionComponents;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISDIActiveRagdollComponentRagdollActivatedSignature OnRagdollActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISDIActiveRagdollComponentRagdollDeactivatedSignature OnRagdollDeactivatedDelegate;
    
    USDIActiveRagdollComponent();
    UFUNCTION(BlueprintCallable)
    void UpdatePhysicsAsset();
    
    UFUNCTION(BlueprintCallable)
    bool TurnOn(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void TurnOff(bool bAllowBlendOut);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneActiveOverride(FName BoneName, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnStitchedComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsOn(float& OutActiveTimeRemaining) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidBone(const FName& BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveBone(const FName& BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultStrengthMultiplyer() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBoneActiveOverrides(const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void ClearBoneActiveOverride(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActiveRagdollAllowed() const;
    
};

