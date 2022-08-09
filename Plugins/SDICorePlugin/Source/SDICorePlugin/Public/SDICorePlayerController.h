#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "RFloat.h"
#include "RRotatorExp.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCollisionShape.h"
#include "SDIDamageInflictedReplicationInterface.h"
#include "SDIForceFeedbackSettings.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIInputStick.h"
#include "SDICameraReplicatedRecoilSettings.h"
#include "SDITimestampInputButton.h"
#include "SDIBlendOption.h"
#include "SDICameraSwaySettings.h"
#include "SDICameraReplicatedSwaySettings.h"
#include "ESDIUtilityAIDifficulty.h"
#include "UObject/NoExportTypes.h"
#include "SDIRadialDamageEvent.h"
#include "SDICameraRecoilEntry.h"
#include "SDICameraSwayEntry.h"
#include "AlphaBlend.h"
#include "Engine/EngineTypes.h"
#include "SDICameraControlNotify.h"
#include "AlphaBlend.h"
#include "SDICameraShakeSettings.h"
#include "SDICorePlayerControllerInputDeviceChangedSignatureDelegate.h"
#include "SDICorePlayerControllerADSChangedSignatureDelegate.h"
#include "SDIReplicatedDamageData.h"
#include "UObject/NoExportTypes.h"
#include "SDIPointDamageEvent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SDICameraRecoilSettings.h"
#include "SDICorePlayerController.generated.h"

class ASDICoreCharacter;
class USDICoreUtilityAI;
class USDICoreUtilityAIPathFollowingComponent;
class APlayerState;
class USDIAnimNotifyState_CameraControl;
class UCurveFloat;
class APawn;
class AActor;
class AController;
class USDICoreDOTComponent;
class UDamageType;

