#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "ESDIInteractRangeType.h"
#include "SDICorePlayerController.h"
#include "SDIHapticFeedbackManager.h"
#include "AlphaBlend.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "ESDIGripType.h"
#include "SDIPlayerHandInteractComponentEntrySet.h"
#include "SDIWeaponFirearm_FiringWeaponDelegate.h"
#include "SDIInteractAsyncLOSResults.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerController.generated.h"

class ASDIInteractiveHighlightManager;
class ASDINonVRObjectInteractionActor;
class ASDIPlayerHand;
class UCurveFloat;
class UObject;
class UHapticFeedbackEffect_Base;
class ASDIInventoryActor;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIPlayerController : public ASDICorePlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInteractiveHighlightManager> DefaultInteractiveHighlightManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDINonVRObjectInteractionActor> DefaultNonVRObjectInteractionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIPlayerHand> DefaultPlayerHandBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIPlayerHand> DefaultPlayerLeftHandBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIHapticFeedbackManager LeftHandHapticFeedbackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIHapticFeedbackManager RightHandHapticFeedbackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIHapticFeedbackManager GunHapticFeedbackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnScreenMaxHorizontalDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnScreenMaxVerticalDegrees;
    
    UPROPERTY(EditAnywhere)
    TMap<ESDIInteractRangeType, TEnumAsByte<ECollisionChannel>> NonVROverlapChannels;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> InteractLOSChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRInteractCapsuleHalfHeightInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRInteractCapsuleRadiusInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRInteractCapsuleHalfHeightOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRInteractCapsuleRadiusOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractionsToCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractionsCylinderUseCameraXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterInteractionsCylinderHeightAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterInteractionsCylinderHeightBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterInteractionsCylinderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRFilterInteractionsToCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRFilterInteractionsCylinderUseCameraXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRFilterInteractionsCylinderHeightAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRFilterInteractionsCylinderHeightBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRFilterInteractionsCylinderInnerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRFilterInteractionsCylinderOuterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInteractiveHighlightManager* HighlightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDINonVRObjectInteractionActor* NonVRObjectInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* PlayerHandLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* PlayerHandRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption QuickTurnBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* QuickTurnBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurn180Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption QuickTurn180Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* QuickTurn180BlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurn180MinPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurn180InputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickTurn180FadeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnRepeatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float QuickTurnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float QuickTurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float QuickTurnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float QuickTurnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption QuickTurnCurrentBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* QuickTurnCurrentBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuickTurn180Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuickTurn180LockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float QuickTurn180PressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuickTurnLeftPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuickTurnRightPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator QuickTurnRotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditingHandControllerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditingGripOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EditOffsetLocIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EditOffsetRotIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand EditHandEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditMirrorLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDIGripType EditGripType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditSingleHandedGrips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditTwoHandedGrips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OnScreenMinHorizontalCos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OnScreenMinVerticalCos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EControllerHand, FSDIPlayerHandInteractComponentEntrySet> InteractEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EControllerHand, FSDIInteractAsyncLOSResults> InteractAsyncLOSResults;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIWeaponFirearm_FiringWeapon OnFiringWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMusic;
    
    ASDIPlayerController();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMotionControllerTrackingAdjustment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugRenderMotionControllerTracking();
    
    UFUNCTION(BlueprintCallable)
    void StopNonVRObjectInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StopHapticsByValue(EControllerHand hand, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable)
    void StopHapticEffectObject(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand hand, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable)
    bool StopHapticEffectId(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopEditing();
    
    UFUNCTION(BlueprintCallable)
    void StopAllHapticEffects(EControllerHand hand, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetVignetteSettings(float StrengthMultiplier, float OpacityMultiplier, float Comfort);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTwoHandedSecondaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTwoHandedPrimaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSingleHandedSecondaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSingleHandedPrimaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSecondaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPrimaryGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHapticsByValueSDI(const float Frequency, const float Amplitude, EControllerHand hand, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHandControllerOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGripOffset(const FString& hand, const FString& Axis, float Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveItemTo(ASDIInventoryActor* Inventory, AActor* NewOwner);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatServerCommand(const FString& Cmd);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetVRToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ResetVRToHMD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTwoHandedSecondaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTwoHandedPrimaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSingleHandedSecondaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSingleHandedPrimaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSecondaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetPrimaryGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetHandControllerOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetGripOffset(const FString& hand);
    
    UFUNCTION(BlueprintCallable)
    void QuickTurnTowardsPoint(const FVector& Point, EAlphaBlendOption Blend, float OverrideTime, float ClampToIncrement, bool bDoFade, UCurveFloat* CustomCurve);
    
    UFUNCTION(BlueprintCallable)
    void QuickTurnTowards(FVector Dir, EAlphaBlendOption Blend, float OverrideTime, float ClampToIncrement, bool bDoFade, UCurveFloat* CustomCurve);
    
    UFUNCTION(BlueprintCallable)
    void QuickTurnTo(float AngleDeg, EAlphaBlendOption Blend, float OverrideTime, float ClampToIncrement, bool bDoFade, UCurveFloat* CustomCurve);
    
    UFUNCTION(BlueprintCallable)
    void QuickTurn(float DegIncrement, EAlphaBlendOption Blend, float OverrideTime, float ClampToIncrement, bool bDoFade, UCurveFloat* CustomCurve);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayHapticEffectSDI(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand hand, float Scale, bool bLoop, int32 Priority, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticsByValue(EControllerHand hand, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticEffectId(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand hand, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonVRObjectInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditingOffsets() const;
    
    UFUNCTION(BlueprintCallable)
    void InputResetHMD();
    
    UFUNCTION(BlueprintCallable)
    void InputQuickTurnRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputQuickTurnLeft(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputQuickTurnAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputQuickTurn180(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetZ();
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetYaw();
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetY();
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetX();
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetRoll();
    
    UFUNCTION(BlueprintCallable)
    void InputIncEditOffsetPitch();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetZ();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetYaw();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetY();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetX();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetRoll();
    
    UFUNCTION(BlueprintCallable)
    void InputDecEditOffsetPitch();
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetZ(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetY(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetX(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetRoll(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxisEditOffsetPitch(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVignetteSettings(float& StrengthMultiplier, float& OpacityMultiplier, float& Comfort) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDIPlayerHand> GetPlayerHandBlueprint(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetOtherPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDINonVRObjectInteractionActor> GetNonVRObjectInteractionActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDINonVRObjectInteractionActor* GetNonVRObjectInteractionActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDIInteractiveHighlightManager> GetInteractiveHighlightManagerClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInteractiveHighlightManager* GetHighlightManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetHapticFeedbackPlayerHand(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetHapticFeedbackHand(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetHapticFeedbackEffect(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCameraTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraRight2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraForward2D() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditTwoHandedSecondaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditTwoHandedPrimaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditSingleHandedSecondaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditSingleHandedPrimaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditSecondaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditPrimaryGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditHandControllerOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditGripOffset(const FString& hand, float LocIncrement, float RotIncrement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayCurrentEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeQuickTurnTime(float DegIncrement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ComputeQuickTurnTargetAngle(float& Start, float& Target, float DegIncrement, float ClampToIncrement) const;
    
    UFUNCTION(BlueprintCallable)
    bool AdjustHapticEffectScaleId(int32 ID, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void AdjustHapticEffectScale(UHapticFeedbackEffect_Base* HapticEffect, float Scale, EControllerHand hand, UObject* EffectOwner);
    
    UFUNCTION(BlueprintCallable)
    void AddAbsYawInput(float Val);
    
};

