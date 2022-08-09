#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SDIPlayerHandAdvanced.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "SkinDataVariantList.h"
#include "EGender.h"
#include "SDIPlayerHandLock.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerHand.generated.h"

class UTWDWidgetComponent;
class UHapticFeedbackEffect_Base;
class UTWDInventoryDataWidget;
class ASDIInventorySlot;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATWDPlayerHand : public ASDIPlayerHandAdvanced, public ITWDSeamlessTravelActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGender, FSkinDataVariantList> GenderSkinVariantLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* StaminaDrainLoopFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StaminaDrainLoopFeedbackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* StaminaActionFailedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* StaminaActionEndedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappledStabCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismemberStabCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* PauseWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PauseButtonPressFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform IKThrowTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IKThrowAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IKThrowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IKThrowCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IKThrowInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock IKThrowLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SimulatedMovementPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SimulatedMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SimulatedMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock SimulatedMovementLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StaminaDrainLoopFeedbackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastStaminaPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StabCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGoofyFingerGunFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGoofyFingerGunReadyToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPhysicalHandMeshHitTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastHeldActorHitTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* InventoryDataWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryDataWidgetDelaySeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UTWDInventoryDataWidget* InventoryDataWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryDataRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryDataRangeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryAngleThresholdDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryIdleVelocityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryIdleVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryIdleVelocityThresholdDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InventoryWidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle InventoryDataWidgetDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseWidgetOffsetZ;
    
public:
    ATWDPlayerHand();
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseWidgetComponentProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetHandHidden(bool bHide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStaminaActionFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStaminaActionEnded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhysicalHandMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyCheatModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingIKThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrappledStabCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDismemberStabCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStab() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