UCLASS()
class SDICOREPLUGIN_API ASDICorePlayerController : public APlayerController, public ISDIDamageInflictedReplicationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bRecoilUseInputCompensation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFlinchUseInputCompensation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator ADSInputScale;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp RotationRateAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator RotationRateDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp ADSRotationRateAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator ADSRotationRateDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableAimAssistOnGamepad;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableAimAssistOnNonGamepad;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FRFloat AimAssistRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> AimAssistLOSTraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> AimAssistOverlapChannel;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp AimAssistGravity;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistGravityNoInputScale;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistGravityWithInputScale;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistGravityAgainstInputScale;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp AimAssistEngageGravity;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistEngageDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float AimAssistEngageDecayRate;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp AimAssistRotationRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputYawRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputPitchRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputRollRateScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIInputStick InputLookStick;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USDICoreUtilityAI> SmartUtilityAIClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USDICoreUtilityAI> DumbUtilityAIClass;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<USDICoreUtilityAIPathFollowingComponent> UtilityAIPathFollowingComponentClass;
    
    UPROPERTY(EditAnywhere)
    FSDITimestampInputButton StatFileButton;
    
    UPROPERTY(EditAnywhere)
    float MinStatFileRecordTime;
    
    UPROPERTY(EditAnywhere)
    float LockonEngageTime;
    
    UPROPERTY(EditAnywhere)
    FSDIBlendOption LockonEngageBlend;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator LockonYawSpring;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator LockonPitchSpring;
    
    UPROPERTY(EditAnywhere)
    FRotator MaxLockonVelocity;
    
    UPROPERTY(EditAnywhere)
    float LockonYawMaxOffsetByRadius;
    
    UPROPERTY(EditAnywhere)
    FRFloat LockonYawMaxOffsetByRadiusRange;
    
    UPROPERTY(EditAnywhere)
    FSDIBlendOption LockonYawMaxOffsetByRadiusRangeCurve;
    
    UPROPERTY(EditAnywhere)
    float LockonYawMaxOffsetByPitch;
    
    UPROPERTY(EditAnywhere)
    FRFloat LockonYawMaxOffsetByPitchRange;
    
    UPROPERTY(EditAnywhere)
    FSDIBlendOption LockonYawMaxOffsetByPitchRangeCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator LockonYawMaxOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator LockonPitchMaxOffsetSpring;
    
    UPROPERTY(EditAnywhere)
    float AnimatedControlRotationOffsetRecoverTime;
    
    UPROPERTY(Transient)
    TArray<FSDICameraRecoilEntry> RecoilEntries;
    
    UPROPERTY(Transient)
    TArray<FSDICameraRecoilEntry> FlinchEntries;
    
    UPROPERTY(Transient)
    TArray<FSDICameraSwayEntry> SwayEntries;
    
    UPROPERTY(Transient)
    FRotator RotationRateInput;
    
    UPROPERTY(Transient)
    FRotator CurrentRotationRate;
    
    UPROPERTY(Transient)
    float AimAssistEngageTime;
    
    UPROPERTY(Transient)
    bool bWasAimAssistEnabled;
    
    UPROPERTY(Transient)
    bool bIsAimAssistEnabled;
    
    UPROPERTY(Transient)
    float RecenterCameraTimer;
    
    UPROPERTY(Transient)
    float RecenterCameraDuration;
    
    UPROPERTY(Transient)
    FRotator RecenterCameraStart;
    
    UPROPERTY(Transient)
    FRotator RecenterCameraTarget;
    
    UPROPERTY(Transient)
    FRotator RecenterCameraLastRot;
    
    UPROPERTY(Transient)
    EAlphaBlendOption RecenterCameraBlend;
    
    UPROPERTY(Transient)
    UCurveFloat* RecenterCameraBlendCustomCurve;
    
    UPROPERTY(Transient)
    bool bRecenterCameraPitch;
    
    UPROPERTY(Transient)
    bool bRecenterCameraYaw;
    
    UPROPERTY(Transient)
    bool bRecenterCameraRoll;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OldAttachPawn;
    
    UPROPERTY(Transient)
    TSubclassOf<USDICoreUtilityAI> LastCharacterUtilityAIClass;
    
    UPROPERTY(Transient)
    USDICoreUtilityAI* UtilityAI;
    
    UPROPERTY(Transient)
    bool bGamepadInput;
    
    UPROPERTY(Transient)
    bool bNonGamepadInput;
    
    UPROPERTY(Transient)
    bool bUsingGamepad;
    
    UPROPERTY(Transient)
    bool bRecordingStats;
    
    UPROPERTY(Transient)
    bool bRecordingStatsUntilStopped;
    
    UPROPERTY(Transient)
    FTimerHandle RecordingStatsTimerHandle;
    
    UPROPERTY(Transient)
    FRotator RecoilControlRotationOffset;
    
    UPROPERTY(Transient)
    FRotator FlinchControlRotationOffset;
    
    UPROPERTY(Transient)
    FRotator SwayControlRotationOffset;
    
    UPROPERTY(Transient)
    float SwayControlRotationOffsetRecoverSpeed;
    
    UPROPERTY(Transient)
    FRotator LockonControlRotationOffset;
    
    UPROPERTY(Transient)
    FRotator PrevCumulativeControlRotationOffset;
    
    UPROPERTY(Transient)
    float LockonTime;
    
    UPROPERTY(Transient)
    FRotator LockonStartRotation;
    
    UPROPERTY(Transient)
    FHitResult LockonTarget;
    
    UPROPERTY(Transient)
    TArray<FSDICameraControlNotify> ActiveCameraControlNotifies;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<USDIAnimNotifyState_CameraControl> LastActiveCameraControlNotify;
    
    UPROPERTY(Transient)
    FAlphaBlend CameraControlInputEaseIn;
    
    UPROPERTY(Transient)
    FRotator AnimatedControlRotationBlendStart;
    
    UPROPERTY(Transient)
    float AnimatedControlRotationBlendTime;
    
    UPROPERTY(Transient)
    float AnimatedControlRotationBlendDuration;
    
    UPROPERTY(Transient)
    FRotator AnimatedControlRotationOffset;
    
    UPROPERTY(Transient)
    FRotator AnimatedControlRotationOffsetRecover;
    
    UPROPERTY(Transient)
    FRotator AnimatedControlRotationOffsetRecoverSpeed;
    
    UPROPERTY(Transient)
    FAlphaBlend ResetViewPitchBlend;
    
    UPROPERTY(Transient)
    FAlphaBlend ResetViewPitchInputEaseIn;
    
    UPROPERTY(Transient)
    TMap<int32, FSDICameraShakeSettings> PendingShakes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PureRotationInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator EasedRotationInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator CameraControlRotationInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator RecoilRotationInput;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDICorePlayerControllerInputDeviceChangedSignature InputDeviceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDICorePlayerControllerADSChangedSignature ADSChangedDelegate;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepDamageInflictedData)
    FSDIReplicatedDamageData RepDamageInflictedData;
    
