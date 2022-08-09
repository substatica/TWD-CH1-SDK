#pragma once
#include "CoreMinimal.h"
#include "SDICharacter.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICharacterAdvanced.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDICharacterAdvanced : public ASDICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUseVRFacingForMovement;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float BaseTurnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float CrouchToCrawlHoldTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintCancelMaxAngleOffsetDeg;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintMaxAngleOffsetDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrawlEyeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRFloat EyeHeightOffsetRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRFloat HMDEyeHeightAllowedRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator EyeHeightSpring;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator EyeHeightOffsetSpring;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bAlwaysSprint;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bNeverCrouch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlCrawl;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CtrlCrouchTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DesiredEyeHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DesiredEyeHeightOffsetFromFloor;
    
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_bRepIsCrawling)
    bool bRepIsCrawling;
    
    ASDICharacterAdvanced();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnCrawl(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredEyeHeightOffsetFromFloor(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredEyeHeightOffset(float Offset, bool bReset);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartCrawl(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
protected:
    UFUNCTION()
    void OnRep_bRepIsCrawling();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnEndCrawl(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    FHitResult MoveWithCollision(const FVector& MovementDelta, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    FHitResult MoveToWithCollision(const FVector& MovementTarget, bool bTeleport);
    
    UFUNCTION(BlueprintPure)
    bool IsCrawling() const;
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateLeft(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateAxis(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetEyeHeightSpringPosition() const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredEyeHeightOffsetFromFloor() const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredEyeHeightOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultEyeHeightFromFloor(bool bIgnoreCrouch, bool bIgnoreCrawl) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentEyeHeightOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void Crawl(bool bClientSimulation);
    
    UFUNCTION(Client, Reliable)
    void ClientMimicTeleportTo(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    
    UFUNCTION(BlueprintCallable)
    bool CanCrawl();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentEyeHeightOffsetFromFloor(float OffsetDelta, bool bAffectSpring);
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentEyeHeightOffset(float Offset, bool bReset);
    
};

