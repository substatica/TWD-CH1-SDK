#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "SDICharacter.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/SpringInterpolator.h"
#include "SDICharacterAdvanced.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDICharacterAdvanced : public ASDICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVRFacingForMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchToCrawlHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCancelMaxAngleOffsetDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxAngleOffsetDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrawlEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat EyeHeightOffsetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat HMDEyeHeightAllowedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator EyeHeightSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator EyeHeightOffsetSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlwaysSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeverCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlCrawl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CtrlCrouchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DesiredEyeHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DesiredEyeHeightOffsetFromFloor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bRepIsCrawling, meta=(AllowPrivateAccess=true))
    bool bRepIsCrawling;
    
    ASDICharacterAdvanced();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnCrawl(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredEyeHeightOffsetFromFloor(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredEyeHeightOffset(float Offset, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartCrawl(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bRepIsCrawling();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndCrawl(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    FHitResult MoveWithCollision(const FVector& MovementDelta, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    FHitResult MoveToWithCollision(const FVector& MovementTarget, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrawling() const;
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateLeft(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputTurnAtRateAxis(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEyeHeightSpringPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredEyeHeightOffsetFromFloor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredEyeHeightOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultEyeHeightFromFloor(bool bIgnoreCrouch, bool bIgnoreCrawl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEyeHeightOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void Crawl(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMimicTeleportTo(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    
    UFUNCTION(BlueprintCallable)
    bool CanCrawl();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentEyeHeightOffsetFromFloor(float OffsetDelta, bool bAffectSpring);
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentEyeHeightOffset(float Offset, bool bReset);
    
};

