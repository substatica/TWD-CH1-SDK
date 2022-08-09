#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "SDIInputStick.h"
#include "AlphaBlend.h"
#include "RFloat.h"
#include "SDIRadialDamageEvent.h"
#include "SDIDamageInflictedReplicationInterface.h"
#include "RRotatorExp.h"
#include "InputCoreTypes.h"
#include "SDICorePlayerControllerInputDeviceChangedSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "SDICameraReplicatedRecoilSettings.h"
#include "Engine/EngineTypes.h"
#include "SDITimestampInputButton.h"
#include "SDIBlendOption.h"
#include "SDICameraSwaySettings.h"
#include "SDICameraReplicatedSwaySettings.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraRecoilEntry.h"
#include "SDIPointDamageEvent.h"
#include "SDICameraSwayEntry.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SDICameraControlNotify.h"
#include "AlphaBlend.h"
#include "SDICameraShakeSettings.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICorePlayerControllerADSChangedSignatureDelegate.h"
#include "SDIReplicatedDamageData.h"
#include "SDIForceFeedbackSettings.h"
#include "SDITransformCollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraRecoilSettings.h"
#include "SDICorePlayerController.generated.h"

class ASDICoreCharacter;
class USDICoreUtilityAI;
class USDICoreUtilityAIPathFollowingComponent;
class UCurveFloat;
class APawn;
class USDIAnimNotifyState_CameraControl;
class AActor;
class AController;
class UDamageType;
class USDICoreDOTComponent;
class APlayerState;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICorePlayerController : public APlayerController, public ISDIDamageInflictedReplicationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecoilUseInputCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlinchUseInputCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ADSInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp RotationRateAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRateDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp ADSRotationRateAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ADSRotationRateDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAimAssistOnGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAimAssistOnNonGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat AimAssistRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> AimAssistLOSTraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> AimAssistOverlapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp AimAssistGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistGravityNoInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistGravityWithInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistGravityAgainstInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp AimAssistEngageGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistEngageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistEngageDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp AimAssistRotationRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputYawRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputPitchRateScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRollRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIInputStick InputLookStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> SmartUtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> DumbUtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAIPathFollowingComponent> UtilityAIPathFollowingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton StatFileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStatFileRecordTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonEngageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonEngageBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator LockonYawSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator LockonPitchSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxLockonVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonYawMaxOffsetByRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat LockonYawMaxOffsetByRadiusRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonYawMaxOffsetByRadiusRangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonYawMaxOffsetByPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat LockonYawMaxOffsetByPitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonYawMaxOffsetByPitchRangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator LockonYawMaxOffsetSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator LockonPitchMaxOffsetSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatedControlRotationOffsetRecoverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICameraRecoilEntry> RecoilEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICameraRecoilEntry> FlinchEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICameraSwayEntry> SwayEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RotationRateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimAssistEngageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecenterCameraTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecenterCameraDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RecenterCameraStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RecenterCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RecenterCameraLastRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption RecenterCameraBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecenterCameraBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecenterCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecenterCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecenterCameraRoll;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APawn> OldAttachPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> LastCharacterUtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDICoreUtilityAI* UtilityAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGamepadInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNonGamepadInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecordingStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecordingStatsUntilStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RecordingStatsTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RecoilControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator FlinchControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator SwayControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SwayControlRotationOffsetRecoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LockonControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator PrevCumulativeControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LockonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LockonStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LockonTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICameraControlNotify> ActiveCameraControlNotifies;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USDIAnimNotifyState_CameraControl> LastActiveCameraControlNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend CameraControlInputEaseIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AnimatedControlRotationBlendStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimatedControlRotationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimatedControlRotationBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AnimatedControlRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AnimatedControlRotationOffsetRecover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AnimatedControlRotationOffsetRecoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend ResetViewPitchBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend ResetViewPitchInputEaseIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSDICameraShakeSettings> PendingShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator PureRotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator EasedRotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CameraControlRotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RecoilRotationInput;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICorePlayerControllerInputDeviceChangedSignature InputDeviceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICorePlayerControllerADSChangedSignature ADSChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepDamageInflictedData, meta=(AllowPrivateAccess=true))
    FSDIReplicatedDamageData RepDamageInflictedData;
    
public:
    ASDICorePlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UtilityAIConsumingInput() const;
    
    UFUNCTION(BlueprintCallable)
    void StopStatFileRecording();
    
    UFUNCTION(BlueprintCallable)
    void StopSDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void StopSDICameraShake(const FSDICameraShakeSettings& Shake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartStatFileRecording();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSpectating(bool bWaitingForStartOrSpawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetInactive(bool bWaitingForStartOrSpawn);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatForceServerCrash();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplySDIRadialDamageEventTo(AActor* Actor, float Damage, const FSDIRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplySDIPointDamageEventTo(AActor* Actor, float Damage, const FSDIPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyRadialDamageEventTo(AActor* Actor, float Damage, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyPointDamageEventTo(AActor* Actor, float Damage, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<USDICoreDOTComponent> DamageDOTClass, TSubclassOf<UDamageType> HACK_DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSway(int32 SwayId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectWorldShapeToWidgetPositionWithDimensions(const FSDITransformCollisionShape& Shape, FVector& OutViewportPosition, FVector2D& OutViewportDimensions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectWorldLocationToWidgetPositionWithDistance(const FVector& WorldLocation, FVector& OutViewportPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlaySDIForceFeedback(const FSDIForceFeedbackSettings& ForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void PlaySDICameraShake(const FSDICameraShakeSettings& Shake);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PawnDetached(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PawnAttached(APawn* InPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnADSChanged(ASDICoreCharacter* Char, bool bIsADS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderCameraControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmartMonkey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecenteringCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonkey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockonEngaged(FHitResult& OutTarget, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAimAssistEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintCallable)
    void InputStatFileReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputStatFilePressed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDeviceChanged(bool bIsUsingGamePad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreUtilityAI* GetUtilityAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPureControlRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIUtilityAIDifficulty GetMonkeyDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetInputAxisKeys(FName Axis, bool bGamepad, bool bNonGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetInputAxes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetInputActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetInputActionKeys(FName Action, bool bGamepad, bool bNonGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetControlRotationWithoutAnimatedOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetActiveInputAxisKeys(FName Axis) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetActiveInputActionKeys(FName Action) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopRecenterCamera();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveSway(int32 SwayId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecenterCameraToPawn(float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecenterCamera(FRotator Rotation, float Duration, EAlphaBlendOption Blend, UCurveFloat* CustomCurve, bool bPitch, bool bYaw, bool bRoll);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddSway(const FSDICameraReplicatedSwaySettings& Sway);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddRecoil(const FSDICameraReplicatedRecoilSettings& Recoil);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
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