public:
    ASDICorePlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool UtilityAIConsumingInput() const;
    
    UFUNCTION()
    void StopStatFileRecording();
    
    UFUNCTION(BlueprintCallable)
    void StopSDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void StopSDICameraShake(const FSDICameraShakeSettings& Shake, bool bImmediately);
    
    UFUNCTION()
    void StartStatFileRecording();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSpectating(bool bWaitingForStartOrSpawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetInactive(bool bWaitingForStartOrSpawn);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatForceServerCrash();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplySDIRadialDamageEventTo(AActor* Actor, float Damage, const FSDIRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplySDIPointDamageEventTo(AActor* Actor, float Damage, const FSDIPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplyRadialDamageEventTo(AActor* Actor, float Damage, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplyPointDamageEventTo(AActor* Actor, float Damage, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSway(int32 SwayId);
    
    UFUNCTION(BlueprintPure)
    bool ProjectWorldShapeToWidgetPositionWithDimensions(const FSDITransformCollisionShape& Shape, FVector& OutViewportPosition, FVector2D& OutViewportDimensions);
    
    UFUNCTION(BlueprintPure)
    bool ProjectWorldLocationToWidgetPositionWithDistance(const FVector& WorldLocation, FVector& OutViewportPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlaySDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void PlaySDICameraShake(const FSDICameraShakeSettings& Shake);
    
    UFUNCTION(BlueprintNativeEvent)
    void PawnDetached(APawn* InPawn);
    
    UFUNCTION(BlueprintNativeEvent)
    void PawnAttached(APawn* InPawn);
    
protected:
    UFUNCTION()
    void OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnADSChanged(ASDICoreCharacter* Char, bool bIsADS);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnderCameraControl() const;
    
    UFUNCTION(BlueprintPure)
    bool IsThirdPerson() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSmartMonkey() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRecenteringCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMonkey() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLockonEngaged(FHitResult& OutTarget, float& OutTime) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstPerson() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool IsAimAssistEnabled() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION()
    void InputStatFileReleased();
    
    UFUNCTION()
    void InputStatFilePressed();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void InputDeviceChanged(bool bIsUsingGamePad);
    
public:
    UFUNCTION(BlueprintPure)
    bool InCinematicMode() const;
    
    UFUNCTION(BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintPure)
    USDICoreUtilityAI* GetUtilityAI() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetPureControlRotation() const;
    
    UFUNCTION(BlueprintPure)
    ESDIUtilityAIDifficulty GetMonkeyDifficulty() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetInputAxisKeys(FName Axis, bool bGamepad, bool bNonGamepad) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetInputAxes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetInputActions() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetInputActionKeys(FName Action, bool bGamepad, bool bNonGamepad) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotationWithoutAnimatedOffset() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetActiveInputAxisKeys(FName Axis) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetActiveInputActionKeys(FName Action) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopRecenterCamera();
    
    UFUNCTION(Client, Reliable)
    void ClientRemoveSway(int32 SwayId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecenterCameraToPawn(float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecenterCamera(FRotator Rotation, float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll);
    
    UFUNCTION(Client, Reliable)
    void ClientAddSway(const FSDICameraReplicatedSwaySettings& Sway);
    
    UFUNCTION(Client, Reliable)
    void ClientAddRecoil(const FSDICameraReplicatedRecoilSettings& Recoil);
    
    UFUNCTION(Client, Reliable)
    void ClientAddFlinch(const FSDICameraReplicatedRecoilSettings& Flinch);
    
    UFUNCTION(BlueprintCallable)
    void AddYawInputAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSway(const FSDICameraSwaySettings& Sway, FRotator InScale);
    
    UFUNCTION(BlueprintCallable)
    void AddRollInputAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void AddRecoil(const FSDICameraRecoilSettings& Recoil, FRotator InScale);
    
    UFUNCTION(BlueprintCallable)
    void AddPitchInputAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void AddFlinch(const FSDICameraRecoilSettings& Flinch, FRotator InScale);
    
    
    // Fix for true pure virtual functions not being implemented
};

