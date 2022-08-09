#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "SDISDIActiveRagdollComponentRagdollDeactivatedSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "SDISDIActiveRagdollComponentRagdollActivatedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIActiveRagdollComponent.generated.h"

class UPhysicsAsset;
class UPrimitiveComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIActiveRagdollComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> BoneChainMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> ActiveBoneOverrideMap;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintProfile;
    
    UPROPERTY(EditAnywhere)
    FName PhysicalAnimationDataProfile;
    
    UPROPERTY(EditAnywhere)
    FPhysicalAnimationData OverridePhysicalAnimationData;
    
    UPROPERTY(EditAnywhere)
    bool bEnableGravity;
    
    UPROPERTY(EditAnywhere)
    float BlendInSpeed;
    
    UPROPERTY(EditAnywhere)
    float BlendOutSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bEngageOnCollision;
    
    UPROPERTY(EditAnywhere)
    float CollisionActiveDuration;
    
    UPROPERTY(EditAnywhere)
    bool bHackRecreatePhysicsStateOnCollision;
    
    UPROPERTY(Transient)
    FName RootBoneName;
    
    UPROPERTY(Transient)
    float DefaultStrengthMultiplyer;
    
    UPROPERTY(Transient)
    float ActiveTimer;
    
    UPROPERTY(Transient)
    bool bToggledOn;
    
    UPROPERTY(Transient)
    bool bBlendWeightInterpolating;
    
    UPROPERTY(Transient)
    bool bRagdollActive;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPhysicsAsset> CachedPhysicsAsset;
    
    UPROPERTY(Transient)
    TArray<int16> InstanceBoneIndices;
    
    UPROPERTY(Transient)
    TArray<int16> ActiveInstanceBoneIndices;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UPrimitiveComponent>, TEnumAsByte<ECollisionChannel>> IgnoredCollisionComponents;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDISDIActiveRagdollComponentRagdollActivatedSignature OnRagdollActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
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
    
    UFUNCTION()
    void OnStitchedComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintPure)
    bool K2IsOn(float& OutActiveTimeRemaining) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidBone(const FName& BoneName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveBone(const FName& BoneName) const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultStrengthMultiplyer() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBoneActiveOverrides(const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void ClearBoneActiveOverride(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    bool ActiveRagdollAllowed() const;
    
};

