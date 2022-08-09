#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandAdvanced.h"
#include "Curves/CurveFloat.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "Engine/EngineTypes.h"
#include "EGender.h"
#include "SkinDataVariantList.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandLock.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerHand.generated.h"

class UTWDWidgetComponent;
class UHapticFeedbackEffect_Base;
class UTWDInventoryDataWidget;
class ASDIInventorySlot;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATWDPlayerHand : public ASDIPlayerHandAdvanced, public ITWDSeamlessTravelActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EGender, FSkinDataVariantList> GenderSkinVariantLists;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* StaminaDrainLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve StaminaDrainLoopFeedbackCurve;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* StaminaActionFailedFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* StaminaActionEndedFeedback;
    
    UPROPERTY(EditAnywhere)
    float GrappledStabCooldown;
    
    UPROPERTY(EditAnywhere)
    float DismemberStabCooldown;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWidgetComponent* PauseWidgetComponent;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* PauseButtonPressFeedback;
    
    UPROPERTY(Transient)
    FTransform IKThrowTransform;
    
    UPROPERTY(Transient)
    FVector IKThrowAxis;
    
    UPROPERTY(Transient)
    FVector IKThrowVelocity;
    
    UPROPERTY(Transient)
    FVector IKThrowCenter;
    
    UPROPERTY(Transient)
    float IKThrowInterp;
    
    UPROPERTY(Transient)
    FSDIPlayerHandLock IKThrowLock;
    
    UPROPERTY(Transient)
    TArray<FTransform> SimulatedMovementPath;
    
    UPROPERTY(Transient)
    float SimulatedMovementDuration;
    
    UPROPERTY(Transient)
    float SimulatedMovementTime;
    
    UPROPERTY(Transient)
    FSDIPlayerHandLock SimulatedMovementLock;
    
    UPROPERTY(Transient)
    int32 StaminaDrainLoopFeedbackId;
    
    UPROPERTY(Transient)
    float LastStaminaPct;
    
    UPROPERTY(Transient)
    float StabCooldown;
    
    UPROPERTY(Transient)
    bool bGoofyFingerGunFired;
    
    UPROPERTY(Transient)
    bool bGoofyFingerGunReadyToFire;
    
    UPROPERTY(Transient)
    float LastPhysicalHandMeshHitTimeStamp;
    
    UPROPERTY(Transient)
    float LastHeldActorHitTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWidgetComponent* InventoryDataWidgetComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryDataWidgetDelaySeconds;
    
private:
    UPROPERTY(Export, Transient)
    UTWDInventoryDataWidget* InventoryDataWidget;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryDataRange;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryDataRangeDelta;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryAngleThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryAngleThresholdDelta;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryIdleVelocityTime;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryIdleVelocityThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryIdleVelocityThresholdDelta;
    
    UPROPERTY(EditDefaultsOnly)
    FVector InventoryWidgetOffset;
    
    UPROPERTY(Transient)
    FTimerHandle InventoryDataWidgetDelayTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float PauseWidgetOffsetZ;
    
public:
    ATWDPlayerHand();
    UFUNCTION(BlueprintPure)
    bool WouldGripInventorySlot(ASDIInventorySlot*& OutSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void StopSimulatingMovement();
    
    UFUNCTION(BlueprintCallable)
    void StopSimulatingIKThrow();
    
    UFUNCTION(BlueprintCallable)
    bool SimulateMovementVelocity(TArray<FTransform>& RelativePath, float Velocity, bool bInterrupt, bool bAddCurrentTransformAsStart);
    
    UFUNCTION(BlueprintCallable)
    bool SimulateMovementDuration(TArray<FTransform>& RelativePath, float Duration, bool bInterrupt, bool bAddCurrentTransformAsStart);
    
    UFUNCTION(BlueprintCallable)
    void SimulateIKThrow(const FVector& ThrowVel, bool bInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void SetStabCooldown(float Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPauseWidgetComponentProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetHandHidden(bool bHide);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStaminaActionFailed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStaminaActionEnded();
    
protected:
    UFUNCTION()
    void OnPhysicalHandMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnHeldActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnApplyGameUserSettings();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnApplyCheatModes();
    
    UFUNCTION(BlueprintPure)
    bool IsSimulatingMovement() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSimulatingIKThrow() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrappledStabCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetDismemberStabCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStab() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

